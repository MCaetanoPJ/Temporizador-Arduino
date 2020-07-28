# Temporizador-Arduino
Temporizador que monitora o horário de acordo com o usuário e ativa ou desativa um pino em horário programado

O código funciona de maneira simples, e não faz o uso de bateria interna, necessário o uso de uma fonte externa de energia, portanto o código não sabe o horário exato atualmente, precisando

Antes de usar o código é necessário entender as suas limitações:
1) O código não utiliza bateria interna, sendo necessário um fonte externa de energia para manter o cronometro
2) O tempo que o cronometro deve iniciar, bem como tempo para ligar e desligar devem ser feitos diretamente no código
3) O código foi criado de forma a controlar apenas um pino do arduino (Não impede que possa ser alterado)

A forma de inserir as informações de horários no código é através das variáveis no escopo do código, sendo elas:

int pinoLED = 13;
__Ajuste de acordo com o horario atual
int Relogio_Segundos = 0;
int Relogio_Minutos = 23;
int Relogio_Horas = 4;

_Ajuste o horario para iniciar o sistema
int Ligar_Segundos = 0;
int Ligar_Minutos = 0;
int Ligar_Horas = 9;

//Ajuste o horario para desligar o sistema
int Desligar_Segundos = 0;
int Desligar_Minutos = 0;
int Desligar_Horas = 10;

# setup
# loop
# ContaSegundos
# ContaRelogio_Minutos
# ContaRelogio_Horas
# ExibeTempo
# Agendar_Horario_Desligar
# Agendar_Horario_Ligar
