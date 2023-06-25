//Exercício 1

#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar/abrir o arquivo.");
        return 1;
    }

    printf("Digite os caracteres a serem gravados no arquivo (Digite '0' para sair):\n");

    while (1) {
        scanf(" %c", &caractere);

        if (caractere == '0') {
            break;
        }

        fputc(caractere, arquivo);
    }

    fclose(arquivo);

    printf("Arquivo gravado com sucesso.\n");

    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

    fclose(arquivo);

    return 0;
}

//Exercício 2 

#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemLinhas = 0;
    char caractere;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contagemLinhas++;
        }
    }

    if (caractere != '\n' && contagemLinhas > 0) {
        contagemLinhas++;
    }

    fclose(arquivo);

    printf("O arquivo possui %d linha(s).\n", contagemLinhas);

    return 0;
}

//Exercício 3

#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemVogais = 0;
    char caractere;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    // Conta as vogais no arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere);

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contagemVogais++;
        }
    }

    fclose(arquivo);

    printf("O arquivo possui %d vogal(is).\n", contagemVogais);

    return 0;
}

//Exercício 4

#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemVogais = 0;
    int contagemConsoantes = 0;
    char caractere;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
  
    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere);
      
        if (isalpha(caractere)) { 
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                contagemVogais++;
            } else {
                contagemConsoantes++;
            }
        }
    }

    fclose(arquivo);

    printf("O arquivo possui %d vogal(is) e %d consoante(s).\n", contagemVogais, contagemConsoantes);

    return 0;
}


//Exercício 5

#include <stdio.h>

int main() {
    char nomeArquivo[100];
    char caractere;
    FILE *arquivo;
    int contagemCaractere = 0;
    char caractereArquivo;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &caractere);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while ((caractereArquivo = fgetc(arquivo)) != EOF) {
        if (caractereArquivo == caractere) {
            contagemCaractere++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' ocorre %d vez(es) no arquivo.\n", caractere, contagemCaractere);

    return 0;
}

//Exercício 6

#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemLetras[26] = {0};
    char caractere;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); 

        if (isalpha(caractere)) { 
            int indice = caractere - 'a'; 
            contagemLetras[indice]++;
        }
    }

    fclose(arquivo);

    printf("Contagem de letras no arquivo:\n");
    for (int i = 0; i < 26; i++) {
        char letra = 'a' + i;
        printf("%c: %d\n", letra, contagemLetras[i]);
    }

    return 0;
}

//Exercício 7

#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char caractere;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.");
        return 1;
    }

    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        caractere = tolower(caractere); 

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            fputc('*', arquivoSaida);
        } else {
            fputc(caractere, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso!\n");

    return 0;
}

//Exercício 8

#include <stdio.h>

char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char caractere;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);
  
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.");
        return 1;
    }

    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        caractere = toUpperCase(caractere);
        fputc(caractere, arquivoSaida);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso!\n");

    return 0;
}

//Exercício 9

#include <stdio.h>

int main() {
    char nomeArquivo1[100];
    char nomeArquivo2[100];
    char nomeArquivo3[100];
    FILE *arquivo1;
    FILE *arquivo2;
    FILE *arquivo3;
    char caractere;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArquivo1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeArquivo2);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivo3);

    arquivo1 = fopen(nomeArquivo1, "r");

    if (arquivo1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo.");
        return 1;
    }

    arquivo2 = fopen(nomeArquivo2, "r");

    if (arquivo2 == NULL) {
        printf("Erro ao abrir o segundo arquivo.");
        fclose(arquivo1);
        return 1;
    }

    arquivo3 = fopen(nomeArquivo3, "w");

    if (arquivo3 == NULL) {
        printf("Erro ao criar o arquivo de saída.");
        fclose(arquivo1);
        fclose(arquivo2);
        return 1;
    }

    while ((caractere = fgetc(arquivo1)) != EOF) {
        fputc(caractere, arquivo3);
    }

    while ((caractere = fgetc(arquivo2)) != EOF) {
        fputc(caractere, arquivo3);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Arquivo de saída criado com sucesso!\n");

    return 0;
}

//Exercício 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CIDADES 100
#define TAM_NOME_CIDADE 40

typedef struct {
    char nome[TAM_NOME_CIDADE];
    int habitantes;
} Cidade;

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    Cidade cidades[MAX_CIDADES];
    int numCidades = 0;
    int i, indiceCidadeMaisPopulosa;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    while (fscanf(arquivoEntrada, "%40s %d", cidades[numCidades].nome, &cidades[numCidades].habitantes) != EOF) {
        numCidades++;
    }

    indiceCidadeMaisPopulosa = 0;
    for (i = 1; i < numCidades; i++) {
        if (cidades[i].habitantes > cidades[indiceCidadeMaisPopulosa].habitantes) {
            indiceCidadeMaisPopulosa = i;
        }
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.");
        fclose(arquivoEntrada);
        return 1;
    }

    fprintf(arquivoSaida, "%s %d", cidades[indiceCidadeMaisPopulosa].nome, cidades[indiceCidadeMaisPopulosa].habitantes);

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso!\n");

    return 0;
}

