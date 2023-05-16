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

#include <stdio.h>
#include <math.h>

struct complexo
{
  float real;
  float imag;
};

typedef struct complexo complexo;

int main() {
  complexo z, w, s, sub, p;
  float modz, modw;

  printf("Digite a parte real e imaginaria de z: ");
  scanf("%f %f", &z.real, &z.imag);
  printf("Digite a parte real e imaginaria de w: ");
  scanf("%f %f", &w.real, &w.imag);

  s.real = z.real + w.real;
  s.imag = z.imag + w.imag;

  sub.real = z.real - w.real;
  sub.imag = z.imag - w.imag;

  p.real = z.real*w.real - z.imag*w.imag;
  p.imag = z.real*w.imag + z.imag*w.real;

  modz = sqrt(z.real*z.real + z.imag*z.imag);
  modw = sqrt(w.real*w.real + w.imag*w.imag);

  printf("Soma: %.2f + %.2fi\n", s.real, s.imag);
  printf("Subtracao: %.2f + %.2fi\n", sub.real, sub.imag);
  printf("Produto: %.2f + %.2fi\n", p.real, p.imag);
  printf("Modulo de z: %.2f\n", modz);
  printf("Modulo de w: %.2f\n", modw);

  return 0;
}

//Exercício 10

#include <stdio.h>
#include <string.h>

struct Pessoa 
{
  char nome[50];
  char endereco[100];
  char telefone[20];
};

typedef struct Pessoa Pessoa;

int main() 
{
  Pessoa pessoas[5];
  int i, j;
  Pessoa temp;

  for (i = 0; i < 5; i++) 
  {
    printf("Digite o nome da pessoa %d: ", i+1);
    fgets(pessoas[i].nome, 50, stdin);
    printf("Digite o endereco da pessoa %d: ", i+1);
    fgets(pessoas[i].endereco, 100, stdin);
    printf("Digite o telefone da pessoa %d: ", i+1);
    fgets(pessoas[i].telefone, 20, stdin);
  }

  for (i = 0; i < 5-1; i++) 
  {
    for (j = i+1; j < 5; j++) {
      if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) 
      {
        temp = pessoas[i];
        pessoas[i] = pessoas[j];
        pessoas[j] = temp;
      }
    }
  }

  printf("Dados das pessoas em ordem alfabetica:\n");
  for (i = 0; i < 5; i++) 
  {
    printf("Nome: %s", pessoas[i].nome);
    printf("Endereco: %s", pessoas[i].endereco);
    printf("Telefone: %s\n", pessoas[i].telefone);
  }

  return 0;
}

//Exercício 11

#include <stdio.h>
#include <stdlib.h>

struct Aluno 
{
    char nome[50];
    int matricula;
    float mediaFinal;
};

typedef struct Aluno Aluno;

