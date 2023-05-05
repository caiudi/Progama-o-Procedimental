//EXERCÍCIO EXTRA 





//Exercício 1

#include <stdio.h>

int main()
{
    int A[6], soma;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    soma = A[0] + A[1] + A[5];

    printf ("A soma eh: %i\n\n", soma);

    A[4] = 100;

    printf("%i\n%i\n%i\n%i\n%i\n%i\n", A[0], A[1], A[2], A[3], A[4], A[5]);

    return 0;
}

//Exercício 2

#include <stdio.h>

int main()
{
    int vet[8];
    int x, y, i, soma;

    printf ("Digite os valores do vetor: ");
    for ( i = 0 ; i < 8 ; i++)
    {
        scanf ("%i", &vet[i]);
    }

    printf ("\n");

    printf ("Digite duas posicoes: ");
    scanf ("%i %i", &x, &y);

    printf ("\n");

    if (x > 0 || x <= 7 || y > 0 || y <= 7)
    {
        soma = vet[x]+vet[y];
        printf ("A soma dos valores nas posicoes %i e %i eh %i", x, y, soma);
    }
    else
    {
        printf ("Posicoes invalidas");
    }
    return 0;
}

//Exercício 3

#include <stdio.h>

int
main()
{
    int vet[6];
    int i, j;

    for (i = 0 ; i < 6 ; i++)
    {
        printf ("Digite um valor inteiro: ");
        scanf ("%i", &vet[i]);
    }

    for (j = 5 ; j != 0 ; j--)
    {
        printf ("%i\n", vet[j]);
    }
    printf ("%i\n", vet[0]);

    return 0;
}

//Exercício 4

#include <stdio.h>

int
main()
{
    int vet[5];
    int maior , menor;
    int posicao_maior = 0 , posicao_menor = 0;
    int i;

    for (i = 0 ; i < 5 ; i++)
    {
        printf ("Digite um valor inteiro: ");
        scanf ("%i\n", &vet[i]);
        
        maior = vet[0];
        menor = vet[0];

        if ( vet[i] > maior )
        {
            maior = vet[i];
            posicao_maior = i;
        }
        if ( vet[i] < menor)
        {
            menor = vet[i];
            posicao_menor = i;
        }  
    } 
    
    printf ("A posicao com o maior valor eh %i, e a com o menor valor e %i\n", posicao_maior, posicao_menor);

    return 0;
}

//Exercício 5

#include <stdio.h>

int
main()
{
    int vet[50];
    int i;

    for (i = 0 ; i < 50 ; i++)
    {
        vet[i] = (i+5*i)%(i+1);
        printf ("%i\n", vet[i]);
    }
    return 0;
}

//Exercício 6

#include <stdio.h>