//Exercício 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeArquivo[100];
    char palavra[100];
    FILE *arquivo;
    char linha[1000];
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo)) {
        char *ptr = linha;
        while ((ptr = strstr(ptr, palavra)) != NULL) {
            contador++;
            ptr += strlen(palavra);
        }
    }

    fclose(arquivo);

    printf("A palavra '%s' aparece %d vez(es) no arquivo.\n", palavra, contador);

    return 0;
}

//Exercício 12

#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int numCaracteres = 0;
    int numLinhas = 0;
    int numPalavras = 0;
    int contadorLetras[26] = {0}; // contador de ocorrências de cada letra do alfabeto

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo em modo de leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    int caractereAnterior = ' ';
    int caractere;

    while ((caractere = fgetc(arquivo)) != EOF) {
        numCaracteres++;
        
        if (isalpha(caractere)) {
            caractere = tolower(caractere); 

            contadorLetras[caractere - 'a']++;
        }

        if ((caractere == ' ' || caractere == '\t' || caractere == '\n') && caractereAnterior != ' ' && caractereAnterior != '\t' && caractereAnterior != '\n') {
            numPalavras++;
        }

        if (caractere == '\n') {
            numLinhas++;
        }

        caractereAnterior = caractere;
    }

    if (caractereAnterior != ' ' && caractereAnterior != '\t' && caractereAnterior != '\n') {
        numPalavras++;
    }

    fclose(arquivo);

    printf("Número de caracteres: %d\n", numCaracteres);
    printf("Número de linhas: %d\n", numLinhas);
    printf("Número de palavras: %d\n", numPalavras);
    printf("Ocorrências de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, contadorLetras[i]);
    }

    return 0;
}

//Exercício 13

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_TELEFONE 20

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite o nome (ou '0' para sair): ");
    scanf("%s", nome);

    while (strcmp(nome, "0") != 0) {
        printf("Digite o telefone: ");
        scanf("%s", telefone);

        fprintf(arquivo, "%s %s\n", nome, telefone);

        printf("Digite o nome (ou '0' para sair): ");
        scanf("%s", nome);
    }

    fclose(arquivo);

    printf("Cadastro salvo no arquivo '%s'.\n", nomeArquivo);

    return 0;
}

//Exercício 14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    int dia;
    int mes;
    int ano;
} Pessoa;

int calcularIdade(int diaNasc, int mesNasc, int anoNasc, int diaHoje, int mesHoje, int anoHoje) {
    int idade = anoHoje - anoNasc;

    if (mesHoje < mesNasc || (mesHoje == mesNasc && diaHoje < diaNasc)) {
        idade--;
    }

    return idade;
}

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char nome[MAX_NOME];
    int diaNasc, mesNasc, anoNasc;
    int diaHoje, mesHoje, anoHoje;
    Pessoa pessoa;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.");
        fclose(arquivoEntrada);
        return 1;
    }

    time_t t = time(NULL);
    struct tm *dataAtual = localtime(&t);
    diaHoje = dataAtual->tm_mday;
    mesHoje = dataAtual->tm_mon + 1;
    anoHoje = dataAtual->tm_year + 1900;

    while (fscanf(arquivoEntrada, "%s %d %d %d", nome, &diaNasc, &mesNasc, &anoNasc) == 4) {
        pessoa.dia = diaNasc;
        pessoa.mes = mesNasc;
        pessoa.ano = anoNasc;
        strcpy(pessoa.nome, nome);

        int idade = calcularIdade(pessoa.dia, pessoa.mes, pessoa.ano, diaHoje, mesHoje, anoHoje);

        fprintf(arquivoSaida, "%s - %d anos\n", pessoa.nome, idade);
    }
  
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída '%s' gerado com sucesso.\n", nomeArquivoSaida);

    return 0;
}

//Exercício 15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

typedef struct {
    char nome[MAX_NOME];
    int anoNascimento;
} Pessoa;

int calcularIdade(int anoNascimento, int anoCorrente) {
    return anoCorrente - anoNascimento;
}

void escreverIdade(int idade, FILE *arquivoSaida) {
    if (idade < 18) {
        fprintf(arquivoSaida, "menor de idade\n");
    } else if (idade > 18) {
        fprintf(arquivoSaida, "maior de idade\n");
    } else {
        fprintf(arquivoSaida, "entrando na maior idade\n");
    }
}

