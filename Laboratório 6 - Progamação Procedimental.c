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

    printf ("Aluno com Maior Media:\n\n");
    printf ("Nome: %s\n", Alunos[Numero_Aluno_MaiorMedia].Nome);
    printf ("Matricula: %s\n)", Alunos[Numero_Aluno_MaiorMedia].Matricula);
   
    printf ("Aluno com Menor Media:\n\n");
    printf ("Nome: %s\n", Alunos[Numero_Aluno_MenorMedia].Nome);
    printf ("Matricula: %s\n)", Alunos[Numero_Aluno_MenorMedia].Matricula);

    for ( i = 0 ; i < 5 ; i++)
    {
        if (Media >= 6)
        {
            printf ("%s Foi aprovado!", Alunos[i].Nome);
        }
        else
        {
            printf ("%s Foi Reprovado!", Alunos[i].Nome);
        }
    }
    
    return 0;
}

//Exercício 5

#include <stdio.h>
#include <string.h>

struct Vetor
{
    float a;
    float b;
    float c;
};

int main()
{
    typedef struct Vetor Vetor;

    Vetor u, v;

    printf ("Digite as coordenadas de um vetor u: ");
    scanf ("%f %f %f", &u.a, &u.b, &u.c);

    printf ("\n");

    printf ("Digite as coordenadas de um vetor v: ");
    scanf ("%f %f %f", &v.a, &v.b, &v.c);

    printf ("\n");

    printf ("O vetor resultante R e igual a: %.2f %.2f %.2f", u.a + v.a, u.b + v.b, u.c + v.b);

    return 0;   
}

//Exercício 6

#include <stdio.h>
#include <string.h>

struct Dados
{
    char Matricula[100];
    char Nome[100];
    int Codigo_Disciplina;
    float Nota1;
    float Nota2;
};

int main()
{
    typedef struct Dados Dados;
    
    Dados Alunos[10];
    int i;
    float Media;

    for (i = 0 ; i < 10 ; i++)
    {
        printf ("Digite a matricula do aluno %i:", i+1);
        fgets (Alunos[i].Matricula, 100, stdin);

        fflush(stdin);

        printf ("Digite o nome do aluno %i: ", i+1);
        fgets (Alunos[i].Nome, 100, stdin);

        fflush(stdin);

        printf ("Digite o Codigo da Disciplina: ");
        scanf ("%i", &Alunos[i].Codigo_Disciplina);

        fflush(stdin);

        printf ("Digite a Nota da P1 e da P2: ");
        scanf ("%f %f", &Alunos[i].Nota1, &Alunos[i].Nota2);

        fflush(stdin);
    }

    for (i = 0 ; i < 10 ; i++)
    {
        Media = (Alunos[i].Nota1 + 2*(Alunos[i].Nota2))/3;
        printf ("Media do aluno %s, de matricula %s eh %.2f", Alunos[i].Nome, Alunos[i].Matricula, Media);
    }

    return 0;
}

//Exercício 7

#include <stdio.h>
#include <string.h>
#include <math.h>

struct Coordenadas_Polar
{
    int Raio;
    int Radianos;
};

typedef struct Coordenadas_Polar Coordenadas_Polar;

int main()
{
    Coordenadas_Polar Ponto;
    float x, y;

    printf ("Digite o raio e argumento de uma coordenada polar: ");
    scanf ("%i %i", &Ponto.Raio, &Ponto.Radianos);

    x = Ponto.Raio*cos(Ponto.Radianos);
    y = Ponto.Raio*sin(Ponto.Radianos);

    printf ("O ponto em coordenadas cartesiadas eh: %.2f %.2f", x, y);

    return 0;
}

//Exercício 8

#include <stdio.h>
#include <string.h>
#include <math.h>

struct Registro_Dados
{
    char Nome[100];
    int Idade;
    char Sexo;
    char CPF[12];
    char Data_Nascimento[11];
    int Codigo_Setor;
    char Cargo_Ocupante[30];
    int Salario;
};

typedef struct Registro_Dados Registro_Dados;

int main()
{
    Registro_Dados Funcionario;

    printf ("Digite o nome do Funcionario: ");
    fgets (Funcionario.Nome, 100, stdin);

    printf ("Digite a idade do Funcionario: ");
    scanf ("%i", &Funcionario.Idade);

    printf ("Digite o Sexo do Funcionario: (M ou F)");
    scanf ("%s", &Funcionario.Sexo);

    fflush(stdin);

    printf ("Digite o CPF do funcionario: ");
    fgets(Funcionario.CPF, 12, stdin);

    fflush(stdin);

    printf ("Digite a idade do Funcionario (dd/mm/aaaa): ");
    fgets (Funcionario.Data_Nascimento, 11, stdin);

    printf ("Digite o codigo do setor do Funcionario (00-99): ");
    scanf ("%i", &Funcionario.Codigo_Setor);

    fflush(stdin);

    printf ("Digite o cargo do funcionario: ");
    fgets (Funcionario.Cargo_Ocupante, 30, stdin);

    printf ("Digite o Salario do Funcionario: ");
    scanf ("%i", &Funcionario.Salario);

    printf ("Nome do funcionario: %s", Funcionario.Nome);
    printf ("Idade do funcionario: %i\n", Funcionario.Idade);
    printf ("Sexo do funcionario: %c\n", Funcionario.Sexo);
    printf ("CPF do funcionario: %s\n", Funcionario.CPF);
    printf ("Data de nascimento do funcionario: %s\n", Funcionario.Data_Nascimento);
    printf ("Codigo do setor: %i\n", Funcionario.Codigo_Setor);
    printf ("Cargo ocupante do funcionario: %s\n", Funcionario.Cargo_Ocupante);
    printf ("Salario do funcionario: %i\n", Funcionario.Salario);

    return 0;
}

//Exercício 9

//Exercício 10



