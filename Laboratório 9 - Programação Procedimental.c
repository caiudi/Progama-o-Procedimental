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

//Exercício 5

#include <stdio.h>

void frac(float num, int *inteiro, float *frac) 
{
  *inteiro = (int)num;
  *frac = num - *inteiro;  
}

int main()
 {
  float numero;
  int parteInteira;
  float parteFracionaria;

  printf ("Digite um numero real: ");
  scanf ("%f", &numero);
  
  frac(numero, &parteInteira, &parteFracionaria);
  
  printf("Parte inteira: %d\n", parteInteira);
  printf("Parte fracionaria: %.4f\n", parteFracionaria);
  
  return 0;
}

//Exercício 6

#include <stdio.h>
#include <math.h>
#define PI 3.1415

void calc_esfera(float r, float *area, float *volume) 
{
  *area = 4 * PI * pow(r,2);
  *volume = (4 / 3) * PI * pow(r,3);
}

int main() 
{
  float raio;
  float area, volume;

  printf ("Digite o valor do raio: ");
  scanf ("%f", &raio);
  
  calc_esfera(raio, &area, &volume);
  
  printf("Area da superficie: %.2f\n", area);
  printf("Volume da superficie: %.2f\n", volume);
  
  return 0;
}

//Exercício 7

#include <stdio.h>
#include <stdlib.h>

void encontrar_maior_elemento(int* array, int tamanho, int* maior, int* ocorrencias) 
{
    if (tamanho == 0) 
    {
        *maior = 0;
        *ocorrencias = 0;
        return;
    }

    *maior = array[0];
    *ocorrencias = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (array[i] > *maior)
        {
            *maior = array[i];
            *ocorrencias = 1;
        } 
        if (array[i] == *maior) 
        {
            (*ocorrencias)++;
        }
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* array = (int*) malloc(tamanho * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &array[i]);
    }

    int maior, ocorrencias;
    encontrar_maior_elemento(array, tamanho, &maior, &ocorrencias);

    printf("Maior elemento: %d\n", maior);
    printf("Numero de ocorrencias: %d\n", ocorrencias);

    free(array);

    return 0;
}

//Exercício 8

#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N) 
{
    int count = 0;

    for (int i = 0; i < N; i++) 
    {
        if (vet[i] < 0) 
        {
            count++;
        }
    }

    return count;
}

int main() 
{
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    float *vet = (float *)malloc(N * sizeof(float));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < N; i++) 
    {
        scanf("%f", &vet[i]);
    }

    int quantidadeNegativos = negativos(vet, N);

    printf("Quantidade de numeros negativos: %d\n", quantidadeNegativos);

    free(vet);

    return 0;
}

//Exercício 9

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int *array = (int *)malloc(tamanho * sizeof(int));
    int *ponteiro = array;

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("Array original:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array modificado:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        (*ponteiro)++;
        printf("%d ", array[i]);
        ponteiro++;
    }
    printf("\n");

    free(array);

    return 0;
}

//Exercício 10

#include <stdio.h>
#include <stdlib.h>

int somar_arrays(int* array1, int* array2, int tamanho, int* resultado) 
{
    if (array1 == NULL || array2 == NULL || resultado == NULL) 
    {
        return 0;
    }

    for (int i = 0; i < tamanho; i++) 
    {
        resultado[i] = array1[i] + array2[i];
    }

    return 1;
}

int main() 
{
    int tamanho;
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    int* array1 = (int*)malloc(tamanho * sizeof(int));
    int* array2 = (int*)malloc(tamanho * sizeof(int));
    int* resultado = (int*)malloc(tamanho * sizeof(int));

    printf("Digite os elementos do primeiro array:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &array1[i]);
    }

    printf("Digite os elementos do segundo array:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &array2[i]);
    }

    int status = somar_arrays(array1, array2, tamanho, resultado);
    if (status == 0) 
    {
        printf("Os tamanhos dos arrays sao diferentes.\n");
    } 
    else 
    {
        printf("Array resultado da soma:\n");
        for (int i = 0; i < tamanho; i++) 
        {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    }

    free(array1);
    free(array2);
    free(resultado);

    return 0;
}

//Exercício 11

#include <stdio.h>
#include <stdlib.h>

int encontrar_maior(int *array, int tamanho)
{
    int maior = array[0];

    for (int i = 1; i < tamanho; i++) 
    {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    return maior;
}

int main() 
{
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int *array = (int *)malloc(N * sizeof(int));

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &array[i]);
    }

    int k;
    printf("Digite o valor de 'k': ");
    scanf("%d", &k);

    printf("Array com 'k' elementos por linha:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", array[i]);

        if ((i + 1) % k == 0) 
        {
            printf("\n");
        }
    }

    printf("\n");

    int maior = encontrar_maior(array, N);
    printf("Maior elemento: %d\n", maior);

    free(array);

    return 0;
}

//Exercício 12

#include <stdio.h>
#include <stdlib.h>

void encontrar_min_max(int *V, int tamanho, int *min, int *max) 
{
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < tamanho; i++) 
    {
        if (V[i] < *min) 
        {
            *min = V[i];
        }
        if (V[i] > *max) 
        {
            *max = V[i];
        }
    }
}

int main() 
{
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int *array = (int *)malloc(tamanho * sizeof(int));

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &array[i]);
    }

    int min, max;
    encontrar_min_max(array, tamanho, &min, &max);

    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);

    free(array);

    return 0;
}

//Exercício 13

#include <stdio.h>

void ler_notas(float *nota1, float *nota2) 
{
    do 
    {
        printf("Digite a primeira nota: ");
        scanf("%f", nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", nota2);

        if (*nota1 < 0 || *nota1 > 10 || *nota2 < 0 || *nota2 > 10) 
        {
            printf("Notas invalidas! Digite novamente.\n");
        }
    } 
    while (*nota1 < 0 || *nota1 > 10 || *nota2 < 0 || *nota2 > 10);
}

void calcular_medias(float nota1, float nota2, float *media_simples, float *media_ponderada) 
{
    *media_simples = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + nota2 * 2) / 3;
}

int main() 
{
    float nota1, nota2, media_simples, media_ponderada;

    ler_notas(&nota1, &nota2);
    calcular_medias(nota1, nota2, &media_simples, &media_ponderada);

    printf("Media Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}

//Exercício 14

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) 
{
    float delta = B * B - 4 * A * C;

    if (delta > 0) 
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2; 
    } 
    if (delta == 0) 
    {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1;
    } 
    else 
    {
        return 0; 
    }
}

int main() 
{
    float A, B, C, X1, X2;

    printf("Digite os coeficientes da equacao do segundo grau:\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);

    int num_raizes = raizes(A, B, C, &X1, &X2);

    if (num_raizes == 2) 
    {
        printf("Duas raizes reais e distintas:\n");
        printf("X1 = %.2f\n", X1);
        printf("X2 = %.2f\n", X2);
    } 
    if (num_raizes == 1) 
    {
        printf("Uma raiz real:\n");
        printf("X = %.2f\n", X1);
    } 
    else 
    {
        printf("Nenhuma raiz real\n");
    }

    return 0;
}