int main() {
    int anoCorrente;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    Pessoa pessoa;

    printf("Digite o ano corrente: ");
    scanf("%d", &anoCorrente);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.");
        fclose(arquivoEntrada);
        return 1;
    }

    while (fscanf(arquivoEntrada, "%s %d", pessoa.nome, &pessoa.anoNascimento) == 2) {
        int idade = calcularIdade(pessoa.anoNascimento, anoCorrente);

        fprintf(arquivoSaida, "%s - ", pessoa.nome);
        escreverIdade(idade, arquivoSaida);
    }
  
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída '%s' gerado com sucesso.\n", nomeArquivoSaida);

    return 0;
}

//Exercício 16

#include <stdio.h>

#define SIZE 10

void decToBinary(int number, char *binary) {
    int i = 0;

    while (number > 0) {
        binary[i] = (number % 2) + '0';
        number /= 2;
        i++;
    }

    while (i < 8) {
        binary[i] = '0';
        i++;
    }

    int j;
    for (j = 0; j < i / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp;
    }

    binary[i] = '\0'; 
}

int main() {
    int numbers[SIZE];
    char binary[9]; 
    char fileName[100];
    FILE *file;
    int i;

    printf("Digite 10 números:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", fileName);
  
    file = fopen(fileName, "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo de saída.");
        return 1;
    }

    for (i = 0; i < SIZE; i++) {
        decToBinary(numbers[i], binary);
        fprintf(file, "%s\n", binary);
    }

    fclose(file);

    printf("Arquivo '%s' criado com sucesso.\n", fileName);

    return 0;
}

//Exercício 17

#include <stdio.h>

void zerarPosicoes(int matriz[][100], int linha, int coluna, int posicoes[][2], int numPosicoes) {
    int i, j;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            matriz[i][j] = 1;
        }
    }
  
    for (i = 0; i < numPosicoes; i++) {
        int linhaZerar = posicoes[i][0];
        int colunaZerar = posicoes[i][1];
        matriz[linhaZerar][colunaZerar] = 0;
    }
}

void imprimirMatriz(int matriz[][100], int linha, int coluna, FILE *arquivo) {
    int i, j;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }
}

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int linha, coluna, numPosicoes;
    int posicoes[100][2];
    int matriz[100][100];
    int i;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    fscanf(arquivo, "%d %d %d", &linha, &coluna, &numPosicoes);

    for (i = 0; i < numPosicoes; i++) {
        fscanf(arquivo, "%d %d", &posicoes[i][0], &posicoes[i][1]);
    }
  
    fclose(arquivo);
  
    zerarPosicoes(matriz, linha, coluna, posicoes, numPosicoes);

    arquivo = fopen("matriz_saida.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de saída.");
        return 1;
    }

    imprimirMatriz(matriz, linha, coluna, arquivo);

    fclose(arquivo);

    printf("Arquivo 'matriz_saida.txt' criado com sucesso.\n");

    return 0;
}

//Exercício 18

#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char nome[100];
    float preco;
    float total = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while (fscanf(arquivo, "%s %f", nome, &preco) == 2) {
        total += preco;
    }

    fclose(arquivo);

    printf("O total da compra é: R$%.2f\n", total);

    return 0;
}

//Exercício 19

#include <stdio.h>
#include <string.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char nome[100];
    float nota;
    char nomeMaiorNota[100];
    float maiorNota = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
  
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while (fscanf(arquivo, "NOME: %s NOTA: %f", nome, &nota) == 2) {
        if (nota > maiorNota) {
            maiorNota = nota;
            strcpy(nomeMaiorNota, nome);
        }
    }

    fclose(arquivo);

    if (maiorNota > 0) {
        printf("Aluno com maior nota:\n");
        printf("Nome: %s\n", nomeMaiorNota);
        printf("Nota: %.2f\n", maiorNota);
    } else {
        printf("Não foi encontrado nenhum aluno no arquivo.\n");
    }

    return 0;
}

//Exercício 20

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numAlunos;
    char nomeArquivo[100];
    char** nomes;
    float* notas;
    FILE* arquivo;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    nomes = (char**)malloc(numAlunos * sizeof(char*));
    notas = (float*)malloc(numAlunos * sizeof(float));

    for (int i = 0; i < numAlunos; i++) {
        nomes[i] = (char*)malloc(41 * sizeof(char)); 
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]);
        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf(" %[^\n]", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        fprintf(arquivo, "%-40s %.2f\n", nomes[i], notas[i]);
    }

    fclose(arquivo);

    for (int i = 0; i < numAlunos; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(notas);

    printf("Arquivo criado com sucesso.\n");

    return 0;
}

