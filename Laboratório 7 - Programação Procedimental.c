//Exercício 1

#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    int *p1;
    int *p2;
    p1 = &x;
    p2 = &y;
    (p1)++;

    printf ("x = %i\ny = %i\n&x = %p\n&y = %p\np1 = %p\np2 = %p\n*p1 + *p2 = %i\n*(&x) = %i\n&(*p2) = %p\n", x, y, &x, &y, p1, p2, (*p1)+(*p2), *(&x), &(*p2));
    return 0;
}

//Exercício 2

#include <stdio.h>
int main()
{
    int x;
    float y;
    char z;
    int *p1;
    float *p2;
    char *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;

    printf ("Digite um inteiro e um float: ");
    scanf ("%i %f", &x, &y);

    fflush(stdin);

    printf ("Digite um char: ");
    scanf ("%c", &z);

    printf ("\n");

    printf ("Primeiro Inteiro = %i\nPrimeiro Float = %f\nPrimeiro Char = %c\n", x, y, z);

    printf ("Digite outro inteiro e outro float: ");
    scanf ("%i %f", p1, p2);

    fflush(stdin);

    printf ("Digite outro char: ");
    scanf ("%c", p3);

    printf ("Segundo Inteiro = %i\nSegundo Float = %f\nSegundo Char = %c\n", *p1, *p2, *p3);

    return 0;
}

//Exercício 3

#include <stdio.h>
int main()
{
   int x, y;
   if (&x > &y)
   {
    printf ("Endereco de x eh maior que o endereco de y\n");
    printf ("Endereco de x: %p\n", &x);
   }
   else
   {
    printf ("Endereco de y eh maior que o endereco de x\n");
    printf ("Endereco de y: %p\n", &y);
   }
   return 0;
}

//Exercício 4

#include <stdio.h>
int main()
{
   int x, y;
   
   printf ("Digite dois valores inteiros: ");
   scanf ("%i %i", &x, &y);

   printf ("\n");

   if (&x > &y)
   {
    printf ("O endereco de x (%p) eh maior que o de y (%p). Seu conteudo eh: %i\n", &x, &y, x);
   }
   else
   {
    printf ("O endereco de y (%p) eh maior qe o de x (%p). Seu conteudo eh: %i\n", &y, &x, y);
   }
   return 0;
}

//Exercício 5

#include <stdio.h>

int main()
{
    int A, B;
    int *PA, *PB;
    int soma;

    printf ("Digite dois valores inteiros: ");
    scanf ("%i %i", &A, &B);

    PA=&A;
    PB=&B;

    *PA *= 2;
    *PB *= 2;

    soma = A + B;

    printf ("A soma do dobro eh: %i", soma);
    return 0;
}

//Exercício 6

#include <stdio.h>

int main()
{
    int x, y;
    int *px, *py;
    int soma, subtracao, multiplicacao, divisao;

    printf ("Digite dois valores inteiros: ");
    scanf ("%i %i", &x, &y);

    px = &x;
    py = &y;

    soma = *px + *py;
    subtracao = *px - *py;
    multiplicacao = *px * *py;
    divisao = *px / *py;

    printf ("A soma dos numeros eh: %i\n", soma);
    printf ("A diferenca dos numeros eh: %i\n", subtracao);
    printf ("O produto dos numeros eh: %i\n", multiplicacao);
    printf ("A divisao dos numeros eh: %i\n", divisao);

    return 0;
}

//Exercício 7

#include <stdio.h>

int main()
{
    int x, y, z;
    int *px, *py, *pz;
    int comp;

    printf ("Digite tres valores inteiros: ");
    scanf ("%i %i %i", &x, &y, &z);

    px = &x;
    py = &y;
    pz = &z;

     if (*px > *py) 
    {
        int temp = *px;
        *px = *py;
        *py = temp;
    }

    if (*py > *pz) 
    {
        int temp = *py;
        *py = *pz;
        *pz = temp;
    }

    if (*px > *py) 
    {
        int temp = *px;
        *px = *py;
        *py = temp;
    }
    
    printf ("Numeros em ordem crescente: %i %i %i\n", *px, *py, *pz);
    printf ("Enderecos de memoria: %p %p %p\n", px, py, pz);
    
    return 0;
}
 
//Exercício 8

#include <stdio.h>

int main()
{
    int vet[6];
    int *p;
    int i;

    printf ("Digite 6 numeros inteiros: \n");
    
    for (i = 0 ; i < 6 ; i++)
    {
        scanf ("%i", &vet[i]);
    }
    
    p = vet;

    printf ("Valores do vetor:\n");
    
    for (i = 0 ; i < 6 ; i++)
    {
        printf ("%i ", *(p + i));
    }

    printf ("Enderecos de memoria: \n");
    
    for (i = 0 ; i < 6 ; i++)
    {
        printf ("%p\n", (p + i));
    }
    
    return 0;
}



