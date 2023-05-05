#include <stdio.h>
#include <string.h>

int
main()
{
    char String_Entrada[100], String_Copia[100], String_Comparacao[100];
    int i, j, Tamanho_Entrada, Tamanho_Copia;
    printf ("Digite uma frase: ");
    fgets (String_Entrada, 100, stdin);

    Tamanho_Entrada = strlen(String_Entrada);

    printf ("\n");

    for (i = 0 ;  String_Entrada[i] != '\0' ; i++)
    {
        String_Copia[i] = String_Entrada[i];
        if ( String_Copia[i] == 'r' || String_Copia[i] == 'R')
        {
            String_Copia[i] -= 6;
        }
        if ( String_Copia[i] == ' ' || String_Copia[i] == ',')
        {
            if (String_Copia[i-1] == 'l' || String_Copia[i-1] == 'L')
            {
                String_Copia[i-1] += 6;
            }    
        }
    }

    if (String_Copia[i-2] == 'l' || String_Copia[i-2] == 'L')
    {
        String_Copia[i-2] += 6;
    }
    
    Tamanho_Copia = strlen(String_Copia);
    String_Copia[i] = '\0';

    for ( i = 0, j = 0 ; String_Copia[i] != '\0'  ; i++, j++)
    {
        String_Comparacao[i] = String_Copia[j];
        if (String_Copia[j] == String_Copia[j+1])
        {
            j++;
        }
    }
    printf ("%s", String_Comparacao);
    return 0;
}
