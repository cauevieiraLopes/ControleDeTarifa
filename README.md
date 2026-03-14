# ControleDeTarifa

## 📌 Descrição

Este projeto consiste em um simulador de cobrança de passagem em uma catraca de ônibus, desenvolvido em C++.
O programa solicita ao usuário o saldo de um cartão de transporte e simula o pagamento da tarifa a cada giro da catraca.

A cada utilização, o valor da tarifa é descontado do saldo, e o sistema informa o saldo restante e o número de giros realizados.

O programa continua funcionando até que:

O usuário escolha parar o uso da catraca, ou

O saldo se torne insuficiente para pagar uma nova passagem.

Quando isso acontece, o sistema é encerrado e exibe uma mensagem informando o motivo.

## ⚙️ Funcionalidades

Entrada do saldo inicial do cartão de transporte

Simulação de cobrança automática da tarifa

Exibição de:

saldo restante

número de giros da catraca

Validação da escolha do usuário (continuar ou parar)

Encerramento automático quando o saldo é insuficiente

## 🧠 Lógica do Programa

O sistema funciona com base em um loop do...while, permitindo que o usuário continue passando pela catraca enquanto:

houver saldo suficiente

o usuário desejar continuar

Fluxo básico:

O usuário informa o saldo inicial.

O sistema verifica se o saldo é suficiente para pagar a tarifa.

Caso seja suficiente:

a passagem é autorizada

o valor da tarifa é descontado

o número de giros da catraca é incrementado

O usuário decide se deseja continuar.

Se o saldo ficar abaixo da tarifa, o sistema encerra automaticamente.

## 💻 Exemplo de execução
=====Catraca de ônibus=====

Tarifa: R$5.60

Qual o seu saldo? R$20

=====Catraca de ônibus=====

Passagem autorizada

Saldo restante: R$14.40

N° de giros: 1

Deseja continuar?

[1]Sim

[0]Não

## 🛠️ Tecnologias utilizadas

C++

Biblioteca padrão:

#include <iostream>

## 📚 Objetivo educacional

Este projeto foi desenvolvido com fins didáticos, para praticar conceitos fundamentais de programação em C++ como:

estruturas condicionais (if)

estruturas de repetição (do...while)

entrada e saída de dados (cin / cout)

controle de fluxo

validação de entrada do usuário