//Exercício 21

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

typedef struct {
    char nome[MAX_NOME+1];
    float nota;
} Aluno;

int main() {
    int numAlunos;
    Aluno* alunos;
    FILE* arquivo;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }


    arquivo = fopen("alunos.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.");
        return 1;
    }
    fwrite(alunos, sizeof(Aluno), numAlunos, arquivo);
    fclose(arquivo);

    arquivo = fopen("alunos.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    Aluno alunoMaiorNota;
    alunoMaiorNota.nota = 0;

    while (fread(&alunoMaiorNota, sizeof(Aluno), 1, arquivo) == 1) {
        if (alunoMaiorNota.nota > alunoMaiorNota.nota) {
            strcpy(alunoMaiorNota.nome, alunos[i].nome);
        }
    }

    fclose(arquivo);

    printf("Aluno com maior nota: %s\n", alunoMaiorNota.nome);

    free(alunos);

    return 0;
}

//Exercício 22

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 41

typedef struct {
    char nome[MAX_NOME];
    int notas[3];
} Aluno;

int comparar_notas(const void* a, const void* b) {
    const Aluno* alunoA = (const Aluno*)a;
    const Aluno* alunoB = (const Aluno*)b;
    int somaA = alunoA->notas[0] + alunoA->notas[1] + alunoA->notas[2];
    int somaB = alunoB->notas[0] + alunoB->notas[1] + alunoB->notas[2];
    return somaA - somaB;
}

void ordenar_notas(const char* arquivo_entrada, const char* arquivo_saida) {
    FILE* entrada = fopen(arquivo_entrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    Aluno alunos[100]; 
    int num_alunos = 0;

    while (fscanf(entrada, "%40s %d %d %d", alunos[num_alunos].nome,
                  &alunos[num_alunos].notas[0], &alunos[num_alunos].notas[1],
                  &alunos[num_alunos].notas[2]) == 4) {
        num_alunos++;
    }

    fclose(entrada);

    qsort(alunos, num_alunos, sizeof(Aluno), comparar_notas);

    FILE* saida = fopen(arquivo_saida, "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return;
    }

    for (int i = 0; i < num_alunos; i++) {
        fprintf(saida, "%s: %d, %d, %d\n", alunos[i].nome, alunos[i].notas[0],
                alunos[i].notas[1], alunos[i].notas[2]);
    }

    fclose(saida);

    printf("Arquivo de saída '%s' gerado com sucesso!\n", arquivo_saida);
}

int main() {
    char arquivo_entrada[100];
    char arquivo_saida[100]; 

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arquivo_entrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", arquivo_saida);

    ordenar_notas(arquivo_entrada, arquivo_saida);

    return 0;
}

//Exercício 23

#include <stdio.h>

typedef struct {
    char profissao[50];
    int tempo_servico;
} Funcionario;

int main() {
    FILE* arquivo;
    Funcionario funcionarios[5];

    arquivo = fopen("emp.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite a profissão do funcionário %d: ", i + 1);
        scanf("%s", funcionarios[i].profissao);

        printf("Digite o tempo de serviço (em anos) do funcionário %d: ", i + 1);
        scanf("%d", &funcionarios[i].tempo_servico);

        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempo_servico);
    }

    fclose(arquivo);

    arquivo = fopen("emp.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Dados dos funcionários:\n");
    while (fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempo_servico) == 2) {
        printf("Profissão: %s | Tempo de serviço: %d anos\n", funcionarios[i].profissao, funcionarios[i].tempo_servico);
    }

    fclose(arquivo);

    return 0;
}

//Exercício 24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
} Mercadoria;

void cadastrar_mercadoria(FILE* arquivo) {
    Mercadoria mercadoria;

    printf("Digite o código da mercadoria: ");
    scanf("%d", &mercadoria.codigo);

    printf("Digite a descrição da mercadoria: ");
    scanf(" %[^\n]", mercadoria.descricao);

    printf("Digite a quantidade da mercadoria: ");
    scanf("%d", &mercadoria.quantidade);

    fseek(arquivo, 0, SEEK_END);

    fwrite(&mercadoria, sizeof(Mercadoria), 1, arquivo);

    printf("Mercadoria cadastrada com sucesso!\n");
}

