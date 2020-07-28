# Temporizador-Arduino
Temporizador para Arduíno uno que ativa e desativa em horário programado pelo desenvolvedor

O código funciona de maneira simples, e não faz o uso de bateria interna, necessário o uso de uma fonte externa de energia, portanto o código não sabe o horário exato atualmente, precisando

Antes de usar o código é necessário entender as suas limitações:
1) O código não utiliza bateria interna, sendo necessário um fonte externa de energia para manter o cronometro
2) O tempo que o cronometro deve iniciar, bem como tempo para ligar e desligar devem ser feitos diretamente no código
3) O código foi criado de forma a controlar apenas um pino do arduino (Não impede que possa ser alterado)

A forma de inserir as informações de horários no código é através das variáveis no escopo do código, sendo elas:

# Ajustando qual pino digital será usado
A variável que informa qual pino será usado pelo código é a "pinoLED" abaixo segue um exemplo de como ela utiliza o pino digital número 13

int pinoLED = 13;

# Ajustando o Timer com o horário atual
As três variáveis abaixo são necessárias para definir horário atual, sendo uma variável especifica para as horas, minutos e segundos, abaixo segue um exemplo do horário 00:23:04 (Meia noite, vinte e três minutos e quatro segundos)

int Relogio_Segundos = 0;
int Relogio_Minutos = 23;
int Relogio_Horas = 4;

# Ajustando o Timer para Ativar
As três variáveis possuem a função de informar o horário que o pino deve ser ativado, sendo uma variável especifica para as horas, minutos e segundos, abaixo segue um exemplo do horário 09:00:00 (Nove horas, zero minutos e zero segundos), o sistema ativará o pino as 09 horas em ponto e deixará ligado até o horário de desligar chegar

int Ligar_Segundos = 0;
int Ligar_Minutos = 0;
int Ligar_Horas = 9;

# Ajustando o Timer para Desativar
  As três variáveis possuem a função de informar o horário que o pino deve ser desativado, sendo uma variável especifica para as horas, minutos e segundos, abaixo segue um exemplo do horário 10:00:00 (Dez horas, zero minutos e zero segundos), o sistema Desativará o pino as 10 horas em ponto e deixará desligado até o horário de ligar novamente chegar
  
int Desligar_Segundos = 0;
int Desligar_Minutos = 0;
int Desligar_Horas = 10;
