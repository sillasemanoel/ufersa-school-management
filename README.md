# Sistema de Gerenciamento Escolar

[![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)](<https://en.wikipedia.org/wiki/C_(programming_language)>)
[![Windows](https://img.shields.io/badge/Windows-0078D6?style=flat&logo=windows&logoColor=white)](https://www.microsoft.com/windows)

> **Primeira Avaliação Prática de Algoritmos e Estruturas de Dados I**  
> Universidade Federal Rural do Semi-Árido (UFERSA)

## 📋 Descrição

Este projeto implementa um sistema simples de gerenciamento escolar em linguagem C, utilizando arrays e structs para armazenar e manipular dados de alunos. O sistema permite o cadastro de alunos, visualização de informações, atualização de notas e classificação por aprovação/reprovação.

## 🏗️ Estrutura de Dados

### Struct `Notas`

```c
typedef struct {
    double n1, n2, n3;
} Notas;
```

### Struct `Aluno`

```c
typedef struct {
    char nome[50];
    char cidade[50];
    double media;
    Notas notas;
} Aluno;
```

## ⚙️ Funcionalidades

- **Cadastrar Aluno** - Registro de novo aluno em posição específica do array
- **Visualizar Geral** - Exibição de todos os alunos cadastrados com suas informações
- **Atualizar Notas** - Modificação das notas de um aluno existente
- **Listar Aprovados** - Exibição de alunos com média ≥ 6.0
- **Listar Reprovados** - Exibição de alunos com média < 6.0
- **Sair** - Encerramento do programa

## 📊 Sistema de Avaliação

- **Cálculo de Média**: Utiliza a média geométrica das três notas
  ```c
  media = cbrt(n1 * n2 * n3)
  ```
- **Critério de Aprovação**: Média ≥ 6.0
- **Capacidade**: Até 5 alunos simultaneamente

## 🚀 Como Executar

### Pré-requisitos

- Compilador GCC
- Sistema Windows com bash

### Compilação

```bash
gcc main.c -o output/arrays-structs.exe -lm
```

### Execução

```bash
./output/arrays-structs.exe
```

## 🎯 Exemplo de Uso

```
+------------------------------+
|         ESCOLAR              |
+------------------------------+
| 1 - Cadastrar aluno          |
| 2 - Visualizar geral         |
| 3 - Atualizar notas de aluno |
| 4 - Listar aprovados         |
| 5 - Listar reprovados        |
| 0 - Sair                     |
+------------------------------+
O que deseja fazer? 1

=== CADASTRAR ALUNO ===
Em qual índice deseja adicionar o novo aluno (0-4): 0
Digite o nome do aluno: João Silva
Digite a cidade do aluno: Mossoró
Digite as 3 notas respectivamente: 8.5 7.0 9.0
Aluno cadastrado com sucesso!
```

## 📁 Estrutura do Projeto

```
school-management/
├── main.c              # Código-fonte principal
├── README.md           # Documentação do projeto
└── output/
    └── arrays-structs.exe  # Executável compilado
```

## 🔧 Conceitos Aplicados

- **Arrays**: Armazenamento de múltiplos alunos
- **Structs**: Organização de dados relacionados
- **Structs Aninhadas**: `Notas` dentro de `Aluno`
- **Manipulação de Strings**: `fgets()`, `strlen()`, `strcpy()`
- **Entrada/Saída Formatada**: `printf()`, `scanf()`
- **Estruturas de Controle**: `while`, `switch`, `for`
- **Validação de Entrada**: Verificação de índices válidos

## 👨‍💻 Autor

**Sillas Emanoel Pessoa França**  
Universidade Federal Rural do Semi-Árido (UFERSA)

## 📚 Disciplina

**Laboratório de Algoritmos e Estruturas de Dados I**  
Professor: Reudismam Rolim de Sousa  
Primeira Avaliação Prática

---

_Este projeto demonstra a aplicação prática de conceitos fundamentais de programação em C, focando no uso eficiente de arrays e structs para resolver problemas do mundo real._
