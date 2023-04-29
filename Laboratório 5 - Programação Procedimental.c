//Exercício 1

#include <stdio.h>

int main()
{
    int A[6], soma;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    soma = A[0] + A[1] + A[5];

    printf ("A soma eh: %i\n\n", soma);

    A[4] = 100;

    printf("%i\n%i\n%i\n%i\n%i\n%i\n", A[0], A[1], A[2], A[3], A[4], A[5]);

    return 0;
}

//Exercício 2

#include <stdio.h>

int main()
{
    int vet[8];
    int x, y, i, soma;

    printf ("Digite os valores do vetor: ");
    for ( i = 0 ; i < 8 ; i++)
    {
        scanf ("%i", &vet[i]);
    }

    printf ("\n");

    printf ("Digite duas posicoes: ");
    scanf ("%i %i", &x, &y);

    printf ("\n");

    if (x > 0 || x <= 7 || y > 0 || y <= 7)
    {
        soma = vet[x]+vet[y];
        printf ("A soma dos valores nas posicoes %i e %i eh %i", x, y, soma);
    }
    else
    {
        printf ("Posicoes invalidas");
    }
    return 0;
}

//Exercício 3

#include <stdio.h>

int
main()
{
    int vet[6];
    int i, j;

    for (i = 0 ; i < 6 ; i++)
    {
        printf ("Digite um valor inteiro: ");
        scanf ("%i", &vet[i]);
    }

    for (j = 5 ; j != 0 ; j--)
    {
        printf ("%i\n", vet[j]);
    }
    printf ("%i\n", vet[0]);

    return 0;
}

//Exercício 4

#include <stdio.h>

int
main()
{
    int vet[5];
    int maior , menor;
    int posicao_maior = 0 , posicao_menor = 0;
    int i;

    for (i = 0 ; i < 5 ; i++)
    {
        printf ("Digite um valor inteiro: ");
        scanf ("%i\n", &vet[i]);
        
        maior = vet[0];
        menor = vet[0];

        if ( vet[i] > maior )
        {
            maior = vet[i];
            posicao_maior = i;
        }
        if ( vet[i] < menor)
        {
            menor = vet[i];
            posicao_menor = i;
        }  
    } 
    
    printf ("A posicao com o maior valor eh %i, e a com o menor valor e %i\n", posicao_maior, posicao_menor);

    return 0;
}

//Exercício 5

#include <stdio.h>

int
main()
{
    int vet[50];
    int i;

    for (i = 0 ; i < 50 ; i++)
    {
        vet[i] = (i+5*i)%(i+1);
        printf ("%i\n", vet[i]);
    }
    return 0;
}

//Exercício 6

#include <stdio.h>

int
Eh_Primo(int x)
{
    int i;

    if (x <= 1)
    {
        return 0;
    }

    for (i = 2 ; i <= x/2 ; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int
main()
{
    int vet[10];
    int i;

    for (i = 0 ; i < 10 ; i++)
    {
        printf ("Digite um valor: ");
        scanf ("%i", &vet[i]);
    }

    for (i = 0 ; i < 10; i++)
    {
        if(Eh_Primo(vet[i]))
        {
            printf ("O numero: %i eh primo, e esta na posicao %i\n", vet[i], i);
        }
    }

    return 0;
}

//Exercício 7

#include <stdio.h>

int
main()
{
    int vet[6];
    int i;
    int soma = 0, quantidadeimpar = 0;

    for (i = 0 ; i < 6 ; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%i", &vet[i]);

        if ( vet[i] % 2 == 0)
        {
            printf ("O numero %i eh par\n", vet[i]);
            soma += vet[i];
        }
        else
        {
            printf ("O numero %i eh impar\n", vet[i]);
            quantidadeimpar++;
        }
    }

    printf ("A soma dos numeros pares eh %i\n", soma);
    printf ("A quantidade de impares eh %i\n", quantidadeimpar);

    return 0; 
}

//Exercício 8
