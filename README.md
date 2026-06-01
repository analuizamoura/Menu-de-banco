# Simulador de Caixa Eletrônico em C

Este é um projeto de simulação de caixa eletrônico desenvolvido em C , focado na aplicação prática de **lógica de programação**, **manipulação de ponteiros** e **persistência de dados em arquivos**.

O projeto foi construído como parte dos meus estudos individuais no 1º período de Ciência da Computação na PUC Minas.

---

## Funcionalidades

* **Identificação por Conta:** O sistema aceita o número da conta em formato de texto (string), o que permite o uso de letras ou traços (ex: "1234-A").
* **Persistência de Dados (Arquivos):** Ao digitar o número da conta, o sistema verifica se existe um histórico salvo (`.txt`). Se encontrar, carrega o saldo automaticamente, caso contrário, inicia uma nova conta.
* **Depósitos e Saques:** Permite movimentar o dinheiro e atualiza o saldo na memória em tempo real.
* **Validação de Saldo:** O programa impede que o usuário faça saques de valores maiores do que o saldo disponível.

## Próximos passos (Melhorias futuras)

Pretendo evoluir este projeto no futuro adicionando os seguintes recursos:
* **Histórico de Transações:** Criar um arquivo separado (um extrato) para listar todas as operações de saque e depósito realizadas pelo usuário.
* **Sistema de Múltiplas Contas:** Permitir que o programa mude de conta e gerencie mais de um perfil aberto na memória.
* **Transferências entre Contas:** Adicionar uma nova opção no menu para transferir um valor de saldo diretamente de uma conta para outra.
* **Migração para C++:** Reescrever a lógica do sistema utilizando Programação Orientada a Objetos (POO), organizando os dados da conta dentro de classes.
