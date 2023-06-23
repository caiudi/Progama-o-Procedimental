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

    printf("Digite o tamanho da memoria (em bytes): ");
    scanf("%d", &tamanho);

     memoria = (int *)calloc(tamanho / sizeof(int), sizeof(int));
    
    if (memoria == NULL) 
    {
        printf("Erro na alocacao de memoria.\n");
        return 1; 
    }
    
    if (tamanho % sizeof(int) != 0) 
    {
        printf("Tamanho invalido. O tamanho deve ser multiplo de %ld bytes.\n", sizeof(int));
        return 1;
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
    
    printf("Quantos valores deseja armazenar (no mínimo 10): ");
    scanf("%d", &quantidade);

     if (quantidade < 10) 
    {
        printf("A quantidade mínima deve ser 10.\n");
        return 1;
    }

    vetor = (double *)malloc(quantidade * sizeof(double));

     if (vetor == NULL) {
        printf("Erro na alocação de memoria.\n");
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
    int numAlunos;

    printf("Informe o numero de alunos a serem cadastrados: ");
    scanf("%d", &numAlunos);

    Aluno *alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));

    for (int i = 0; i < numAlunos; i++) 
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
    for (int i = 0; i < numAlunos; i++) {
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

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        fflush(stdin);
        fgets(produtos[i].nome, 51, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0'; 

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Preco: ");
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

int verificaValor(int *vetor, int tamanho, int valor) 
 {
    for (int i = 0; i < tamanho; i++) 
    {
        if (vetor[i] == valor) 
        {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int tamanho;
    int valor;
    int *vetor;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser buscado no vetor: ");
    scanf("%d", &valor);

    if (verificaValor(vetor, tamanho, valor)) 
    {
        printf("O valor esta no vetor.\n");
    }
    else
    {
        printf("O valor nao esta no vetor.\n");
    }

    free(vetor);

    return 0;
}


//Exercício 14

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = (float **)malloc(linhas * sizeof(float *));

    for (int i = 0; i < linhas; i++) 
    {
        matriz[i] = (float *)malloc(colunas * sizeof(float));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) 
    {
        for (int j = 0; j < colunas; j++) 
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
        {
        for (int j = 0; j < colunas; j++) 
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

//Exercício 15

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int linha;
    int coluna;
    int valor;
} MaiorNumero;

int main() {
    int N, M;
    MaiorNumero maiores[3];

    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &M);

    int **matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) 
    {
        matriz[i] = (int *)malloc(M * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {

            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        maiores[i].linha = 0;
        maiores[i].coluna = 0;
        maiores[i].valor = matriz[0][0];
    }

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                if (matriz[i][j] > maiores[k].valor) 
                {
                    for (int l = 2; l > k; l--) 
                    {
                        maiores[l] = maiores[l - 1];
                    }
                    maiores[k].linha = i;
                    maiores[k].coluna = j;
                    maiores[k].valor = matriz[i][j];
                    break;
                }
            }
        }
    }

    printf("\nOs tres maiores numeros encontrados na matriz:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Numero: %d\n", maiores[i].valor);
        printf("Linha: %d\n", maiores[i].linha);
        printf("Coluna: %d\n", maiores[i].coluna);
        printf("\n");
    }

    for (int i = 0; i < N; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

//Exercício 16

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N, M;

    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &M);

    int **matrizOriginal = (int **)malloc(N * sizeof(int *));
    printf("Digite os elementos da matriz original:\n");
    for (int i = 0; i < N; i++) {
        matrizOriginal[i] = (int *)malloc(M * sizeof(int));
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrizOriginal[i][j]);
        }
    }
    int **matrizTransposta = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) 
    {
        matrizTransposta[i] = (int *)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) 
        {
            matrizTransposta[i][j] = matrizOriginal[j][i];
        }
    }

    printf("\nMatriz Original:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matrizOriginal[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++)
            {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        free(matrizOriginal[i]);
    }
    free(matrizOriginal);

    for (int i = 0; i < M; i++) 
    {
        free(matrizTransposta[i]);
    }
    free(matrizTransposta);

    return 0;
}

//Exercício 17

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor = (int *)malloc(10 * sizeof(int));
    int tamanho = 10;
    int indice = 0;
    int numero;

    if (vetor == NULL) 
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite os numeros:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) 
        {
            break;
        }

        vetor[indice] = numero;
        indice++;

        if (indice == tamanho) 
        {
            int *novoVetor = (int *)malloc((tamanho + 10) * sizeof(int));
            if (novoVetor == NULL) 
            {
                printf("Erro ao alocar memoria!\n");
                free(vetor);
                return 1;
            }

            for (int i = 0; i < tamanho; i++) 
            {
                novoVetor[i] = vetor[i];
            }

            free(vetor);
            vetor = novoVetor;
            tamanho += 10;
        }
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < indice; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