void retirar_mercadoria(FILE* arquivo) {
    int codigo;
    printf("Digite o código da mercadoria a ser retirada: ");
    scanf("%d", &codigo);

    fseek(arquivo, 0, SEEK_SET);

    Mercadoria mercadoria;
    int encontrada = 0;

    while (fread(&mercadoria, sizeof(Mercadoria), 1, arquivo) == 1) {
        if (mercadoria.codigo == codigo) {
            encontrada = 1;
            break;
        }
    }

    if (encontrada) {
        int quantidade_retirada;
        printf("Digite a quantidade a ser retirada: ");
        scanf("%d", &quantidade_retirada);

        if (quantidade_retirada > mercadoria.quantidade) {
            printf("Quantidade insuficiente. Retirada não realizada.\n");
        } else {
            mercadoria.quantidade -= quantidade_retirada;

        
            fseek(arquivo, -sizeof(Mercadoria), SEEK_CUR);

            fwrite(&mercadoria, sizeof(Mercadoria), 1, arquivo);

            printf("Mercadoria retirada com sucesso!\n");
        }
    } else {
        printf("Mercadoria não encontrada.\n");
    }
}

void relatorio_geral(FILE* arquivo) {
    fseek(arquivo, 0, SEEK_SET);

    Mercadoria mercadoria;

    printf("Relatório Geral:\n");
    printf("================\n");
    printf("%-10s %-20s %-10s\n", "Código", "Descrição", "Quantidade");

    while (fread(&mercadoria, sizeof(Mercadoria), 1, arquivo) == 1) {
        printf("%-10d %-20s %-10d\n", mercadoria.codigo, mercadoria.descricao, mercadoria.quantidade);
    }
}

void relatorio_nao_disponiveis(FILE* arquivo) {
    fseek(arquivo, 0, SEEK_SET);

    Mercadoria mercadoria;

    printf("Relatório de Produtos Não Disponíveis:\n");
    printf("=====================================\n");
    printf("%-10s %-20s %-10s\n", "Código", "Descrição", "Quantidade");

    while (fread(&mercadoria, sizeof(Mercadoria), 1, arquivo) == 1) {
        if (mercadoria.quantidade == 0) {
            printf("%-10d %-20s %-10d\n", mercadoria.codigo, mercadoria.descricao, mercadoria.quantidade);
        }
    }
}

