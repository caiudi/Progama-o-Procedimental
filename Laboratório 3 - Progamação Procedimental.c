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

#include <stdio.h>

int 
main()
{
	int i, soma=0;
	for (i=2; i<=50; i++)
	{
		if(i%2==0)
		{
		printf ("%i - ", i);
		soma +=i;
		}
	}
	printf ("A soma e: %i", soma);
}

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

#include <stdio.h>

int 
main()
{
	int i, soma=0;
	for (i=1 ; i < 1000 ; i++)
	{
		if(i%3==0 || i%5==0)
		printf ("%i - ", i);
		soma +=i;
	}
	printf ("A soma e: %i", soma);
}

//Exercício 14

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int 
main()
{
	int i, d1, d2, lancamentos;
	printf ("Digite o numero de lancamentos\n");
	scanf ("%i", &lancamentos);
	
	printf ("\n");

	srand(time(NULL));
	for (i=1; i <=lancamentos; i++)
	{
		d1 = rand() % 9 + 1; 
		d2 = rand() % 9 + 1;
		
		printf("Lancamento %i:\n D1:%i\n D2:%i\n", i, d1, d2);

		if (d1>d2)
		{
			printf ("D1 e maior que D2");
			return 0;
		}
		else if (d1<d2)
		{
			printf ("D1 e menor que D2");
			return 0;
		}
		else
		{
			printf ("D1 e igual a D2");
			return 0;
		}
	}
}

//Exercício 15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int 
main()
{
	float numero, quadrado, cubo, raiz;
	
	while (numero>0)
	{
		printf ("Digite valores, e para finalizar digite um numero nao positivo\n");
		scanf ("%f", &numero);
	
		if (numero>0);
		{
			quadrado = pow(numero,2);
			cubo = pow(numero, 3);
			raiz = sqrt(numero);

			printf ("O quadrado do numero e: %.2f\n", quadrado);

			printf ("\n");

			printf ("O cubo do numero e: %.2f\n", cubo);

			printf ("\n");

			printf ("A raiz do numero e: %.2f\n", raiz);
		}
	}
}

//Exercício 16

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int 
main()
{
	int numero;
	float adicao, subtracao, multiplicacao, divisao, n1, n2;
	
	do
	{
	printf ("Escolha uma opcao:\n\n0 - Saida\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
	scanf ("%i", &numero);

	switch (numero)
	{
	case 0:
	    printf ("Saida selecionada");
		break;
	case 1:
	    printf ("Adicao selecionada\nDigite 2 numeros\n");
		scanf ("%f%f", &n1, &n2);
		adicao = n1+n2;
		printf ("O resultado da soma e: %.2f\n", adicao);
		break;
	case 2:
	    printf ("Subtracao selecionada\nDigite 2 numeros\n");
		scanf ("%f%f", &n1, &n2);
		subtracao = n1-n2;
		printf ("O resultado da subtracao e: %.2f\n", subtracao);
		break;
	case 3:
	    printf ("Multiplicacao selecionada\nDigite 2 numeros\n");
		scanf ("%f%f", &n1, &n2);
		multiplicacao = n1*n2;
		printf ("O resultado da soma e: %.2f\n", multiplicacao);
		break;
	case 4:
	    printf ("Divisao selecionada\nDigite 2 numeros, sendo o segundo diferente de 0\n");
		scanf ("%f%f", &n1, &n2);
		if (n2==0)
		{
			printf ("Numero invalido, digite outro");
			scanf ("%f", &n2);
		}
		else 
		divisao = n1/n2;
		printf ("O resultado da divisao e: %.2f\n", divisao);
		break;
	}
}
while (numero!=0);
}

//Exercício 17

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int 
main()
{
	float chico=1.5, ze = 1.1;
    int ano=0;
    while (chico>=ze)
    {
        ze += 0.03;

        chico += 0.02;

        ano ++;
    }
    printf ("Serao necessarios %i anos", ano);
    return 0;
}

//Exercício 18

#include <stdio.h>

int main(){

	int ano;
	float aumento = 1.5;
    double salario = 2000; 
	
	for(ano = 1996; ano <= 2023; ano ++){
		salario = salario*(1 + (aumento/100));
		aumento = aumento*2;

		printf("Salario no ano de %d: %.2f\n", ano, salario); 
	}
	return 0;
}

//Exercício 19

#include <stdio.h>

int main(){

    int saque;
    printf ("Digite o valor do saque:\n");
    scanf ("%i", &saque);

    printf ("%i notas de 100\n", saque/100);
    saque = saque%100;
    printf ("%i notas de 50\n", saque/50);
    saque = saque%50;
    printf ("%i notas de 20\n", saque/20);
    saque = saque%20;
    printf ("%i notas de 10\n", saque/10);
    saque = saque%10;
    printf ("%i notas de 5\n", saque/5);
    saque = saque%5;
    printf ("%i notas de 2\n", saque/2);
    saque = saque%2;
    printf ("%i notas de 1\n", saque/1);
    saque = saque%1;
}

//Exercício 20

#include <stdio.h>
#include <math.h>
int main()
{
    int i1, i2, numero;
    float somatotal=2;

    for (i1 = 3; i1 <= 2000000; i1 += 2) 
    {
        numero = 1;
        for (i2 = 3; i2 <= sqrt(i1); i2 += 2) 
        {
            if (i1 % i2 == 0) 
            {
                numero = 0;
                break;
            }
        }

        if (numero) 
        {
            somatotal += i1;
        }
    }

    printf("A soma e: %.0f\n", somatotal);

    return 0;
}

//Exercício 21