int
Eh_Primo(int x)
{
    int i;

    if (x <= 1)
    {
        return 0;
    }

    for (i = 2 ; i <= x/2 ; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int
main()
{
    int vet[10];
    int i;

    for (i = 0 ; i < 10 ; i++)
    {
        printf ("Digite um valor: ");
        scanf ("%i", &vet[i]);
    }

    for (i = 0 ; i < 10; i++)
    {
        if(Eh_Primo(vet[i]))
        {
            printf ("O numero: %i eh primo, e esta na posicao %i\n", vet[i], i);
        }
    }

    return 0;
}

//Exercício 7

#include <stdio.h>

int
main()
{
    int vet[6];
    int i;
    int soma = 0, quantidadeimpar = 0;

    for (i = 0 ; i < 6 ; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%i", &vet[i]);

        if ( vet[i] % 2 == 0)
        {
            printf ("O numero %i eh par\n", vet[i]);
            soma += vet[i];
        }
        else
        {
            printf ("O numero %i eh impar\n", vet[i]);
            quantidadeimpar++;
        }
    }

    printf ("A soma dos numeros pares eh %i\n", soma);
    printf ("A quantidade de impares eh %i\n", quantidadeimpar);

    return 0; 
}

//Exercício 8

#include <stdio.h>

int main() {
    int numeros[10];
    int i, j; 
    int num;
    
    printf("Digite 10 numeros diferentes: ");

    printf ("\n");

    for(i = 0; i < 10; i++) 
    {
        do 
        {
            scanf("%d", &num);
            for(j = 0; j < i; j++) 
            {
                if(numeros[j] == num) 
                {
                    printf("Numero ja digitado. Digite outro: ");
                    num = -1;
                    break;
                }
            }
        } 
        while(num == -1);
        numeros[i] = num;
    }
    printf("Vetor final: ");
    for(i = 0; i < 10; i++) 
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}

//Exercício 1 (Matrizes)

#include <stdio.h>

int
main()
{
    int Matriz[4][4];
    int contador = 0;
    int i, j;

    printf ("Digite os elementos da matriz 4x4: ");

    printf ("\n");

    for ( i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j < 4 ; j++)
        {
            scanf ("%i", &Matriz[i][j]);
            if (Matriz[i][j] > 10)
            {
                contador++;
            }
        }
    }

    printf ("Essa matriz possui %i numeros maiores que 10", contador);

    return 0;
}

//Exercício 2

#include <stdio.h>

int
main()
{
    int Matriz[5][5];
    int i, j;

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            if (i==j)
            {
                Matriz[i][j] = 1;
            }
            else
            {
                Matriz[i][j] = 0;
            }
        }
    }

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            printf ("%i", Matriz[i][j]);
        }
        printf ("\n");
    }
}

//Exercício 3

#include <stdio.h>

int
main()
{
    int Matriz[4][4];
    int i, j;
    int maior, linha, coluna;

    printf ("Digite os valores da Matriz: ");

    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            scanf ("%i", &Matriz[i][j]);
        }
    }

    maior = Matriz[0][0];
    linha = 0;
    coluna = 0;

    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            if(Matriz[i][j] > maior)
            {
                maior = Matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf ("O maior valor da Matriz eh %i, e esta na posicao %i %i", maior, linha, coluna);

    return 0;
}

//Exercício 4

#include <stdio.h>

int
main()
{
    int Matriz[5][5];
    int i, j;
    int x;
    int linha, coluna, encontrado;

    printf ("Digite os numeros da Matriz: ");

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            scanf ("%i", &Matriz[i][j]);
        }
    }

    printf ("Digite um numero qualquer: ");
    scanf ("%i", &x);

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            if (Matriz[i][j] == x)
            {
                encontrado = 1;
                linha = i;
                coluna = j;
            }
        }
    }

    if(encontrado)
    {
        printf ("O valor %i esta na matriz, localizado em %i %i", x, linha, coluna);
    }
    else
    {
        printf ("O valor %i nao esta na matriz");
    }

    return 0;
}

//Exercício 5

#include <stdio.h>
#include <math.h>

