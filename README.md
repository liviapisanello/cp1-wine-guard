# Edge Computing & Computer Systems

## Checkpoint 01 – Vinheria Agnello

### Integrantes do Grupo

* Rafael Dias – RM: 570504
* Lívia Laur – RM: 569017
* Lara Beatriz – RM: 572589
* Gustavo Pereira – RM: 570549
* Luca Baccari – RM: 569807

---

### Links
Tinkercad: https://www.tinkercad.com/things/0DAlcsJxkOM-vinheria/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=CGdGstl7ESX6cz9juPa6X2biUwa-ZhVH8lXsf58Q0FE

Vídeo: https://youtu.be/17hsRXe-48g?si=5_9GbnMYU4o8qfoh

---

### Descrição do Projeto

Este projeto tem como objetivo desenvolver um sistema de monitoramento de luminosidade utilizando Arduino, com foco na preservação da qualidade dos vinhos armazenados na Vinheria Agnello.

A exposição excessiva à luz pode provocar alterações químicas no vinho, comprometendo suas características. Diante disso, o sistema foi projetado para monitorar continuamente a luminosidade do ambiente e indicar quando os níveis estiverem inadequados.

---

### Funcionamento do Sistema

O sistema utiliza um sensor LDR (Light Dependent Resistor) para medir a luminosidade do ambiente. O Arduino realiza a leitura dos dados e classifica o ambiente em três estados:

* **Ambiente adequado**: baixa luminosidade
* **Estado de alerta**: luminosidade moderada
* **Condição crítica**: alta luminosidade

Cada estado é representado por um LED específico (verde, amarelo e vermelho).

Quando a luminosidade atinge níveis críticos, um buzzer é acionado por 3 segundos. Caso a condição persista, o alerta sonoro é repetido.

---

### Componentes Utilizados

* Arduino Uno
* LDR (sensor de luminosidade)
* 3 LEDs (verde, amarelo e vermelho)
* Resistores
* Buzzer
* Protoboard
* Jumpers

---

### Lógica do Sistema

* O LDR capta a luminosidade do ambiente
* O Arduino realiza a leitura analógica (valores de 0 a 1023)
* O sistema compara os valores com faixas previamente definidas
* A partir dessa comparação:

  * LED verde indica ambiente adequado
  * LED amarelo indica estado de alerta
  * LED vermelho indica condição crítica
  * Buzzer é acionado em condição crítica

---

### Implementação do Projeto

#### Simulação

* Montagem do circuito em ambiente virtual (ex.: Tinkercad)
* Execução do código no simulador
* Testes com variação da luminosidade

#### Projeto Físico

* Montagem do circuito em protoboard
* Conexão dos componentes ao Arduino
* Testes em ambiente real com variação de luz

---

### Como Executar

1. Montar o circuito (simulado ou físico)
2. Inserir o código no Arduino
3. Iniciar a execução
4. Variar a luminosidade do ambiente
5. Observar o comportamento dos LEDs e do buzzer

---