//Exercício 18

#include <stdio.h>
#include <stdlib.h>

typedef struct {
        char nomeProduto[30];
        int codigoProduto;
        float preco;
    } Registro;

int main() {
    
    int tamanhoVetor = 1024;
    char* vetor = (char*) malloc(tamanhoVetor);
    if (vetor == NULL) {
        printf("Erro ao alocar memoria para o vetor!\n");
        return 1;
    }

    int linhasMatriz = 10;
    int colunasMatriz = 10;
    int** matriz = (int**) malloc(linhasMatriz * sizeof(int*));
    for (int i = 0; i < linhasMatriz; i++) {
        matriz[i] = (int*) malloc(colunasMatriz * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria para a matriz!\n");
            return 1;
        }
    }

    int numRegistros = 50;

    Registro* registros = (Registro*) malloc(numRegistros * sizeof(Registro));
    if (registros == NULL) 
    {
        printf("Erro ao alocar memoria para o vetor de registros!\n");
        return 1;
    }

    int numLinhasTexto = 100;
    int tamanhoLinhaTexto = 80;
    char** texto = (char**) malloc(numLinhasTexto * sizeof(char*));
    for (int i = 0; i < numLinhasTexto; i++) {
        texto[i] = (char*) malloc((tamanhoLinhaTexto + 1) * sizeof(char));
        if (texto[i] == NULL) {
            printf("Erro ao alocar memoria para o texto!\n");
            return 1;
        }
    }

    free(vetor);

    for (int i = 0; i < linhasMatriz; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);

    free(registros);

    for (int i = 0; i < numLinhasTexto; i++) 
    {
        free(texto[i]);
    }
    free(texto);

    return 0;
}

//Exercício 19

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirMatriz(char matriz[10][31]) 
{
    printf("\nMatriz:\n");
    for (int i = 0; i < 10; i++) {
        printf("Linha %d: %s\n", i + 1, matriz[i]);
    }
    printf("\n");
}

