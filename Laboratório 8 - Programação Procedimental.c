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


