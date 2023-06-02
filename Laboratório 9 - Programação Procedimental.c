//Exercício 1

#include <stdio.h>

void Troca_Valor(int *p1, int *p2)
{
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main()
{
    int x, y;

    printf ("Digite dois valores:");
    scanf ("%i %i", &x, &y);

    Troca_Valor(&x, &y);

    printf ("Valor de x: %i\n", x);
    printf ("Valor de y: %i\n", y);

    return 0;
}
 
//Exercício 2

#include <stdio.h>

int Verifica_Maior(int *p1, int *p2)
{
    int aux;
    if (*p1 > *p2)
    {
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }


}

int main()
{
    int x, y;

    printf ("Digite dois valores: ");
    scanf ("%i %i", &x, &y);

    Verifica_Maior(&x, &y);

    printf ("Maior valor: %i\n", y);
    printf ("Menor valor: %i\n", x);

    return 0;
}

//Exercício 3

#include <stdio.h>

void Soma(int *p1, int *p2)
{
    int soma;
    soma = *p1 + *p2;
    *p1 = soma;

}

int main()
{
    int a, b;

    printf("Digite dois valores: ");
    scanf ("%i %i", &a, &b);

    Soma(&a, &b);

    printf ("A soma dos numeros eh: %i\n", a);
    printf ("Valor de B: %i", b);

    return 0;
}

//Exercício 4

#include <stdio.h>

int Ordena(int *p1, int *p2, int *p3)
{
    int aux;
    
    if(*p1 > *p2)
    {
        
    }

}

int main()
{
    int x, y, z;

    printf ("Digite 3 valores: ");
    scanf ("%i %i %i", &x, &y, &z);

    Ordena(&x, &y, &z);
}
