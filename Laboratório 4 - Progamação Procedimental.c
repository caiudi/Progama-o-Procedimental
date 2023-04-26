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
  if (mes==10) 
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

#include <stdio.h>
#include <math.h>

 float 
 Calculo_Hipotenusa(int a, int b)
 {
  int hipotenusa;
  hipotenusa = sqrt(pow(a,2)+pow(b,2));
  return hipotenusa;
 }

 int
 main()
 {
  int a, b;
  printf ("Digite os valores dos catetos: ");
  scanf ("%i %i", &a, &b);

  printf ("\n");

  printf ("O Valor da hipotenusa e: %.2f", Calculo_Hipotenusa(a, b));
  return 0;
 }

//Exercício 9

#include <stdio.h>
#include <math.h>
#define pi 3.1415

float
Calculo_Volume_Cilindro(int altura, int raio)
{
  float volume;
  volume = pi * pow(raio,2) * altura;
  return volume;
}
int 
main()
{
  int altura, raio;
  printf ("Digite a altura do cilindro: ");
  scanf ("%i", &altura);

  printf ("\n");

  printf ("Digite o raio do cilindro: ");
  scanf ("%i", &raio);

  printf ("\n");

  printf ("O volume do cilindro e: %.2f", Calculo_Volume_Cilindro(altura, raio));
  return 0;
}

//Exercício 10

#include <stdio.h>
#include <math.h>

