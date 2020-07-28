int pinoLED = 13;
//Ajuste de acordo com o horario atual
int Relogio_Segundos = 0;
int Relogio_Minutos = 23;
int Relogio_Horas = 4;         

//Ajuste o horario para iniciar o sistema
int Ligar_Segundos = 0;
int Ligar_Minutos = 0;
int Ligar_Horas = 9;

//Ajuste o horario para desligar o sistema
int Desligar_Segundos = 0;
int Desligar_Minutos = 0;
int Desligar_Horas = 10;

void setup() {
  Serial.begin(9600);    //configura comunicação serial com 9600 bps
  pinMode(pinoLED,OUTPUT);   //configura pino do led como saída
  digitalWrite(pinoLED, HIGH);// Iniciar o sistema com o pino desativado
}

void loop() {
ContaSegundos();//Controle do horario do sistema
Agendar_Horario_Desligar();//Monitora o horario de desligar o sistema
Agendar_Horario_Ligar();//Monitora o horario de ligar o sistema
ExibeTempo();//Exibe o horario do sistema
}

void ContaSegundos(){
  delay(1000); //1 segundo
  Relogio_Segundos = Relogio_Segundos + 1;
  if(Relogio_Segundos == 60){
  Relogio_Segundos = 0;
  ContaRelogio_Minutos();
  }
}

void ContaRelogio_Minutos(){
  Relogio_Minutos = Relogio_Minutos + 1;
  if(Relogio_Minutos == 60){
  Relogio_Minutos = 0;
  ContaRelogio_Horas();
  }
}

void ContaRelogio_Horas(){
  Relogio_Horas = Relogio_Horas + 1;
  if(Relogio_Horas == 24){
    Relogio_Minutos = 0;
    Relogio_Segundos = 0;
    Relogio_Horas = 0;
  }
}

void ExibeTempo(){
  Serial.println("Segundos:");
  Serial.println(Relogio_Segundos);
  
  Serial.println("Minutos:");
  Serial.println(Relogio_Minutos);
  
  Serial.println("Horas:");
  Serial.println(Relogio_Horas);
}

void Agendar_Horario_Desligar(){
  if(Relogio_Horas == Desligar_Horas){
    if(Relogio_Minutos == Desligar_Minutos){
      if(Relogio_Segundos == Desligar_Segundos){
        digitalWrite(pinoLED, HIGH);
        Serial.println("Sistema Desligado");
      }
    }
  }
}

void Agendar_Horario_Ligar(){
  if(Relogio_Horas == Ligar_Horas){
    if(Relogio_Minutos == Ligar_Minutos){
      if(Relogio_Segundos == Ligar_Segundos){
        digitalWrite(pinoLED, LOW);
        Serial.println("Sistema Ligado");
      }
    }
  }
}
