//Exercício 1

#include <stdio.h>

int main()
{
  float vet[10];
  float *p;
  int i;

  p = &vet[0];

  for (i = 0; i < 10; i++) 
  {
    p = &vet[i];
    printf("O endereco de memoria da posicao %i do vetor eh %p \n", i, p);
  }

  return 0;
}

//Exercício 2

#include <stdio.h>

int main() 
{
  float mat[3][3];
  float *p;
  int i, j;

  p = mat;

  for (i = 0; i < 3; i++) 
  {
    for (j = 0; j < 3; j++)
    {
      p = &mat[i][j];
      printf("O endereço de memoria da posicao %i eh: %p \n", i, p);
    }
  }
  return 0;
}

//Exercício 3

#include <stdio.h>

int main() 
{
  int vet[5];
  int *p;
  int i, dobro;

  p = vet;

  printf("Digite os valores do vetor:");
  for (i = 0; i < 5; i++) 
  {
    p = &vet[i];
    scanf("%i", p);
  }

  printf("Valores digitados vezes 2: ");
  for (i = 0; i < 5; i++) 
  {
    p = &vet[i];
    dobro = 2 * (*p);
    printf("%i \n", dobro);
  }
  return 0;
}

//Exercício 4

#include <stdio.h>

int main() 
{
  int vet[5];
  int *p;
  int i;

  p = vet;

  printf("Digite os valores do vetor: ");

  for (i = 0; i < 5; i++) 
  {
    p = &vet[i];
    scanf("%i \n", p);
  }

  printf("Valores pares digitados: ");

  for (i = 0; i < 5; i++) 
  {
    p = &vet[i];
    if ((*p) % 2 == 0) 
    {
      printf("%i \n", *p);
    }
  }
  return 0;
}

//Exercício 5

#include <stdio.h>

int main() 
{
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    fflush(stdin);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    char *p1 = string1;
    char *p2 = string2;

    while (*p1) 
    {
        if (*p1 == *p2) 
        {
            char *temp = p1;
            while (*p1 && *p2 && *p1 == *p2)
            {
                p1++;
                p2++;
            }
            if (!*p2)
            {
                printf("A segunda string ocorre dentro da primeira.\n");
                return 0;
            }
            p1 = temp + 1;
            p2 = string2;
        } 
        else
        {
            p1++;
        }
    }

    printf("A segunda string nao ocorre dentro da primeira.\n");
    return 0;
}

//Exercício 6

#include <stdio.h>

int main() 
{
    int array[5];
    int valor;
    int *p;

    printf("Digite o valor para preencher o array: ");
    scanf("%d", &valor);

    for (p = array; p < array + 5; p++) 
    {
        *p = valor;
    }

    printf("Array preenchido com o valor %d:\n", valor);
    
    for (p = array; p < array + 5; p++) 
    {
        printf("%d ", *p);
    }

    return 0;
}

//Exercício 7

#include <stdio.h>

int main()
{
    int array[10];
    int *ptr_min = array;
    int *ptr_max = array;


    printf("Digite 10 elementos do array:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", (array + i));
    }


    for (int *ptr = array + 1; ptr < array + 10; ptr++) 
    {
        if (*ptr < *ptr_min) 
        {
            ptr_min = ptr;
        }
        if (*ptr > *ptr_max) 
        {
            ptr_max = ptr;
        }
    }

    printf("Menor elemento: %d\n", *ptr_min);
    printf("Maior elemento: %d\n", *ptr_max);

    return 0;
}

//Exercício 8

#include <stdio.h>

int main()
{
    int A, *B, **C, ***D;

    printf("Digite um valor para A: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("Dobro: %d\n", *(*B) * 2);
    printf("Triplo: %d\n", *(*(*C)) * 3);
    printf("Quadruplo: %d\n", *(*(*(*D))) * 4);

    return 0;
}