int main() {
    FILE* arquivo;
    int opcao;

    arquivo = fopen("despensa.bin", "rb+");
    if (arquivo == NULL) {
        arquivo = fopen("despensa.bin", "wb+");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    }

    do {
        printf("\nControle de Mercadorias\n");
        printf("=======================\n");
        printf("1. Cadastrar mercadoria\n");
        printf("2. Retirar mercadoria\n");
        printf("3. Relatório geral\n");
        printf("4. Relatório de produtos não disponíveis\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_mercadoria(arquivo);
                break;
            case 2:
                retirar_mercadoria(arquivo);
                break;
            case 3:
                relatorio_geral(arquivo);
                break;
            case 4:
                relatorio_nao_disponiveis(arquivo);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    fclose(arquivo);

    return 0;
}

//Exercício 25

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char telefone[20];
    int dia_aniversario;
    int mes_aniversario;
} Contato;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void inserir_contato(Contato* agenda, int* total_contatos) {
    if (*total_contatos == 100) {
        printf("A agenda está cheia. Não é possível inserir mais contatos.\n");
        return;
    }

    Contato novo_contato;

    printf("Digite o nome do contato: ");
    fgets(novo_contato.nome, 50, stdin);
    novo_contato.nome[strcspn(novo_contato.nome, "\n")] = '\0';

    printf("Digite o telefone do contato: ");
    fgets(novo_contato.telefone, 20, stdin);
    novo_contato.telefone[strcspn(novo_contato.telefone, "\n")] = '\0';

    printf("Digite o dia do aniversário do contato: ");
    scanf("%d", &novo_contato.dia_aniversario);

    printf("Digite o mês do aniversário do contato: ");
    scanf("%d", &novo_contato.mes_aniversario);

    agenda[*total_contatos] = novo_contato;
    (*total_contatos)++;

    printf("Contato inserido com sucesso!\n");

    limpar_buffer();
}

void remover_contato(Contato* agenda, int* total_contatos) {
    char nome[50];
    int encontrado = 0;

    printf("Digite o nome do contato a ser removido: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; i < *total_contatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            encontrado = 1;
            for (int j = i; j < *total_contatos - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            (*total_contatos)--;
            printf("Contato removido com sucesso!\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }

    limpar_buffer();
}

void pesquisar_contato(Contato* agenda, int total_contatos) {
    char nome[50];
    int encontrado = 0;

    printf("Digite o nome do contato a ser pesquisado: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; i < total_contatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            encontrado = 1;
            printf("Contato encontrado:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }

    limpar_buffer();
}

void listar_contatos(Contato* agenda, int total_contatos) {
    printf("Lista de Contatos:\n");
    printf("==================\n");
    for (int i = 0; i < total_contatos; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
        printf("------------------\n");
    }
}

void listar_contatos_letra(Contato* agenda, int total_contatos, char letra) {
    printf("Lista de Contatos com Nome Iniciando por '%c':\n", letra);
    printf("============================================\n");
    for (int i = 0; i < total_contatos; i++) {
        if (agenda[i].nome[0] == letra) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            printf("------------------\n");
        }
    }
}

void listar_aniversariantes_mes(Contato* agenda, int total_contatos, int mes) {
    printf("Aniversariantes do Mês %d:\n", mes);
    printf("========================\n");
    for (int i = 0; i < total_contatos; i++) {
        if (agenda[i].mes_aniversario == mes) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            printf("------------------\n");
        }
    }
}

void salvar_contatos(Contato* agenda, int total_contatos) {
    FILE* arquivo = fopen("contatos.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar os contatos.\n");
        return;
    }

    fwrite(&total_contatos, sizeof(int), 1, arquivo);
    fwrite(agenda, sizeof(Contato), total_contatos, arquivo);

    fclose(arquivo);
}

void carregar_contatos(Contato* agenda, int* total_contatos) {
    FILE* arquivo = fopen("contatos.bin", "rb");
    if (arquivo == NULL) {
        printf("Arquivo de contatos não encontrado. Será criado um novo arquivo.\n");
        return;
    }

    fread(total_contatos, sizeof(int), 1, arquivo);
    fread(agenda, sizeof(Contato), *total_contatos, arquivo);

    fclose(arquivo);
}

int main() {
    Contato agenda[100];
    int total_contatos = 0;
    int opcao;

    carregar_contatos(agenda, &total_contatos);

    do {
        printf("\nGerenciador de Agenda de Contatos\n");
        printf("===============================\n");
        printf("1. Inserir contato\n");
        printf("2. Remover contato\n");
        printf("3. Pesquisar contato pelo nome\n");
        printf("4. Listar todos os contatos\n");
        printf("5. Listar contatos cujo nome inicia com uma dada letra\n");
        printf("6. Imprimir os aniversariantes do mês\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1:
                inserir_contato(agenda, &total_contatos);
                break;
            case 2:
                remover_contato(agenda, &total_contatos);
                break;
            case 3:
                pesquisar_contato(agenda, total_contatos);
                break;
            case 4:
                listar_contatos(agenda, total_contatos);
                break;
            case 5:
                {
                    char letra;
                    printf("Digite a letra para filtrar os contatos: ");
                    scanf("%c", &letra);
                    listar_contatos_letra(agenda, total_contatos, letra);
                    limpar_buffer();
                }
                break;
            case 6:
                {
                    int mes;
                    printf("Digite o mês para listar os aniversariantes: ");
                    scanf("%d", &mes);
                    listar_aniversariantes_mes(agenda, total_contatos, mes);
                    limpar_buffer();
                }
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    salvar_contatos(agenda, total_contatos);

    return 0;
}

//Exercício 26

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} Aluno;

void gravar_alunos(Aluno* alunos, int num_alunos) {
    FILE* arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para gravar os alunos.\n");
        return;
    }

    fprintf(arquivo, "%d\n", num_alunos);
    for (int i = 0; i < num_alunos; i++) {
        fprintf(arquivo, "%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano_nascimento);
    }

    fclose(arquivo);
}

Aluno* carregar_alunos(int* num_alunos) {
    FILE* arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo de alunos não encontrado.\n");
        return NULL;
    }

    fscanf(arquivo, "%d", num_alunos);

    Aluno* alunos = (Aluno*)malloc(*num_alunos * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memória para os alunos.\n");
        return NULL;
    }

    for (int i = 0; i < *num_alunos; i++) {
        fscanf(arquivo, "%d %s %d", &alunos[i].matricula, alunos[i].sobrenome, &alunos[i].ano_nascimento);
    }

    fclose(arquivo);

    return alunos;
}

void liberar_alunos(Aluno* alunos) {
    free(alunos);
}

int main() {
    int opcao;
    int num_alunos = 0;
    Aluno* alunos = NULL;

    printf("Bem-vindo ao sistema de cadastro de alunos!\n");

    printf("Deseja carregar os registros do arquivo? (1 - Sim, 0 - Não): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        alunos = carregar_alunos(&num_alunos);
        if (alunos == NULL) {
            printf("Não foi possível carregar os registros do arquivo.\n");
            return 0;
        }
    } else {
        printf("Informe o número de alunos a serem cadastrados: ");
        scanf("%d", &num_alunos);

        alunos = (Aluno*)malloc(num_alunos * sizeof(Aluno));
        if (alunos == NULL) {
            printf("Erro ao alocar memória para os alunos.\n");
            return 0;
        }

        for (int i = 0; i < num_alunos; i++) {
            printf("Aluno %d:\n", i + 1);
            printf("Matrícula: ");
            scanf("%d", &alunos[i].matricula);
            printf("Sobrenome: ");
            scanf("%s", alunos[i].sobrenome);
            printf("Ano de Nascimento: ");
            scanf("%d", &alunos[i].ano_nascimento);
        }

        gravar_alunos(alunos, num_alunos);
    }

    printf("Dados dos Alunos:\n");
    printf("=================\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("-----------------\n");
    }

    liberar_alunos(alunos);

    return 0;
}

//Exercício 27

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

Aluno* alunos;
int total_alunos;
char nome_turma[50];

void definir_informacoes_turma() {
    printf("Informe o nome da turma: ");
    scanf("%s", nome_turma);
    printf("Informações da turma definidas com sucesso.\n");
}

void inserir_aluno_notas() {
    Aluno aluno;

    printf("Informe o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &aluno.nota1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &aluno.nota2);
    printf("Informe a terceira nota do aluno: ");
    scanf("%f", &aluno.nota3);

    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;

    alunos = (Aluno*)realloc(alunos, (total_alunos + 1) * sizeof(Aluno));
    alunos[total_alunos] = aluno;
    total_alunos++;

    printf("Aluno e notas inseridos com sucesso.\n");
}

void exibir_alunos_medias() {
    printf("Alunos e Médias:\n");
    printf("================\n");
    for (int i = 0; i < total_alunos; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Média: %.2f\n", alunos[i].media);
        printf("----------------\n");
    }
}

void exibir_alunos_aprovados() {
    printf("Alunos Aprovados:\n");
    printf("================\n");
    for (int i = 0; i < total_alunos; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Aluno: %s\n", alunos[i].nome);
            printf("Média: %.2f\n", alunos[i].media);
            printf("----------------\n");
        }
    }
}

void exibir_alunos_reprovados() {
    printf("Alunos Reprovados:\n");
    printf("==================\n");
    for (int i = 0; i < total_alunos; i++) {
        if (alunos[i].media < 7.0) {
            printf("Aluno: %s\n", alunos[i].nome);
            printf("Média: %.2f\n", alunos[i].media);
            printf("----------------\n");
        }
    }
}

void salvar_dados_disco() {
    FILE* arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar os dados.\n");
        return;
    }

    fprintf(arquivo, "Turma: %s\n", nome_turma);
    fprintf(arquivo, "Total de Alunos: %d\n", total_alunos);
    fprintf(arquivo, "\n");

    for (int i = 0; i < total_alunos; i++) {
        fprintf(arquivo, "Aluno: %s\n", alunos[i].nome);
        fprintf(arquivo, "Nota 1: %.2f\n", alunos[i].nota1);
        fprintf(arquivo, "Nota 2: %.2f\n", alunos[i].nota2);
        fprintf(arquivo, "Nota 3: %.2f\n", alunos[i].nota3);
        fprintf(arquivo, "Média: %.2f\n", alunos[i].media);
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("Dados salvos em disco com sucesso.\n");
}

void exibir_menu() {
    printf("\n");
    printf("Menu:\n");
    printf("-----\n");
    printf("1 - Definir informações da turma\n");
    printf("2 - Inserir aluno e notas\n");
    printf("3 - Exibir alunos e médias\n");
    printf("4 - Exibir alunos aprovados\n");
    printf("5 - Exibir alunos reprovados\n");
    printf("6 - Salvar dados em disco\n");
    printf("7 - Sair do programa\n");
    printf("\n");
}

int main() {
    int opcao;

    alunos = NULL;
    total_alunos = 0;

    printf("Bem-vindo ao sistema de gerenciamento de notas!\n");

    do {
        exibir_menu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                definir_informacoes_turma();
                break;
            case 2:
                inserir_aluno_notas();
                break;
            case 3:
                exibir_alunos_medias();
                break;
            case 4:
                exibir_alunos_aprovados();
                break;
            case 5:
                exibir_alunos_reprovados();
                break;
            case 6:
                salvar_dados_disco();
                break;
            case 7:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 7);

    free(alunos);

    return 0;
}

//Exercício 28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter_string(char* str) {
    int tamanho = strlen(str);
    int i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char nome_arquivo_entrada[100];
    char nome_arquivo_saida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    FILE* arquivo_entrada = fopen(nome_arquivo_entrada, "r");
    FILE* arquivo_saida = fopen(nome_arquivo_saida, "w");

    if (arquivo_entrada == NULL || arquivo_saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    char linha[31];

    while (fgets(linha, sizeof(linha), arquivo_entrada) != NULL) {
        inverter_string(linha);
        fprintf(arquivo_saida, "%s", linha);
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    printf("Arquivo de saída gerado com sucesso.\n");

    return 0;
}

//Exercício 29

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo_vendedor;
    char nome_vendedor[50];
    float valor_venda;
    int mes;
} Registro;

void criar_arquivo_dados() {
    FILE* arquivo = fopen("dados.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }
    fclose(arquivo);
    printf("Arquivo de dados criado com sucesso.\n");
}

void incluir_registro() {
    FILE* arquivo = fopen("dados.bin", "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados para inclusão.\n");
        return;
    }

    Registro novo_registro;

    printf("Informe o código do vendedor: ");
    scanf("%d", &novo_registro.codigo_vendedor);
    printf("Informe o nome do vendedor: ");
    scanf(" %[^\n]", novo_registro.nome_vendedor);
    printf("Informe o valor da venda: ");
    scanf("%f", &novo_registro.valor_venda);
    printf("Informe o mês: ");
    scanf("%d", &novo_registro.mes);

    fwrite(&novo_registro, sizeof(Registro), 1, arquivo);

    fclose(arquivo);
    printf("Registro incluído com sucesso.\n");
}

void excluir_registro() {
    int codigo_vendedor, mes;
    printf("Informe o código do vendedor a ser excluído: ");
    scanf("%d", &codigo_vendedor);
    printf("Informe o mês do registro a ser excluído: ");
    scanf("%d", &mes);

    FILE* arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados para exclusão.\n");
        return;
    }

    FILE* arquivo_temp = fopen("temp.bin", "wb");
    if (arquivo_temp == NULL) {
        printf("Erro ao criar arquivo temporário.\n");
        fclose(arquivo);
        return;
    }

    Registro registro;

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        if (registro.codigo_vendedor != codigo_vendedor || registro.mes != mes) {
            fwrite(&registro, sizeof(Registro), 1, arquivo_temp);
        }
    }

    fclose(arquivo);
    fclose(arquivo_temp);

    remove("dados.bin");
    rename("temp.bin", "dados.bin");

    printf("Registro excluído com sucesso.\n");
}

void alterar_valor_venda() {
    int codigo_vendedor, mes;
    printf("Informe o código do vendedor: ");
    scanf("%d", &codigo_vendedor);
    printf("Informe o mês do registro: ");
    scanf("%d", &mes);

    FILE* arquivo = fopen("dados.bin", "r+b");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados para alteração.\n");
        return;
    }

    Registro registro;

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        if (registro.codigo_vendedor == codigo_vendedor && registro.mes == mes) {
            printf("Informe o novo valor da venda: ");
            scanf("%f", &registro.valor_venda);

            fseek(arquivo, -sizeof(Registro), SEEK_CUR);
            fwrite(&registro, sizeof(Registro), 1, arquivo);
            break;
        }
    }

    fclose(arquivo);

    printf("Valor da venda alterado com sucesso.\n");
}

