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