int main() 
{
    char matriz[10][31];
    int opcao;
    int linha;
    char nome[31];

    for (int i = 0; i < 10; i++) 
    {
        strcpy(matriz[i], "");
    }

    do 
    {
        printf("Escolha uma opção:\n");
        printf("1 - Gravar um nome em uma linha da matriz\n");
        printf("2 - Apagar o nome contido em uma linha da matriz\n");
        printf("3 - Substituir um nome por outro na matriz\n");
        printf("4 - Apagar um nome da matriz\n");
        printf("5 - Recuperar o nome contido em uma linha da matriz\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) 
        {
            case 1:
                printf("Digite o número da linha (1 a %d): ", 10);
                scanf("%d", &linha);
                linha--;
                if (linha >= 0 && linha < 10) 
                {
                    printf("Digite o nome a ser gravado: ");
                    scanf(" %30s", matriz[linha]);
                }
                else 
                {
                    printf("Linha inválida!\n");
                }
                break;

            case 2:
                printf("Digite o número da linha (1 a %d): ", 10);
                scanf("%d", &linha);
                linha--; 
                if (linha >= 0 && linha < 10)
                {
                    strcpy(matriz[linha], "");
                    printf("Nome apagado da linha %d\n", linha + 1);
                } else {
                    printf("Linha inválida!\n");
                }
                break;

            case 3:
                printf("Digite o nome a ser procurado: ");
                scanf(" %30s", nome);
                printf("Digite o novo nome: ");
                scanf(" %30s", nome);
                for (int i = 0; i < 10; i++) 
                {
                    if (strcmp(matriz[i], nome) == 0) 
                    {
                        printf("Digite o novo nome a ser substituído na linha %d: ", i + 1);
                        scanf(" %30s", matriz[i]);
                        break;
                    }
                }
                break;

            case 4:
                printf("Digite o nome a ser procurado: ");
                scanf(" %30s", nome);
                for (int i = 0; i < 10; i++) 
                {
                    if (strcmp(matriz[i], nome) == 0) 
                    {
                        strcpy(matriz[i], "");
                        printf("Nome apagado da linha %d\n", i + 1);
                        break;
                    }
                }
                break;

            case 5:
                printf("Digite o número da linha (1 a %d): ", 10);
                scanf("%d", &linha);
                linha--; 
                if (linha >= 0 && linha < 10) 
                {
                    if (strcmp(matriz[linha], "") != 0)
                    {
                        printf("Nome na linha %d: %s\n", linha + 1, matriz[linha]);
                    } else {
                        printf("Linha vazia\n");
                    }
                } else {
                    printf("Linha inválida!\n");
                }
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

        imprimirMatriz(matriz);

    } while (opcao != 0);

    return 0;
}

//Exercício 20

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
    char nome[30];
    int x;
    int y;
} Cidade;

int main() {
    
    int numCidades;

    printf("Digite o número de cidades: ");
    scanf("%d", &numCidades);

    Cidade* cidades = (Cidade*) malloc(numCidades * sizeof(Cidade));
    if (cidades == NULL) 
    {
        printf("Erro ao alocar memoria para as cidades!\n");
        return 1;
    }

    for (int i = 0; i < numCidades; i++) 
    {
        printf("\nDigite o nome, a coordenada X e a coordenada Y da cidade %d:\n", i + 1);
        scanf(" %29s %d %d", cidades[i].nome, &cidades[i].x, &cidades[i].y);
    }

    double** matrizDistancias = (double**) malloc(numCidades * sizeof(double*));
    if (matrizDistancias == NULL) 
    {
        printf("Erro ao alocar memória para a matriz de distancias!\n");
        return 1;
    }

    for (int i = 0; i < numCidades; i++)
        {
        matrizDistancias[i] = (double*) malloc(numCidades * sizeof(double));
        if (matrizDistancias[i] == NULL) 
        {
            printf("Erro ao alocar memoria para a matriz de distancias!\n");
            return 1;
        }
    }

    for (int i = 0; i < numCidades; i++) 
    {
        for (int j = 0; j < numCidades; j++)
            {
            int dx = cidades[i].x - cidades[j].x;
            int dy = cidades[i].y - cidades[j].y;
            matrizDistancias[i][j] = sqrt(dx * dx + dy * dy);
        }
    }

    printf("\nMatriz de Distancias:\n");
    for (int i = 0; i < numCidades; i++) 
    {
        for (int j = 0; j < numCidades; j++) 
        {
            printf("%.2f\t", matrizDistancias[i][j]);
        }
        printf("\n");
    }

    int cidade1, cidade2;
    printf("\nDigite o numero de duas cidades (1 a %d) para obter a distancia entre elas:\n", numCidades);
    scanf("%d %d", &cidade1, &cidade2);
    cidade1--;
    cidade2--;
    if (cidade1 >= 0 && cidade1 < numCidades && cidade2 >= 0 && cidade2 < numCidades) 
    {
        printf("A distância entre %s e %s é: %.2f\n", cidades[cidade1].nome, cidades[cidade2].nome,
               matrizDistancias[cidade1][cidade2]);
    }
    else 
    {
        printf("Cidades inválidas!\n");
    }

    for (int i = 0; i < numCidades; i++) 
    {
        free(matrizDistancias[i]);
    }
    free(matrizDistancias);
    free(cidades);

    return 0;
}

//Exercício 21

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;

    printf("Digite as dimensoes da primeira matriz: ");
    scanf("%d %d", &a, &b);

    printf("Digite as dimensoes da segunda matriz : ");
    scanf("%d %d", &c, &d);

    if (b != c) 
    {
        printf("Nao e possivel multiplicar as matrizes! O numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz.\n");
        return 1;
    }

    int** matrizA = (int**) malloc(a * sizeof(int*));
    for (int i = 0; i < a; i++) 
    {
        matrizA[i] = (int*) malloc(b * sizeof(int));
    }

    int** matrizB = (int**) malloc(c * sizeof(int*));
    for (int i = 0; i < c; i++) 
    {
        matrizB[i] = (int*) malloc(d * sizeof(int));
    }

    int** matrizC = (int**) malloc(a * sizeof(int*));
    for (int i = 0; i < a; i++) 
    {
        matrizC[i] = (int*) malloc(d * sizeof(int));
    }

    printf("\nDigite os elementos da primeira matriz:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz:\n");
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < d; j++)
            {
            matrizC[i][j] = 0;
            for (int k = 0; k < b; k++)
                {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("\nMatriz A:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < d; j++) 
        {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nProduto das matrizes A x B:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < d; j++) 
        {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória alocada
    for (int i = 0; i < a; i++) 
    {
        free(matrizA[i]);
    }
    free(matrizA);

    for (int i = 0; i < c; i++) 
    {
        free(matrizB[i]);
    }
    free(matrizB);

    for (int i = 0; i < a; i++) 
    {
        free(matrizC[i]);
    }
    free(matrizC);

    return 0;
}







