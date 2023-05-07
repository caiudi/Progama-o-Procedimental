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

#include <stdio.h>
#include <string.h>

struct 
Dados
{
    char Nome[100];
    char Matricula[100];
    int Nota_P1;
    int Nota_P2;
    int Nota_P3;
};

int 
main()
{
    typedef struct Dados Dados;
    
    Dados Alunos[5];
    int i;
    int Maior_P1 = 0, Maior_Media = 0, Menor_Media = 0;
    int Numero_Aluno_P1, Numero_Aluno_MaiorMedia, Numero_Aluno_MenorMedia;
    float Media = 0;

    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf ("Digite o nome do aluno: ");
        fgets(Alunos[i].Nome, 100, stdin);

        printf ("Digite a Matricula: ");
        fgets(Alunos[i].Matricula, 100, stdin);

        printf ("Digite a nota da P1: ");
        scanf ("%i", &Alunos[i].Nota_P1);

        printf ("Digite a nota da P2: ");
        scanf ("%i", &Alunos[i].Nota_P2);

        printf ("Digite a nota da P3: ");
        scanf ("%i", &Alunos[i].Nota_P3);

        fflush(stdin);
        
        printf ("\n");
        
        if (Alunos[i].Nota_P1 > Maior_P1)
        {
            Maior_Media = Alunos[i].Nota_P1;
            Numero_Aluno_P1 = i;
        }
        
        Media = ((Alunos[i].Nota_P1+Alunos[i].Nota_P2+Alunos[i].Nota_P3)/3);
        
        if (Media > Maior_Media)
        {
            Maior_Media = Media;
            Numero_Aluno_MaiorMedia = i;
        }
        
        if (Media < Menor_Media)
        {
            Menor_Media = Media;
            Numero_Aluno_MenorMedia = i;
        }
    }

    printf ("Aluno com Maior P1:\n\n");
    printf ("Nome: %s\n", Alunos[Numero_Aluno_P1].Nome);
    printf ("Matricula: %s\n)", Alunos[Numero_Aluno_P1].Matricula);
    printf ("P1: %i\n", Alunos[Numero_Aluno_P1].Nota_P1);
    printf ("P2: %i\n", Alunos[Numero_Aluno_P1].Nota_P2);
    printf ("P3: %i\n", Alunos[Numero_Aluno_P1].Nota_P3);

    printf ("Aluno com Maior Media:\n\n");
    printf ("Nome: %s\n", Alunos[Numero_Aluno_MaiorMedia].Nome);
    printf ("Matricula: %s\n)", Alunos[Numero_Aluno_MaiorMedia].Matricula);
    printf ("P1: %i\n", Alunos[Numero_Aluno_MaiorMedia].Nota_P1);
    printf ("P2: %i\n", Alunos[Numero_Aluno_MaiorMedia].Nota_P2);
    printf ("P3: %i\n", Alunos[Numero_Aluno_MaiorMedia].Nota_P3);

    printf ("Aluno com Menor Media:\n\n");
    printf ("Nome: %s\n", Alunos[Numero_Aluno_MenorMedia].Nome);
    printf ("Matricula: %s\n)", Alunos[Numero_Aluno_MenorMedia].Matricula);
    printf ("P1: %i\n", Alunos[Numero_Aluno_MenorMedia].Nota_P1);
    printf ("P2: %i\n", Alunos[Numero_Aluno_MenorMedia].Nota_P2);
    printf ("P3: %i\n", Alunos[Numero_Aluno_MenorMedia].Nota_P3);
}


