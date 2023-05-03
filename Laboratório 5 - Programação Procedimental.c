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

//Exercício 9

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

//Exercício 10

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

//Exercício 11

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

//Exercício 12

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

//Exercício 13

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

//Exercício 14

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

//Exercício 15

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

//Exercício 16

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
            printf ("Impressao das raizes selecionada:\n");

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

//Exercício 17

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

//Exercício 18

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

//Exercício 19

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

//Exercício 20

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

    for ( i = 0 ; i < strlen(String) ; i++);
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

    printf ("%c", String);

    return 0;
}

//Exercício 21




