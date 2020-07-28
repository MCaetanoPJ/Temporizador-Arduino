# Temporizador-Arduino
Temporizador que monitora o horário de acordo com o usuário e ativa ou desativa um pino em horário programado

O código funciona de maneira simples, e não faz o uso de bateria interna, necessário o uso de uma fonte externa de energia, portanto o código não sabe o horário exato atualmente, precisando

Antes de usar o código é necessário entender as suas limitações:
1) O código não utiliza bateria interna, sendo necessário um fonte externa de energia para manter o cronometro
2) O tempo que o cronometro deve iniciar, bem como tempo para ligar e desligar devem ser feitos diretamente no código
3) O código foi criado de forma a controlar apenas um pino do arduino (Não impede que possa ser alterado)

A forma de inserir as informações de horários no código é através das variáveis no escopo do código, sendo elas:
//teste
//int pinoLED = 13;
