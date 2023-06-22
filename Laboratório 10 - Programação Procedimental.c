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

//Exercício 7 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int numeros_sorteados[6];
    int numeros_bilhete[6];
    int numeros_corretos[6];
    int quantidade_corretos = 0;
    
    printf("Digite os numeros sorteados: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &numeros_sorteados[i]);
    }
    
    printf("Digite os numeros do seu bilhete: ");
    for (int i = 0; i < 6; i++) 
    {
        scanf("%d", &numeros_bilhete[i]);
    }
    
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            if (numeros_bilhete[i] == numeros_sorteados[j]) 
            {
                numeros_corretos[quantidade_corretos] = numeros_bilhete[i];
                quantidade_corretos++;
                break;
            }
        }
    }
    
    printf("\nNumeros sorteados: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", numeros_sorteados[i]);
    }
    
    printf("\nNumeros corretos: ");
    for (int i = 0; i < quantidade_corretos; i++) 
    {
        printf("%d ", numeros_corretos[i]);
    }
    
    printf("\n");
    
    return 0;
}

//Exercício 8

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor, zeros = 0;
    vetor = (int *)calloc(1500, sizeof(int));

    if (vetor == NULL) 
    {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < 1500; i++) 
    {
        if (vetor[i] == 0)
        {
            zeros++;
        }
    }
    printf("O vetor contem %d valores inicializados com zero.\n", zeros);

    for (int i = 0; i < 1500; i++) 
    {
        vetor[i] = i;
    }

    printf("\nOs 10 primeiros elementos do vetor sao:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\n\nOs 10 ultimos elementos do vetor sao:\n");
    for (int i = 1490; i < 1500; i++) 
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}

//Exercício 9

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor = NULL;
    int tamanho = 0;
    int numero;
    int quantidade_numeros = 0; 

    do 
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero >= 0) 
        {
            tamanho++;
            
            vetor = (int *)realloc(vetor, tamanho * sizeof(int));
            
            if (vetor == NULL) {
                printf("Erro na alocacao de memoria.\n");
                return 1; 
            }

            vetor[tamanho - 1] = numero;
            
            quantidade_numeros++;
        }
    } 
    while (numero >= 0);

    printf("\nVetor lido:\n");
    
    for (int i = 0; i < quantidade_numeros; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

//Exercício 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int quantidade;
    double *vetor;
    vetor = (double *)malloc(quantidade * sizeof(double));

    if (vetor == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }
    
    printf("Quantos valores deseja armazenar (no mínimo 10): ");
    scanf("%d", &quantidade);
    
    if (quantidade < 10) 
    {
        printf("A quantidade mínima deve ser 10.\n");
        return 1;
    }

    srand(time(NULL));
    
    for (int i = 0; i < 10; i++) 
    {
        vetor[i] = (double)(rand() % 101); 
    }
    
    printf("\nValores armazenados nos 10 primeiros elementos do vetor:\n");
    
    for (int i = 0; i < 10; i++) 
    {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");
    
    free(vetor);
    
    return 0;
}

//Exercício 11

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() 
{
    int numero_alunos;
    Aluno *alunos;
    
    printf("Informe o numero de alunos a serem cadastrados: ");
    scanf("%d", &numero_alunos);

    alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));
    
    if (alunos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }
    
    for (int i = 0; i < numero_alunos; i++) 
    {
        printf("\nAluno %d:\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        
        printf("Ano de Nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }
    
    printf("\nDados dos alunos cadastrados:\n");
    
    for (int i = 0; i < numero_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].anoNascimento);
    }
    
    free(alunos);
    
    return 0;
}

//Exercício 12

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int codigo;
    char nome[51];
    int quantidade;
    float preco;
} Produto;

int main() 
{
    int N;
    int indiceMaiorPreco = 0;
    int indiceMaiorQuantidade = 0;
    Produto produtos[100];
    
    printf("Informe a quantidade de produtos: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        printf("Produto %d:\n", i + 1);

        printf("Código: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        fflush(stdin);
        fgets(produtos[i].nome, 51, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0'; 

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        printf("\n");
    }
    
    for (int i = 1; i < N; i++) 
    {
        if (produtos[i].preco > produtos[indiceMaiorPreco].preco) 
        {
            indiceMaiorPreco = i;
        }
    }

    for (int i = 1; i < N; i++) 
    {
        if (produtos[i].quantidade > produtos[indiceMaiorQuantidade].quantidade) 
        {
            indiceMaiorQuantidade = i;
        }
    }

    printf("Produto com o maior preço de venda:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorPreco].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorPreco].quantidade);
    printf("Preco: %.2f\n\n", produtos[indiceMaiorPreco].preco);

    printf("Produto com a maior quantidade disponivel no estoque:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorQuantidade].quantidade);
    printf("Preco: %.2f\n", produtos[indiceMaiorQuantidade].preco);

    return 0;
}

//Exercício 13

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int linhas, colunas;
    int valor;
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    int encontrado = 0;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) 
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &valor);

    for (int i = 0; i < linhas; i++) 
    {
        for (int j = 0; j < colunas; j++) 
        {
            if (matriz[i][j] == valor) 
            {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) 
        {
            break;
        }
    }

    if (encontrado) 
    {
        printf("O valor %d está presente na matriz.\n", valor);
    }
    else 
    {
        printf("O valor %d nao esta presente na matriz.\n", valor);
    }

    for (int i = 0; i < linhas; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}





