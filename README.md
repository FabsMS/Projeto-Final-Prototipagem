# Projeto Automação de Persiana com Arduino

Este projeto utiliza um Arduino UNO para controlar automaticamente uma persiana com base em sensores de chuva e luminosidade. O sistema aciona um motor de passo 28BYJ-48, por meio de um driver ULN2003, para abrir ou fechar a persiana conforme as condições ambientais.

## Índice

- [Visão Geral](#visão-geral)
- [Componentes](#componentes-do-sistema)
- [Vídeo Demonstrativo](#funcionamento)
- [Considerações](#considerações)

## Visão Geral

O sistema foi desenvolvido para automatizar o controle de uma persiana, ajustando sua posição de acordo com as condições ambientais. São utilizados:
- **Sensor de Chuva:** para detectar a presença de chuva.
- **Sensor de Luminosidade (LDR):** para monitorar os níveis de luz.

Com base nas leituras desses sensores, o motor de passo 28BYJ-48, acionado pelo driver ULN2003, movimenta uma roldana que está integrada ao mecanismo de abertura da persiana realizando um número determinado de voltas para abrir e fechar a persiana, esse número pode ser ajustado conforme necessário.

## Objetivo

O objetivo do projeto é desenvolver um protótipo funcional de uma persiana automática que utiliza sensores de luminosidade e chuva para ajustar sua posição de forma inteligente, melhorando a qualidade de vida dos usuários, otimizando o consumo de energia, poupando seu tempo e protegendo o ambiente interno de condições climáticas adversas, sem a necessidade da realização de uma tarefa manual repetidas vezes durante o dia.

## Componentes do Sistema

- **Arduino UNO**
- **Motor de Passo 28BYJ-48** com driver **ULN2003**
- **Sensor de Chuva**
- **LDR (Fotoresistor)**
- **Resistor (10kΩ)**
- **Protoboard**
- **Jumpers**
- **Persiana**
- **Roldana**

## Funcionamento

Para visualizar o funcionamento do projeto, acesse o vídeo demonstrativo no link abaixo:  

🔗 **[Vídeo do Projeto](https://youtu.be/MzBqjbwzDJk)**  

No vídeo, é possível ver o sistema em ação, demonstrando como os sensores detectam as condições ambientais e acionam a persiana automaticamente.

## Considerações

- O projeto é ideal para automatizar a abertura e fechamento de persianas com base em condições ambientais.
- O número de voltas do motor pode ser ajustado no código para adequar a movimentação ao mecanismo da persiana.
- É importante calibrar os sensores para garantir o acionamento correto da persiana conforme o ambiente em que o protótipo está.
