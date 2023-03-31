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

