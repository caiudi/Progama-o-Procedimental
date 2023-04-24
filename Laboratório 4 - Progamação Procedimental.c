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

#include <stdio.h>
#include <math.h>

int verificador(int x)
{
  int raiz;
  raiz = sqrt(x);
  if (pow(raiz,2)==x)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int 
main ()
{
  int num, retorno;
  printf ("Digite um numero: \n");
  scanf ("%i", &num);

  printf ("\n");

  retorno = verificador(num);

  if (retorno==1)
  {
    printf ("O numero %i e um quadrado perfeito", num);
  }
  else
  {
    printf ("O numero %i nao e um quadrado perfeito", num);
  }
  return 0;
}

//Exercício 5

#include <stdio.h>
#include <math.h>
#define pi 3.14

float Volume_Esfera(int x)
{
  int volume;
  volume = 4/3*pi*pow(x,3);
  return volume;
}

int
main()
{
  int r;
  printf ("Digite o valor do raio: ");
  scanf ("%i", &r);

  printf ("\n");

  printf ("O volume da esfera e: %.2f ", Volume_Esfera(r));
  return 0;
}

//Exercício 6

#include <stdio.h>
#include <math.h>

int Conversor_Segundos(int horas, int minutos, int segundos)
{
  int resultado;
  resultado = (horas*3600) + (minutos*60) + segundos;
  return resultado;
}

int
main()
{
  int horas, minutos, segundos;
  printf ("Digite as horas: ");
  scanf ("%i", &horas);

  printf ("\n");

  printf ("Digite os minutos: ");
  scanf ("%i", &minutos);

  printf ("\n");

  printf ("Digite os segundos: ");
  scanf ("%i", &segundos);

  printf ("\n");

  printf ("O resultado em segundos e: %i", Conversor_Segundos(horas, minutos, segundos));
  return 0;
}

//Exercício 7

#include <stdio.h>
#include <math.h>

float 
Conversor_Fahrenheit(float x)
{
  int conversao;
  conversao = x*(9.0/5.0)+32.0;
  return conversao;
}

int 
main()
{
  int num;
  printf ("Digite um valor de temperatura em Celcius: ");
  scanf ("%i", &num);

  printf ("A conversao em Fahrenheit e: %.2f", Conversor_Fahrenheit(num));
  return 0;
}

//Exercício 8