int
main()
{
    int Matriz[10][10];
    int i, j;

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            if (i < j)
            {
                Matriz[i][j] = (2*i)+(7*j);
            }
            if (i == j)
            {
                Matriz[i][j] = (3*pow(i,2)) - 1;
            }
            else 
            {
                Matriz[i][j] = (4*pow(i,3) - 5*pow(j,2));
            }
        }
    }

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            printf ("%i ", Matriz[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

//Exercício 6

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int
main()
{
    int Matriz[4][4];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            Matriz[i][j] = rand() % 20 + 1;
        }
    }

    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            if (i != j)
            Matriz[i][j] = 0;
        }
    }

    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            printf ("%i ", Matriz[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

//Exercício 7

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int
main()
{
    int Cartela[5][5] = {0};
    int Numero_Sorteado[100] = {0};
    int i, j;
    int Numero_Aleatorio;

    srand(time(NULL));

    for(i = 0 ; i < 5 ; i++) 
    {
        for(j = 0 ; j < 5 ; j++) 
        {
            do 
            {
                Numero_Aleatorio = rand() % 100;               
            }
            while (Numero_Aleatorio == 0 || Numero_Sorteado[Numero_Aleatorio]);
            
            Numero_Sorteado[Numero_Aleatorio] = 1;
            Cartela[i][j] = Numero_Aleatorio;
        }
    }

    printf ("Cartela Gerada:\n");

    for(i = 0 ; i < 5 ; i++) 
    {
        for(j = 0 ; j < 5 ; j++) 
        {
            printf ("%i ", Cartela[i][j]);
        }
        printf ("\n");\n
    }

    return 0;
}

//Exercício 8

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int
main()
{
    float A[2][2], B[2][2];
    int i, j;
    int opcao, constante;

    printf ("Digite os elementos da primeira Matriz: ");

    printf ("\n");
    
    for (i = 0 ; i < 2 ; i++)
    {
        for (j = 0 ; j < 2 ; j++)
        {
            scanf ("%f", &A[i][j]);
        }
    }

    printf ("Digite os elemtentos da segunda Matriz: ");

    printf ("\n");

    for (i = 0 ; i < 2 ; i++)
    {
        for (j = 0 ; j < 2 ; j++)
        {
            scanf ("%f", &B[i][j]);
        }
    }

    printf ("Escolha uma das opcoes a seguir:\n\n1 - Somar as duas matrizes\n2 - Subtrair a primeira matriz da segunda\n3 - Adicionar uma constante às duas matrizes\n4 - Imprimir as matrizes\n");

    scanf ("%i", &opcao);

    switch (opcao)
    {
        case 1:
        {
            printf ("Adicao selecionada:\n");
            
            for (i = 0 ; i < 2 ; i++)
            {
                for (j = 0 ; j < 2 ; j++)
                {
                    printf ("%.1f ", A[i][j] + B[i][j]);
                } 
                printf ("\n");
            }
        
        break;
        }

        case 2:
        {
            printf ("Subtracao selecionada:\n");
            
            for (i = 0 ; i < 2 ; i++)
            {
                for (j = 0 ; j < 2 ; j++)
                {
                    printf ("%.1f ", A[i][j] - B[i][j]);
                } 
                printf ("\n");
            }
        
        break;
        }

        case 3:
        {
            printf ("Adicao por constante selecionada:\n\nDigite a constante:\n");
            scanf ("%i", &constante);
            
            printf ("Primeira matriz:\n");
            
            for (i = 0; i < 2 ; i++)
            {
                for (j = 0 ; j < 2 ; j++)
                {
                    printf ("%.1f ", A[i][j] + constante);
                } 
                printf ("\n");
            }

            printf ("Segunda matriz:\n");

            for (i = 0; i < 2 ; i++)
            {
                for (j = 0 ; j < 2 ; j++)
                {
                    printf ("%.1f ", B[i][j] + constante);
                } 
                printf ("\n");
            }
        }
        break;

        case 4:
        {
            printf ("Impressao das matrizes selecionada:\n");

        for (i = 0; i < 2 ; i++)
            {
                for (j = 0 ; j < 2 ; j++)
                {
                    printf ("%.2f ", A[i][j]);
                } 
                printf ("\n");
            }
        
        printf ("\n");

        for (i = 0; i < 2 ; i++)
            {
                for (j = 0 ; j < 2 ; j++)
                {
                    printf ("%.2f ", B[i][j]);
                } 
                printf ("\n");
            }
        }
        break;
    }
    return 0;
}

//Exercício 1 (Strings)

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int
main()
{
    char String[100];

    printf ("Digite uma string:\n");
    scanf ("%s", String);

    printf ("A String digitada foi:%s", String);

    return 0;
}

//Exercício 2

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
    char String[100];
    int contador = 0;
    int i;
    
    printf ("Digite uma String:\n");
    scanf ("%s", String);

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        if(String == '1');
        {
            contador++;
        }
    }

    printf ("A quantidade de 1's na String eh: %i", contador);
    
    return 0;
}