int main() 
{
    Aluno alunos[10];
    Aluno aprovados[10];
    Aluno reprovados[10];
    int i, j = 0, k = 0;

    for (i = 0; i < 10; i++) 
    {
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a media final do aluno %d: ", i+1);
        scanf("%f", &alunos[i].mediaFinal);
        fflush(stdin);
    }

    for (i = 0; i < 10; i++) 
    {
        if (alunos[i].mediaFinal >= 5.0) 
        {
            aprovados[j] = alunos[i];
            j++;
        } 
        else 
        {
            reprovados[k] = alunos[i];
            k++;
        }
    }

    printf("\nAlunos aprovados:\n");
    for (i = 0; i < j; i++) 
    {
        printf("Nome: %s", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media Final: %.2f\n", aprovados[i].mediaFinal);
        printf("\n");
    }

    printf("\nAlunos reprovados:\n");
    for (i = 0; i < k; i++) 
    {
        printf("Nome: %s", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media Final: %.2f\n", reprovados[i].mediaFinal);
        printf("\n");
    }

    return 0;
}

//Exercício 12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct carta 
{
    int naipe; //0 = Ouros, 1 = Espadas, 2 = Copas, 3 = Paus.
    int valor; //Numeração de 1 a 10;
};

typedef struct carta carta;

int main()
{
    carta baralho[40];
    carta maoJogador1[3], maoJogador2[3];
    int i, j, k;
    srand(time(NULL));  
    
    k = 0;
    for (i = 0; i < 4; i++) 
    {
        for (j = 1; j <= 10; j++) 
        {
            baralho[k].naipe = i;
            baralho[k].valor = j;
            k++;
        }
    }
    
    carta temp;
    for (i = 0; i < 40; i++) 
    {
        j = rand() % 40;
        temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
    
    for (i = 0; i < 3; i++) 
    {
        maoJogador1[i] = baralho[i];
        maoJogador2[i] = baralho[i+3];
    }
    
    printf("Cartas na mao do Jogador 1: ");
    for (i = 0; i < 3; i++) 
    {
        printf("(%d,%d) ", maoJogador1[i].naipe, maoJogador1[i].valor);
    }
    printf("\n");
    
    printf("Cartas na mao do Jogador 2: ");
    for (i = 0; i < 3; i++)
    {
        printf("(%d,%d) ", maoJogador2[i].naipe, maoJogador2[i].valor);
    }
    printf("\n");
    
    return 0;
}

//Exercício 13

//Exercício 14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Carro 
{
    char marca[16];
    int ano;
    float preco;
};

typedef struct Carro Carro;

int main() {

    Carro carros[5];
    int i;
    float p;

    for (i = 0; i < 5; i++) 
    {
        printf("Carro %d:\n", i + 1);

        printf("Marca: ");
        fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &carros[i].ano);

        printf("Preco: ");
        scanf("%f", &carros[i].preco);

        fflush(stdin);
        printf("\n");
    }

    do 
    {
        printf("Digite o valor de p (0 para sair): ");
        scanf("%f", &p);

        fflush(stdin);

        if (p != 0) 
        {
            printf("Carros com preço menor que: %.2f\n", p);

            for (i = 0; i < 5; i++) 
            {
                if (carros[i].preco < p) 
                {
                    printf("Carro %d:\n", i + 1);
                    printf("Marca: %s\n", carros[i].marca);
                    printf("Ano: %d\n", carros[i].ano);
                    printf("Preco: %.2f\n", carros[i].preco);
                    printf("\n");
                }
            }
        }

    } 
    while (p != 0);

    return 0;
}

//Exercício 15

#include <stdio.h>
#include <string.h>

struct Livro
{
    char titulo[30 + 1];
    char autor[15 + 1];
    int ano;
};

typedef struct Livro Livro;

void buscarLivroPorTitulo(Livro livros[], int numLivros, const char tituloBusca[]) 
{
    int encontrados = 0;

    printf("Resultados da busca:\n");

    for (int i = 0; i < numLivros; i++) 
    {
        if (strcmp(livros[i].titulo, tituloBusca) == 0) 
        {
            printf("Livro %d:\n", i + 1);
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            printf("\n");
            encontrados++;
        }
    }

    if (encontrados == 0) 
    {
        printf("Nenhum livro encontrado com o titulo: %s\n", tituloBusca);
    }
}

int main() 
{
    Livro livros[5];

    for (int i = 0; i < 5; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Titulo: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        printf("Autor: ");
        fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        
        fflush(stdin);

        printf("\n");
    }

    char tituloBusca[30 + 1];
    printf("Digite o titulo do livro que deseja buscar: ");
    fgets(tituloBusca, sizeof(tituloBusca), stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = '\0';

    buscarLivroPorTitulo(livros, 5, tituloBusca);

    return 0;
}

//Exercício 16

#include <stdio.h>
#include <string.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Compromisso
{
    char compromisso[60 + 1];
    Data data;
};

typedef struct Data Data;
typedef struct Compromisso Compromisso;

void lerData(Data *data) 
{
    printf("Digite o dia: ");
    scanf("%d", &(data->dia));

    printf("Digite o mes: ");
    scanf("%d", &(data->mes));

    printf("Digite o ano: ");
    scanf("%d", &(data->ano));
}

int exibirCompromissosMesAno(const Compromisso compromissos[], int numCompromissos, int mes, int ano) 
{
    printf("\nCompromissos do mês %d de %d:\n", mes, ano);

    int encontrados = 0;

    for (int i = 0; i < numCompromissos; i++) 
    {
        if (compromissos[i].data.mes == mes && compromissos[i].data.ano == ano) 
        {
            printf("Compromisso %d:\n", i + 1);
            printf("Descricao: %s\n", compromissos[i].compromisso);
            printf("Data: %d/%d/%d\n", compromissos[i].data.dia, compromissos[i].data.mes, compromissos[i].data.ano);
            printf("\n");
            encontrados++;
        }
    }

    if (encontrados == 0) 
    {
        printf("Nenhum compromisso encontrado para o mes %d de %d.\n", mes, ano);
    }

    return encontrados;
}

int main() 
{
    Compromisso compromissos[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("Compromisso %d:\n", i + 1);
        printf("Descricao: ");
        fflush(stdin);
        fgets(compromissos[i].compromisso, sizeof(compromissos[i].compromisso), stdin);
        compromissos[i].compromisso[strcspn(compromissos[i].compromisso, "\n")] = '\0';

        printf("Data:\n");
        lerData(&(compromissos[i].data));

        printf("\n");
    }

    int mes, ano;
    int encontrados;

    do 
    {
        printf("Digite o mes (0 para sair): ");
        scanf("%d", &mes);

        if (mes != 0) 
        {
            printf("Digite o ano: ");
            scanf("%d", &ano);

            encontrados = exibirCompromissosMesAno(compromissos, 5, mes, ano);
        }
    }
    while (mes != 0);

    return 0;
}

//Exercício 17


