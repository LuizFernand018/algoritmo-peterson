# Algoritmo de Peterson - Simulação de Concorrência

Este repositório apresenta uma implementação técnica do **Algoritmo de Peterson** desenvolvida em C. O projeto simula o controle de acesso à região crítica por duas threads, garantindo a exclusão mútua e evitando condições de corrida em operações bancárias.

## 🏗️ Estrutura Modular

Para demonstrar boas práticas de engenharia de software e organização de código, o projeto foi dividido nos seguintes módulos:

* **`/peterson`**: Implementação das funções `enter` e `leave` (lógica de controle de acesso).
* **`/threads`**: Definição do comportamento das threads de execução.
* **`/conta`**: Gerenciamento do recurso compartilhado (variável `saldo`).
* **`main.c`**: Arquivo principal contendo um **teste de estresse com 10.000 iterações**.

## 🧪 Teste de Estresse

O programa foi projetado para validar a robustez do algoritmo através de um loop de 10.000 execuções. Em cada ciclo, duas threads realizam depósitos simultâneos. 
* Se o saldo final for sempre **1050**, a exclusão mútua está garantida.
* Caso ocorra uma falha de sincronização, o programa interrompe a execução e aponta o erro.

## 🚀 Como Executar

Para compilar o projeto completo unindo todos os módulos no Linux, utilize o comando abaixo:

```bash
# Compilação
gcc -o simulacao main.c threads/thread.c peterson/peterson.c conta/conta.c -lpthread

# Execução do teste
./simulacao
