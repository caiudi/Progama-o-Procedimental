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
