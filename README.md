# Construção de um Semáforo com Sistemas Digitais 🚦

O objetivo deste trabalho foi projetar um sistema de semáforo no qual o sinal fechado dura 5 segundos, o sinal de atenção dura 2 segundos e o sinal aberto dura 5 segundos. O foco não foi apenas desenvolver o projeto, mas também exercitar o conhecimento adquirido em relação à plataforma Arduino, bem como o desenvolvimento em C, manipulando diretamente os registradores do microcontrolador utilizado (ATMega2560).

## 📦 Lista de Componentes

|Nome                       |Quantidade|Componente            |
|---------------------------|----------|----------------------|
|U1                         |    1     |Arduino Mega 2560     |
|DL_vermelho                |    1     |LED Vermelho          |
|DL_amarelo                 |    1     |LED Amarelo           |
|DL_verde                   |    1     |LED Verde             |
|RR_verde, RR_amarelo, RR_vermelho|    3     |Resistor de 100 Ω     |

## 💡 Vista Esquemática

Com base no esquema projetado, o circuito foi montado e uma visualização conceitual da PCB foi produzida usando o software KiCad, como demonstrado abaixo.
- [Visão esquemática do projeto](./assets/schematic-test-view.png).

**Abaixo, você pode observar os resultados do projeto de PCB 3D e no editor de PCB KiCad:**

- [Resultados do PCB 3D](./assets/digital-traffic-3D.png).
- [Editor de PCB KiCad](./assets/PCB_test_digital_traffic.png).

## 💻 Simulação

<h4>Programa 1 - Manipulação Direta dos Registradores</h4>

O primeiro programa utiliza a técnica de manipulação direta dos registradores para controlar os LEDs do semáforo. Neste caso, os LEDs estão conectados aos pinos 4, 5 e 6 do Arduino, que correspondem aos registradores DDRG, DDRE e DDRH. Comandos equivalentes para configurar os pinos como saída, ligar e desligar os LEDs e criar atrasos são realizados por meio de operações diretas com esses registradores. Este método é mais complexo e requer um conhecimento mais profundo do hardware subjacente.

<h4>Programa 2 - Uso de Comandos do Arduino</h4>

O segundo programa utiliza comandos nativos do Arduino para realizar as mesmas tarefas. Ele utiliza as funções `pinMode()` e `digitalWrite()` para configurar os pinos como saída e controlar os LEDs. Essas funções abstraem a manipulação direta dos registradores, tornando o código mais legível e acessível. Além disso, as funções `delay()` são usadas para criar atrasos temporais, tornando o código mais simples de entender.

<h4>Comandos Equivalentes</h4>

Ambos os programas possuem comandos equivalentes, que desempenham funções semelhantes:
<ol>
  <li>Configuração dos pinos como saída: Ambos utilizam comandos para configurar os pinos dos LEDs como saída.</li>
  <li>Controle dos LEDs: Ambos utilizam comandos para ligar e desligar os LEDs.</li>
  <li>Atrasos (Delays): Ambos utilizam comandos para criar atrasos temporais.</li>
</ol>

**Acesse o relatório [aqui](https://docs.google.com/document/d/1Vi-jQYvrnQ7ScGuVZsoD0Jnd9IB_S97zQoPqURQRzTI/edit?usp=sharing).**<br>
**Video da prática [aqui](https://youtube.com/shorts/Nvl-8OjJIZM).**<br>
**Video da simulação no TinkerCad [aqui](https://youtu.be/mYE4NWMDbbM)**

---

<div align="center">
  Universidade Federal do Rio Grande do Norte - Departamento de Engenharia de Computação e Automação (DCA).
</div>
