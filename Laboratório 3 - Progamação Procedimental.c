//Exercicio 1

#include <stdio.h>
int
main()
{
    int x=0, y=0;
    do
    {
        y = y+3;
        x++;
        printf ("%i\n", y);
    } 
    while (x<5);
    return 0;
}

//Exercicio 2

#include <stdio.h>
int
main()
{
    int x, y=1, z=1;
    for (x=1 ; x <=100 ; x++)
    {
        printf ("%i\n", x);
    }
    while ( y <=100)
    {
    printf ("%i\n", y);
    y++;
    }
    do
    {
        printf ("%i\n", z);
        z++;
    } while ( z<=100);
}

//Exercicio 3

#include <stdio.h>
int
main()
{
    int x=10;
    while (x>=0)
    {
        printf ("%i\n", x);
        x--;
    }
    return 0;
}

//Execício 4

#include <stdio.h>
int
main()
{
    int x;
    for (x = 0 ; x <= 100000; x=x+1000)
    {
        printf ("%i ", x);
    }
    return 0;
}

//Exercicio 5

#include <stdio.h>
int
main()
{
    int x, soma=0, y=0;
    printf ("Digite um numero");
    do
    {
        scanf ("%i", &x);
        soma = soma+x;
        y++;
    } while (y<10);
    printf ("A soma e :%i", soma);
    return 0;
}

//Exercicio 6

#include <stdio.h>
int
main()
{
    int x, y=1;
    float media=0;
    printf ("Digite um numero");
    do
    {
        scanf ("%i", &x);
        media = media+x;
        y++;
    } while (y<=10);
    media = media/10;
    printf ("A media E: %.2f", media);
    return 0;
}

//Exercicio 7

#include <stdio.h>
int
main()
{
    int x, y;
    float media=0;
    printf ("Digite um numero\n");
    for (y=1; y<=10; y++)
    {
        scanf ("%i", &x);
        if (x>=0)
        { 
        media = media+x;
        }
        else
        {
            printf ("Numero Invalido");
            y--;
        }
    }
        media = media/10;
        printf ("A media dos numeros e: %.2f", media);
        return 0;
}

//Exercicio 8

#include <math.h>
#include <stdio.h>

int 
main() 
{
  int numero, maior, menor;
  int i;

  printf ("Digite um numero inteiro\n");
  scanf ("%i", &numero);

  maior = numero;
  menor = numero;

  for (i=1; i < 10; i++)
  {
    printf ("Digite mais um numero inteiro\n");
    scanf ("%i", &numero);

    if (numero>maior)
    {
      maior=numero;
    }
    else if (numero<menor)
    {
      menor=numero;
    }
  }
  printf ("O maior numero e: %i\n", maior);
  printf ("O menor numero e: %i\n", menor);
  
  return 0;
}

//Exercício 9

#include <stdio.h>
#include <math.h>

int 
main()
{
    int numero, i=1;

    printf ("Digite um numero inteiro\n");
    scanf ("%i", &numero);
    

    if (numero>0)
    {
        while (numero!=0)
        {
            if (i%2!=0)
            {
                printf ("%i\n", i);
                numero--;
            }
            i++;
        }
    }
    else
    {
        printf ("Numero invalido");
    }
    return 0;
}

//Exercício 10

//Exercício 11

#include <stdio.h>
#include <math.h>

int 
main()
{
    int numero, i;
    printf ("Digite um numero inteiro positivo\n");
    scanf ("%i", &numero);

    printf ("\n");

    for (i=0; i!=numero; i++)
    printf ("%i\n", i);
}

//Exercício 12

#include <stdio.h>

int 
main()
{
	int soma=1, numero, i=2;
	printf ("Digite um numero\n");
	scanf ("%i", &numero);
	for (i=2; i<numero; i++)
	{ 
	 if (numero%i==0)
	 {
	printf ("%i - ", i);
	soma +=i;
	 }
	}
	printf ("A soma e: %i", soma);
}

//Exercício 13
