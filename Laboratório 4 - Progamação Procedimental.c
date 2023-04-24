//Exercício 1
#include <stdio.h>

int dobro(int x)
{
    return 2*x;
}

int 
main()
{
    int x, y;
    printf ("Escreva um numero\n");
    scanf ("%i", &x);
    y = dobro(x);
    printf ("%i", y);
    return 0;
}

//Exercício 2

#include <stdio.h>

int 
dataext(int dia, int mes, int ano);

int 
main ()
{
  int dia, mes, ano;
  
  printf ("Informe o dia\n");
  scanf ("%i", &dia);

  printf ("\n");

  printf ("Informe o mes\n");
  scanf ("%i", &mes);

  printf ("\n");

  printf ("Informe o ano\n");
  scanf ("%i", &ano);

  printf ("\n");

  dataext(dia, mes, ano);

  return 0;
}
  
int 
dataext(int dia, int mes, int ano)
{
  if (mes==1) 
  printf ("%i de Janeiro de %i", dia, ano);
  if (mes==2) 
  printf ("%i de Fevereiro de %i", dia, ano);
  if (mes==3)
  printf ("%i de Março de %i", dia, ano);
  if (mes==4) 
  printf ("%i de Abril de %i", dia, ano);
  if (mes==5) 
  printf ("%i de Maio de %i", dia, ano);
  if (mes==6)
  printf ("%i de Junho de %i", dia, ano);
  if (mes==7) 
  printf ("%i de Julho de %i", dia, ano);
  if (mes==8) 
  printf ("%i de Agosto de %i", dia, ano);
  if (mes==9)
  printf ("%i de Setembro de %i", dia, ano);
  if (mes=10) 
  printf ("%i de Outubro de %i", dia, ano);
  if (mes==11) 
  printf ("%i de Novembro de %i", dia, ano);
  if (mes==12)
  printf ("%i de Dezembro de %i", dia, ano);
}

//Exercício 3

#include <stdio.h>

int verificador(int x) {
    if(x > 0) {
        return 1; 
    } else if(x < 0) {
        return -1; 
    } else {
        return 0;
    }
}

int main() {
    int num, resultado;
    printf("Digite um numero");
    scanf("%i", &num);

    printf ("\n");
    
    resultado = verificador(num);

    if(resultado == 1) {
        printf("O numero digitado e positivo");
    } else if(resultado == -1) {
        printf("O numero digitado e negativo");
    } else {
        printf(" numero digitado e igual a zero");
    }
    return 0;
}

//Exercício 4