//Exercício 3

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
    char String[100];
    int contador = 0;
    int i;
    
    printf ("Digite uma String:\n");
    scanf ("%s", String);

    for ( i = strlen(String) ; i >= 0 ; i--)
    {
        printf ("%c", String[i]);
    }
    
    printf ("\n");

    return 0;
} 

//Exercício 4

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
    char String[100], c;
    int vogais = 0;
    int i;

    printf ("Digite uma palavra: ");
    scanf ("%s", String);

    printf ("\n");

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        if (String[i] == 'a' || String[i] == 'e' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u' || String[i] == 'A' || String[i] == 'E' || String[i] == 'I' || String[i] == 'O' || String[i] == 'U')
        {
            vogais++;
        }
    }

    printf ("A palavra tem %i vogais", vogais);

    printf ("\n");

    printf ("Digite um caracter: ");
    scanf (" %c", &c);

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        if (String[i] == 'a' || String[i] == 'e' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u' || String[i] == 'A' || String[i] == 'E' || String[i] == 'I' || String[i] == 'O' || String[i] == 'U')
        {
            String[i] = c;
        }
    }

    printf ("%s", String);

    return 0;
}

//Exercício 5

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
    char String[100], conversao[100];
    int i;

    printf ("Digite uma cadeia de caracteres MAIUSCULOS: ");
    scanf ("%s", String);

    printf ("\n");

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        String[i] += 32;
    }

    printf ("%s", String);

    return 0;
}

//Exercício 6

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
    char String[100], conversao[100];
    int i;

    printf ("Digite uma cadeia de caracteres minusculos: ");
    scanf ("%s", String);

    printf ("\n");

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        String[i] -= 32;
    }

    printf ("%s", String);

    return 0;
}

//Exercício 7

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
    char String[100], String2[100];
    int i, j = 0;

    printf ("Digite uma frase, com espacos incluidos. ");
    fgets(String, 100, stdin);

    printf ("\n");

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        if (String[i] != ' ')
        {
            String2[j++] = String[i];
        }
    }
    
    String2[j] = '\0';

    printf ("%s", String2);

    return 0;
}

//Exercício 8

#include <stdio.h>
#include <string.h>

int
main()
{
    char String[100];
    char L1, L2;
    int i;

    printf ("Digite uma String: ");
    fgets(String, 100, stdin);

    printf ("\n");

    printf ("Digite duas letras: ");
    scanf ("%c %c", &L1, &L2);

    printf ("\n");

    for ( i = 0 ; i < strlen(String) ; i++)
    {
        if(String[i] == L1)
        {
            String[i] = L2;
        }
    }

    printf ("%s", String);

    return 0;
}

//Exercício 9

include <stdio.h>
#include <string.h>

int main() {
    char carros[5][100];
    float consumo[5];
    float menor_consumo = 1000000;
    int indice_menor_consumo = 0;

    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o modelo do carro %d: ", i+1);
        scanf("%s", carros[i]);
        printf("Digite o consumo do carro %s (km/l): ", carros[i]);
        scanf("%f", &consumo[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            indice_menor_consumo = i;
        }
    }

    printf("O modelo mais econômico é o %s\n", carros[indice_menor_consumo]);

    printf("Consumo para percorrer 1000km:\n");
    for (int i = 0; i < 5; i++) 
    {
        float litros = 1000 / consumo[i];
        printf("%s: %.2f litros\n", carros[i], litros);
    }

    return 0;
}


//Exercício 10

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int
main()
{
    char String[100];
    int Valor_Inicial, Valor_Final, Valor_Desconto;

    printf ("Digite o nome da mercadoria: ");
    fgets (String, 100, stdin);
    
    printf ("\n");
    
    printf ("Digite o valor da mercadoria: ");
    scanf ("%i", &Valor_Inicial);

    printf ("\n");

    Valor_Final = Valor_Inicial*0.90;

    Valor_Desconto = Valor_Inicial*0.10;

    printf ("Mercadoria: %s\nValor Total: %i\nValor do desconto: %i\nValor a ser pago a vista: %i", String, Valor_Inicial, Valor_Desconto, Valor_Final);

    return 0;
}

