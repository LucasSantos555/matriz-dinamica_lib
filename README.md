Desenvolvimento de uma Biblioteca em C para Matrizes Dinâmicas
Este projeto tem como objetivo desenvolver uma biblioteca modular e reutilizável em C para a manipulação de matrizes 2D alocadas dinamicamente. A biblioteca segue os princípios de arquitetura de software, garantindo que cada função tenha uma única responsabilidade.

Funcionalidades
As seguintes funcionalidades já foram implementadas:

Alocação: Criação de matrizes 2D de tamanho variável.

Inicialização: Preenchimento da matriz com dados fornecidos pelo usuário.

Exibição: Impressão dos valores da matriz de forma organizada.

Como Usar
Para usar esta biblioteca em seus projetos, siga os passos abaixo para compilar e vincular o código.

1. Clonar o Repositório
Bash

git clone https://github.com/SeuUsuario/NomeDoSeuRepositorio.git
cd NomeDoSeuRepositorio
2. Compilar a Biblioteca
O projeto foi projetado para ser compilado como uma biblioteca estática (.a). No terminal, execute os seguintes comandos:

Bash

# Compila o arquivo-fonte em um objeto
gcc -c matrizDinamica.c -o matrizDinamica.o

# Cria a biblioteca estática a partir do objeto
ar rcs libmatriz.a matrizDinamica.o
3. Compilar e Vincular o Projeto Principal
Após a criação da biblioteca, você pode usá-la em seu projeto principal (main.c):

Bash

# Compila o main.c e o vincula com a biblioteca
gcc main.c -L. -lmatriz -o meu_programa
Contribuição
Contribuições são bem-vindas! Se você encontrar um bug ou tiver uma sugestão de melhoria, sinta-se à vontade para abrir uma issue ou enviar um pull request.