void imprimir_registros() {
    FILE* arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados para impressão.\n");
        return;
    }

    Registro registro;

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        printf("Código do vendedor: %d\n", registro.codigo_vendedor);
        printf("Nome do vendedor: %s\n", registro.nome_vendedor);
        printf("Valor da venda: %.2f\n", registro.valor_venda);
        printf("Mês: %d\n\n", registro.mes);
    }

    fclose(arquivo);
}

void excluir_arquivo_dados() {
    remove("dados.bin");
    printf("Arquivo de dados excluído.\n");
}

int comparar_registros(const void* registro1, const void* registro2) {
    Registro* r1 = (Registro*)registro1;
    Registro* r2 = (Registro*)registro2;

    if (r1->codigo_vendedor < r2->codigo_vendedor) {
        return -1;
    } else if (r1->codigo_vendedor > r2->codigo_vendedor) {
        return 1;
    } else {
        if (r1->mes < r2->mes) {
            return -1;
        } else if (r1->mes > r2->mes) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {
    int opcao;

    printf("Bem-vindo ao sistema de gerenciamento de vendas!\n");

    do {
        printf("\n");
        printf("Menu:\n");
        printf("-----\n");
        printf("1 - Criar o arquivo de dados\n");
        printf("2 - Incluir um registro no arquivo\n");
        printf("3 - Excluir um vendedor no arquivo\n");
        printf("4 - Alterar o valor de uma venda no arquivo\n");
        printf("5 - Imprimir os registros na saída padrão\n");
        printf("6 - Excluir o arquivo de dados\n");
        printf("7 - Finalizar o programa\n");
        printf("\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criar_arquivo_dados();
                break;
            case 2:
                incluir_registro();
                break;
            case 3:
                excluir_registro();
                break;
            case 4:
                alterar_valor_venda();
                break;
            case 5:
                imprimir_registros();
                break;
            case 6:
                excluir_arquivo_dados();
                break;
            case 7:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 7);

    return 0;
}