//Exercício 11

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int
main()
{
    char S[100];
    int i, j;
    int k;

    printf ("Digite uma String: ");
    fgets ( S, 100, stdin);
    
    printf ("\n");

    printf ("Digite 2 inteiros nao-negativos: ");
    scanf ("%i %i", &i, &j);

    printf ("\n");

    for ( k = i ; k <= j; k++)
    {
        printf ("%c", S[k]);
    }

    return 0;
}

//Exercício 12

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char Cesar[100];
    int i;

    printf("Digite uma mensagem: ");
    fgets(Cesar, 100, stdin);

    printf ("\n");
    
    for (i = 0; i < strlen(Cesar) ; i++) 
    {
        if (Cesar[i] >= 'a' && Cesar[i] <= 'z') 
        {
            Cesar[i] = (Cesar[i] - 'a' + 3) % 26 + 'a';
        } 
        if (Cesar[i] >= 'A' && Cesar[i] <= 'Z')
        {
            Cesar[i] = (Cesar[i] - 'A' + 3) % 26 + 'A';
        }
    }

    printf("%s", Cesar);

    return 0;
}

//Exercício 13

#include <stdio.h>
#include <string.h>

int main() 
{
    char String[100], Copia_String[100];
    int i, tamanho, igual = 0;

    printf ("Digite uma palavra: ");
    scanf ("%s", String);

    tamanho = strlen(String);

    for ( i = 0 ; i < tamanho ; i++)
    {
        Copia_String[i] = String[tamanho - 1];
        tamanho--;
    }
    Copia_String[i] = '\0';

    for ( i = 0 ; i < tamanho ; i++)
    {
        if (String[i] == Copia_String[i])
        {
            igual++;
        }
    }

    if ( tamanho == igual)
    {
        printf ("Eh palindromo.\n");
    }
    else
    {
        printf ("Nao e palindromo.\n");
    }

    return 0;
}

//Exercício 14

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int n, i;
    int tmn1, tmn2;

    printf ("Digite a primeira String: ");
    fgets(str1, 100, stdin);

    printf ("\n");

    printf ("Digite a segunda String: ");
    fgets(str2, 100, stdin);

    printf ("\n");

    printf ("Digite um valor inteiro positivo: ");
    scanf ("%i", &n);

    printf ("\n");

    tmn1 = strlen(str1);
    tmn2 = strlen(str2);

    for ( i = 0 ; i > n && i > tmn2; i++ )
    {
        str1[tmn1 + i] = str2[i];
    }

    str1[tmn1 + i] = '\0';

    printf ("%s\n", str1);

    return 0;
}

