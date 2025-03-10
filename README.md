# Projeto Automação de Persiana com Arduino

Este projeto utiliza um Arduino UNO para controlar automaticamente uma persiana com base em sensores de chuva e luminosidade. O sistema aciona um motor de passo 28BYJ-48, por meio de um driver ULN2003, para abrir ou fechar a persiana conforme as condições ambientais.

## Índice

- [Visão Geral](#visão-geral)
- [Componentes](#componentes)
- [Considerações](#considerações)

## Visão Geral

O sistema foi desenvolvido para automatizar o controle de uma persiana, ajustando sua abertura de acordo com as condições ambientais. São utilizados:
- **Sensor de Chuva:** para detectar a presença de chuva.
- **Sensor de Luminosidade (LDR):** para monitorar os níveis de luz.

Com base nas leituras desses sensores, o motor de passo 28BYJ-48, acionado pelo driver ULN2003, movimenta a persiana realizando um número determinado de voltas, que pode ser ajustado conforme necessário.

## Componentes

- **Arduino UNO**
- **Motor de Passo 28BYJ-48** com driver **ULN2003**
- **Sensor de Chuva**
- **LDR (Fotoresistor)**
- **Resistor (10kΩ)**
- **Protoboard**
- **Jumpers**

## Considerações

- O projeto é ideal para automatizar a abertura e fechamento de persianas com base em condições ambientais.
- O número de voltas do motor pode ser ajustado no código para adequar a movimentação ao mecanismo da persiana.
- É importante calibrar os sensores para garantir o acionamento correto da persiana conforme o ambiente.
