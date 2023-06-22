//Exercício 1

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *array;
    array = (int *)malloc(5 * sizeof(int));
    
    if (array == NULL)
    {
        printf("Erro na alocação de memoria.\n");
        return 1; 
    }
    
    printf("Digite 5 numeros:\n");
    
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &array[i]);
    }
    
    printf("Os numeros digitados foram:\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);
    
    return 0;
}

//Exercício 2 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1; 
    }
    
    printf("Digite os valores do vetor:\n");
    
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &vetor[i]);
    }
    
    printf("O vetor digitado foi:\n");
    
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    free(vetor);
    
    return 0;
}

//Exercício 3 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tamanho;
    int *vetor;
    int pares = 0, impares = 0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    vetor = (int *)malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) 
    {
        printf("Erro na alocacao de memoria.\n");
        return 1; 
    }
    
    printf("Digite os valores do vetor:\n");
    
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0) 
        {
            pares++;
        } 
        else
        {
            impares++;
        }
    }
    
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    
    free(vetor);
    
    return 0;
}

//Exercício 4

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tamanho;
    
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    
    char *str = (char *)malloc((tamanho + 1) * sizeof(char));
    
    if (str == NULL) 
    {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }
    
    printf("Digite a string: ");
    scanf(" %s", str);
    
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') 
        {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';
    
    printf("A string sem vogais: %s\n", str);
    
    free(str);
    
    return 0;
}

//Exercício 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, count = 0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    
    int *vetor = (int *)malloc(N * sizeof(int));
    
    if (vetor == NULL) 
    {
        printf("Erro na alocacao de memoria.\n");
        return 1; // Saída com erro
    }
    
    printf("Digite os elementos do vetor:\n");
    
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite um numero inteiro X: ");
    scanf("%d", &X);
    
    
    for (int i = 0; i < N; i++) 
    {
        if (vetor[i] % X == 0)
        {
            printf("%d ", vetor[i]);
            count++;
        }
    }
    
    printf("\nTotal de multiplos de %d no vetor: %d\n", X, count);
    
    free(vetor);
    
    return 0;
}

//Exercício 6 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tamanho, opcao, posicao, valor;
    int *memoria;
  
    memoria = (int *)calloc(tamanho / sizeof(int), sizeof(int));

    if (memoria == NULL) 
    {
        printf("Erro na alocacao de memoria.\n");
        return 1; // Saída com erro
    }
    
    printf("Digite o tamanho da memoria (em bytes): ");
    scanf("%d", &tamanho);
    
    if (tamanho % sizeof(int) != 0) 
    {
        printf("Tamanho invalido. O tamanho deve ser multiplo de %ld bytes.\n", sizeof(int));
        return 1; // Saída com erro
    }
    
    while (1) 
    {
        printf("\nOpcoes:\n");
        printf("1 - Inserir valor em uma posicao\n");
        printf("2 - Consultar valor de uma posicao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 0) 
        {
            break;
        }
        else if (opcao == 1) 
        {
            printf("Digite a posicao (em bytes) onde deseja inserir o valor: ");
            scanf("%d", &posicao);
            
            printf("Digite o valor: ");
            scanf("%d", &valor);
            
    
            if (posicao < 0 || posicao >= tamanho) 
            {
                printf("Posicao invalida.\n");
                continue;
            }
            
            memoria[posicao / sizeof(int)] = valor;
            
            printf("Valor inserido com sucesso.\n");
        }
        else if (opcao == 2) 
        {
            
            printf("Digite a posicao (em bytes) que deseja consultar: ");
            scanf("%d", &posicao);
            
            if (posicao < 0 || posicao >= tamanho) 
            {
                printf("Posicao invalida.\n");
                continue;
            }
            
            int valor = memoria[posicao / sizeof(int)];
            
            printf("Valor na posicao %d: %d\n", posicao, valor);
        }
        else 
        {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }
    
    free(memoria);
    
    return 0;
}