//Exercício 15

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20], c1, c2;
    int opcao, posicao, tamanho, i, j, contador, tamanho_s1, tamanho_s2;
    do
    {
        printf("\nMenu:\n");
        printf("1 - Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("2 - Imprimir o tamanho da string S1\n");
        printf("3 - Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao\n");
        printf("4 - Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao\n");
        printf("5 - Imprimir a string S1 de forma reversa\n");
        printf("6 - Contar quantas vezes um dado caractere aparece na string S1. Esse caractere deve ser informado pelo usuario\n");
        printf("7 - Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario\n");
        printf("8 - Verificar se uma string S2 e substring de S1. A string S2 deve ser informada pelo usuario\n");
        printf("9 - Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual e o tamanho da substring\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 0:
            {
                printf("Programa encerrado.\n");
                break;
            }
            case 1:
            {
                printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
                scanf("%s", s1);
                break;
            }
            case 2:
            {
                tamanho_s1 = strlen(s1);
                printf("O tamanho da string S1 e %d.\n", tamanho_s1);
                break;
            }
            case 3:
            {
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                if (strcmp(s1, s2) == 0)
                {
                    printf("As strings sao iguais.\n");
                }
                else
                {
                    printf("As strings sao diferentes.\n");
                }
                break;
            }
            case 4:
            {
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("A concatenacao das strings S1 e S2 resulta na string %s.\n", s1);
                break;
            }
            case 5:
            {
                tamanho_s1 = strlen(s1);
                for (i = tamanho_s1 - 1; i >= 0; i--)
                {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;
            }
            case 6:
            {
                printf("Digite um caractere: ");
                scanf(" %c", &c1);
                tamanho_s1 = strlen(s1);
                contador = 0;
                for (i = 0; i < tamanho_s1; i++)
                {
                    if (s1[i] == c1)
                    {
                        contador++;
                    }
                }
                printf("O caractere %c aparece %d vezes na string S1.\n", c1, contador);
            break;
            }
            case 7:
            {
                printf("Digite o caractere a ser substituido: ");
                scanf(" %c", &c1);
                printf("Digite o caractere substituto: ");
                scanf(" %c", &c2);
                tamanho_s1 = strlen(s1);
                for (i = 0; i < tamanho_s1; i++)
                {
                    if (s1[i] == c1)
                    {
                        s1[i] = c2;
                        break;
                    }
                }
                printf("A string S1 após a substituicao é %s.\n", s1);
                break;
            }
            case 8:
            {
                printf("Digite uma string S2: ");
                scanf("%s", s2);
                if (strstr(s1, s2) != NULL)
                {
                    printf("A string S2 é uma substring de S1.\n");
                }
                else
                {
                    printf("A string S2 não é uma substring de S1.\n");
                }
                break;
            }
            case 9:
            {
                printf("Digite a posicao inicial para criacao da substring: ");
                scanf("%d", &posicao);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                tamanho_s1 = strlen(s1);
                if (posicao >= 0 && posicao <= tamanho_s1 && tamanho >= 0 && tamanho <= tamanho_s1 - posicao)
                {
                    for (i = posicao, j = 0; j < tamanho; i++, j++)
                    {
                        printf("%c", s1[i]);
                    }
                    printf("\n");
                }
                else
                {
                    printf("Dados invalidos para criacao da substring.\n");
                }
                break;
            }
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
    return 0;
}

//Exercício 16

#include <stdio.h>
#include <string.h>

int main()
{
    char sequencia[] = "73167176531330624919225119674426574742355349194934"
                       "96983520312774506326239578318016984801869478851843"
                       "85861560789112949495459501737958331952853208805511"
                       "12540698747158523863050715693290963295227443043557"
                       "66896648950445244523161731856403098711121722383113"
                       "62229893423380308135336276614282806444486645238749"
                       "30358907296290491560440772390713810515859307960866"
                       "70172427121883998797908792274921901699720888093776"
                       "65727333001053367881220235421809751254540594752243"
                       "52584907711670556013604839586446706324415722155397"
                       "53697817977846174064955149290862569321978468622482"
                       "83972241375657056057490261407972968652414535100474"
                       "82166370484403199890008895243450658541227588666881"
                       "16427171479924442928230863465674813919123162824586"
                       "17866458359124566529476545682848912883142607690042"
                       "24219022671055626321111109370544217506941658960408"
                       "07198403850962455444362981230987879927244284909188"
                       "84580156166097919133875499200524063689912560717606"
                       "05886116467109405077541002256983155200055935729725"
                       "71636269561882670428252483600823257530420752963450";

    int i, j, tamanho_sequencia = strlen(sequencia);
    long long produto_maximo = 0, produto_atual;
    char conjunto_maximo[6], conjunto_atual[6];

    for (i = 0; i <= tamanho_sequencia - 5; i++)
    {
        produto_atual = 1;
        for (j = 0; j < 5; j++)
        {
            conjunto_atual[j] = sequencia[i+j];
            produto_atual *= conjunto_atual[j] - '0';
        }
        conjunto_atual[5] = '\0';
        if (produto_atual > produto_maximo)
        {
            produto_maximo = produto_atual;
            strcpy(conjunto_maximo, conjunto_atual);
        }
    }

    printf("O maior produto e %lld, gerado pelo conjunto %s.\n", produto_maximo, conjunto_maximo);

    return 0;
}