int
Verificar_Maior(int x, int y)
{
  if (x>y)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int
main()
{
  int x, y, resultado;
  printf ("Digite 2 numeros: ");
  scanf ("%i %i", &x, &y);

  printf ("\n");

  resultado = Verificar_Maior(x, y);
  
  if (resultado==1)
  {
    printf ("O numero %i e maior que o %i", x, y);
  } 
  else
  {
    printf ("O numero %i e maior que o %i", y, x);
  }
return 0;
}

//Exercício 11

#include <stdio.h>

int 
Calculadora_Media(int a, int b, int c, char d)
{
  float media;
  if (d == 'A' || d == 'a')
  {
    media = (a+b+c)/3;
    printf ("A media aritmetica das notas e: %.2f", media);
  }
  if (d == 'P' || d == 'p')
  {
    media = (a*5)+(b*3)+(c*2)/10;
    printf ("A media ponderada das notas e: %.2f", media);
  }
}

int
main()
{
  int nota1, nota2, nota3;
  char d;
  printf ("Digite a primeira nota: ");
  scanf ("%d", &nota1);

  printf ("\n");
  
  printf ("Digite a segunda nota: ");
  scanf ("%d", &nota2);

  printf ("\n");
  
  printf ("Digite a terceira nota: ");
  scanf ("%d", &nota3);

  printf ("\n");

  printf ("Digite A para calcular a media aritmetica ou P para calcular a media ponderada: ");
  scanf ("%s", &d);

  Calculadora_Media(nota1, nota2, nota3, d);

}

//Exercício 12

#include <stdio.h>

int
Soma_Algarismos(int a)
{
  int soma=0;
  if (a>0)
  {
    while (a>0)
    {
      soma = soma + a%10;
      a=a/10;
    }
    printf ("A soma dos numeros e: %i", soma);
  }
  else
  {
    printf ("O numero e invalido");
  }
}

int 
main()
{
  int num;
  printf ("Digite um numero: ");
  scanf ("%i", &num);

  Soma_Algarismos(num);
  
  return 0;
}

//Exercício 13

#include <stdio.h>

float 
Operacoes(float x, float y, char operacao) 
{
    float resultado;
    switch(operacao) 
    {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        default:
            printf("Operacao invalida\n");
    }
    return resultado;
}

int
main()
{
  int num1, num2, resultado;
  char a;

  printf ("Digite o primeiro numero: ");
  scanf ("%i", &num1);

  printf ("\n");

  printf ("Digite o segundo numero: ");
  scanf ("%i", &num2);

  printf ("\n");

  printf ("Selecione a sua operacao\n\n+ : Adicao\n- : Subtracao\n* : Multiplicacao\n/ : Divisao\n");
  scanf ("%c", &a);
  
  resultado = Operacoes(num1, num2, a);
  printf ("O resultado e: %i", resultado);

  return 0;
}

//Exercício 14

#include <stdio.h>

int 
Consumo_Gasolina(int x, int y)
{
  float consumo;
  consumo = x/y;
  return consumo;
}

int
main()
{
  int km, litros;
  float consumo;
  printf ("Digite os KM percorridos: ");
  scanf ("%i", &km);

  printf ("\n");

  printf ("Digite os litros consumidos: ");
  scanf ("%i", &litros);

  printf ("\n");

  consumo = Consumo_Gasolina(km, litros);
  
  if (consumo < 8)
  {
    printf ("Venda o Carro!");
  }
  if (consumo > 8 && consumo < 14)
  {
    printf ("Economico!");
  }
  if (consumo > 14)
  {
    printf ("Super Economico!");
  }
  return 0;
}

//Exercício 15

#include <stdio.h>

int 
Verificar_Triangulo(int x, int y, int z)
{
  if (x+y > z && x+z > y && z+y > x)
  {
    printf ("Os valores formam um triangulo!\n");
    return 1;
  }
  else
  {
    printf ("Os valores nao formam um triangulo!");
    return 0;
  }
}

int
Verificar_Tipo_Triangulo(int x, int y, int z)
{
  if (x == y && y == z)
  {
    printf ("Alem do mais, um Triangulo Equilatero!\n");
  }
  else if (x == y || x == z || y == z)
  {
    printf ("Alem do mais, um Triangulo isosceles!\n");
  }
  else 
  {
    printf ("Alem do mais, um Triangulo Escaleno!\n");
  }
}

int 
main()
{
  int lado1, lado2, lado3;

  printf ("Digite 3 numeros para comprimento de um triangulo: ");
  scanf ("%i%i%i", &lado1, &lado2, &lado3);

  printf ("\n");

  if (Verificar_Triangulo(lado1, lado2, lado3))
  {
    Verificar_Tipo_Triangulo(lado1, lado2, lado3);
  }
  return 0;
}

//Exercício 16

#include <stdio.h>

int
Desenha_Linha(int x)
{
  int i;
  for(i = 0; i < x; i++)
  {
    printf ("=");
  }
}

int
main()
{
  int quantidade;
  printf ("Digite um numero: ");
  scanf ("%i", &quantidade);

  printf ("\n");

  Desenha_Linha(quantidade);

  return 0;
}

//Exercício 17

#include <stdio.h>

int
Soma_Numeros_Entre(int x, int y)
{
  int i, soma=0;
  for (i = x ; i < y ; i++)
  {
    soma+=i;
  }
return soma;
}

int
main()
{
  int num1, num2, resultado;
  printf ("Digite o primeiro numero: ");
  scanf ("%i", &num1);

  printf ("\n");

  printf ("Digite o segundo numero: ");
  scanf ("%i", &num2);

  printf ("\n");

  printf ("A soma dos numeros existentes entre %i e %i eh igual a: %i", num1, num2, Soma_Numeros_Entre(num1, num2));
  
  return 0;
}

//Exercício 18

#include <stdio.h>

int
Exponeciacao(int x, int y)
{
  int i, resultado=1;
  
  for (i = 0 ; i < y ; i++)
  {
    resultado *= x;
  } 
  return resultado;
}

int 
main()
{
  int num1, num2;
  
  printf ("Digite o primeiro numero: ");
  scanf ("%i", &num1);

  printf ("\n");

  printf ("Digite o segundo numero: ");
  scanf ("%i", &num2);

  printf ("\n");

  printf ("O numero %i elevado a %i eh igual a %i", num1, num2, Exponeciacao(num1, num2));

  return 0;  
}

//Exercício 19

#include <stdio.h>

int
Fatorial(int x)
{
  int i, fat = 1;
  
  for (i = x ; i > 1 ; i--)
  {
    fat *= i;
  }
  return fat;
}

int
main()
{
  int num1;
  
  printf ("Digite um numero: ");
  scanf ("%i", &num1);

  printf ("\n");

  printf ("O fatorial de %i eh %i", num1, Fatorial(num1));

  return 0;
}

//Exercício 20

#include <stdio.h>
#include <math.h>

int
Verifica_Primo(int x)
{
  int i, j, contador = 1, e_primo;
  
  for ( i = 3 ; i < x ; i += 2)
  {
    e_primo=1;
    
    for (j = 3 ; j <= sqrt(x) ; j += 2)
    {
      if (i % j == 0)
      {
        e_primo = 0;
        break;
      }
    }
  if (e_primo == 1)
  {
    contador++;
  }
  }
  return contador;
}

int
main()
{
  int num1;

  printf ("Digite um numero: ");
  scanf ("%i", &num1);

  printf ("\n");

  printf ("A quantidade de numeros primos abaixo de %i eh %i", num1, Verifica_Primo(num1));

  return 0;
}

//Exercício 21

