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

