//Exercício 1

#include <stdio.h>

struct Horário
{
  int hora;
  int minuto;
  int segundos;
};

struct Data
{
  int dia;
  int mes;
  int ano;
};

struct Compromisso
{
 
  int data;
  int horario;
  char texto[100];
};

//Exercício 2

#include <stdio.h>
#include <string.h>

struct Dados_Pessoa
{
    char nome[100];
    int idade;
    int numero_casa;
    char bairro[100];
    char rua[100];
};

int
main()
{
    struct Dados_Pessoa Dados;

    typedef struct Dados_Pessoa Dados_Pessoa;

    printf ("Digite Nome: ");
    fgets (Dados.nome, 100, stdin);

    printf ("\n");
  
  

    printf ("Digite Idade: ");
    scanf ("%i", &Dados.idade);

    printf ("\n");

    printf ("Digite o Numero da casa: ");
    scanf ("%i", &Dados.numero_casa);

    printf ("\n");

    printf ("Digite o bairro: ");
    fgets (Dados.bairro, 100, stdin);

    printf ("\n");

    printf ("Digite a rua: ");
    fgets (Dados.rua, 100, stdin);

    return 0;
}

//Exercício 3

#include <stdio.h>
#include <string.h>

struct Aluno
{
    char Nome[100];
    int Numero_Matricula;
    char curso[100];
};

int
main()
{
    struct Aluno Alunos[5];
    int i;

    typedef struct Aluno Aluno;

    for (i = 0 ; i < 5 ; i++)
    {
        printf ("Digite o nome do aluno: ");
        fgets (Alunos[i].Nome, 100, stdin);

        printf ("\n");

        printf ("Digite o numero de matricula: ");
        scanf ("%i", &Alunos[i].Numero_Matricula);

        printf ("\n");

        fflush(stdin);

        printf ("Digite o curso do aluno: ");
        fgets (Alunos[i].curso, 100, stdin);

        printf ("\n");
    }

    printf ("Dados Inseridos: ");

    printf ("\n");

    for (i = 0 ; i < 5 ; i++)
    {
        printf ("Aluno %i", i+1);

        printf ("\n");

        printf ("Nome: %s", Alunos[i].Nome);

        printf ("\n");

        printf ("Numero de Matricula: %i", Alunos[i].Numero_Matricula);

        printf ("\n");

        printf ("Curso: %s", Alunos[i].curso);

        printf ("\n");
    }

    return 0;
}

//Exercício 4

