//Exercício 1

#include <stdio.h> 
int main(){
    int x;
    scanf("%d", &x);
    printf("Valor de x: %d", x);
    return 0;
}

//Exercício 2

#include <stdio.h> 
int main(){
    float x;
    scanf("%f", &x);
    printf("Valor de x: %f", x);
    return 0;
}
 
//Exercício 3

#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    int S;
    printf ("Digite o primeiro valor");
    scanf ("%i", &x);
    printf ("Digite o segundo valor");
    scanf ("%i", &y);
    printf ("Digite o terceiro valor");
    scanf ("%i", &z);
    S = x + y + z;
    printf ("O valor da Soma e %i", S);
    return 0;
}

//Exercício 4

#include <stdio.h>
int main(){
    float x;
    float y;
    printf ("Digite o valor para calcular o quadrado do mesmo.");
    scanf ("%f", &x);
    y = x * x;
    printf ("O valor do quadrado e %f", y);
    return 0;
}

//Exercício 5

#include <stdio.h>
int main(){
    float x;
    float y;
    printf ("Digite o valor para calcular a quinta parte do mesmo");
    scanf ("%f",&x);
    y = x/5;
    printf ("O valor da quinta parte e %f", y);
    return 0;
}

//Exercício 6

#include <stdio.h>
int main(){
    float c;
    float f;
    printf ("Digite o valor em Celcius para converte lo em Fahrenheit");
    scanf ("%f", &c);
    f = c*(9.0/5.0)+32.0;
    printf ("%f", f);
    return 0;
}

//Exercício 7

#include <stdio.h>
int main(){
    float c;
    float f;
    printf ("Digite o valor em Fahrenheit para converte lo em Celcius");
    scanf ("%f", &f);
    c = 5.0*(f- 32.0)/9.0;
    printf ("%f", c);
    return 0;
}

//Exercício 8

#include <stdio.h>
int main(){
    float c;
    float k;
    printf ("Digite o valor em Kelvin para converte lo em Celcius");
    scanf ("%f", &k);
    c = k-273.15;
    printf ("%f", c);
    return 0;
}

//Exercício 9

#include <stdio.h>
int main(){
    float c;
    float k;
    printf ("Digite o valor em Celcius para converte lo em Kelvin");
    scanf ("%f", &c);
    k = c + 273.15;
    printf ("%f", k);
    return 0;
}

//Exercício 10

#include <stdio.h>
int main(){
    float k;
    float m;
    printf ("Digite a velocidade em km/h para converte-la em m/s");
    scanf ("%f", &k);
    m = k/3.6;
    printf ("%f", m);
    return 0;
 }

//Exercício 11

#include <stdio.h>
int main(){
   float k;
   float m;
   printf ("Digite a velocidade em m/s para converte-la em km/h");
   scanf ("%f", &m);
   k = m*3.6;
   printf ("%f", k);
   return 0;
}

//Exercício 12

#include <stdio.h>
int main(){
   float k;
   float m;
   printf ("Digite um valor em milhas para converte-lo em quilometros");
   scanf ("%f", &m);
   k = 1.61*m;
   printf ("%f", k);
   return 0;
}

//Exercício 13

#include <stdio.h>
int main(){
   float k;
   float m;
   printf ("Digite um valor em quilometros para converte-lo em milhas");
   scanf ("%f", &k);
   m = k/1.61;
   printf ("%f", m);
   return 0;
}

//Exercício 14
 
#include <stdio.h>
#define PI 3,141592
int main(){
   float g;
   float r;
   printf ("Digite um valor em graus para converte-lo em radianos");
   scanf ("%f", &g);
   r = g*PI/180;
   printf ("%f", r);
   return 0;
}

//Exercício 15

#include <stdio.h>
#define PI 3,141592
int main(){
   float g;
   float r;
   printf ("Digite um valor em radianos para converte-lo em graus");
   scanf ("%f", &r);
  g = r*180/PI;
   printf ("%f", g);
   return 0;
}

//Exercício 16

#include <stdio.h>
int main(){
   float c;
   float p;
   printf ("Digite um valor em polegadas para converte-lo em centimetros");
   scanf ("%f", &p);
   c = p*2.54;
   printf ("%f", c);
   return 0;
}

//Exercício 17

#include <stdio.h>
int main(){
   float c;
   float p;
   printf ("Digite um valor em centimetros para converte-lo em polegadas");
   scanf ("%f", &c);
   p = c/2.54;
   printf ("%f", p);
   return 0;
}

//Exercício 18

#include <stdio.h>
int main(){
   float l;
   float m;
   printf ("Digite um valor em metros cúbicos para converte-lo em litros");
   scanf ("%f", &m);
   l = 1000*m;
   printf ("%f", l);
   return 0;
}

//Exercício 19

#include <stdio.h>
int main(){
   float l;
   float m;
   printf ("Digite um valor em litros para converte-lo em metros cubicos");
   scanf ("%f", &l);
   m = l /1000;
   printf ("%f", m);
   return 0;
}

//Exercício 20

#include <stdio.h>
int main(){
   float l;
   float k;
   printf ("Digite um valor em quilogramas para converte-lo em libras");
   scanf ("%f", &k);
   l = k/0.45;
   printf ("%f", l);
   return 0;
}

//Exercício 21

#include <stdio.h>
int main(){
   float l;
   float k;
   printf ("Digite um valor em libras para converte-lo em quilogramas");
   scanf ("%f", &l);
   k = l*0.45;
   printf ("%f", k);
   return 0;
}

//Exercício 22

#include <stdio.h>
int main(){
   float j;
   float m;
   printf ("Digite um valor em jardas para converte-lo em metros");
   scanf ("%f", &j);
   m = 0.91*j;
   printf ("%f", m);
   return 0;
}

//Exercício 23

#include <stdio.h>
int main(){
   float j;
   float m;
   printf ("Digite um valor em metros para converte-lo em jardas");
   scanf ("%f", &m);
   j = m/0.91;
   printf ("%f", j);
   return 0;
}

//Exercício 24

#include <stdio.h>
int main(){
   float a;
   float m;
   printf ("Digite um valor em metros quadrados para converte-lo em acres");
   scanf ("%f", &m);
   a = m*0.000247;
   printf ("%f", a);
   return 0;
}

//Exercício 25

#include <stdio.h>
int main(){
   float a;
   float m;
   printf ("Digite um valor em acres para converte-lo em metros quadrados");
   scanf ("%f", &a);
   m = a*4048.58;
   printf ("%f", m);
   return 0;
}

//Exercício 26

#include <stdio.h>
int main(){
   float h;
   float m;
   printf ("Digite um valor em metros quadrados para converte-lo em hectares");
   scanf ("%f", &m);
   h = m*0.0001;
   printf ("%f", h);
   return 0;
}

//Exercício 27

#include <stdio.h>
int main(){
   float h;
   float m;
   printf ("Digite um valor em hectares para converte-lo em metros quadrados");
   scanf ("%f", &h);
   m = h*10000;
   printf ("%f", m);
   return 0;
}

//Exercício 28

#include <stdio.h> 
int main(){   
    float x;
    float y;
    float z;
    float S;
    printf ("Digite tres valores para calcular a soma do quadrado dos mesmos");
    scanf ("%f %f %f", &x, &y, &z);
    S = (x*x)+(y*y)+(z*z);
    printf ("%f", S);
    return 0;
}

 
//Exercício 29

#include <stdio.h> 
int main(){   
float w;
float x;
float y;
float z;
float M;
printf ("Digite quatro notas para calcular a media aritimetica das mesmas");
scanf ("%f %f %f %f", &w, &x, &y, &z);
M = (w+x+y+z)/2;
printf ("%f", M);
return 0;
}

//Exercício 30

#include <stdio.h>
int main(){
  float r;
  float d;
  float C;
  printf ("Digite um valor em reais para converte lo em dolares");
  scanf ("%f", &r);
  printf ("Digite a cotacao atual do dolar no Brasil");
  scanf ("%f", &C);
  d = r/C;
  printf ("%f", d);
   }

//Exercício 31

#include <stdio.h> 
int main(){
   int x;
   int a;
   int s;
   printf ("Digite um numero para mostrar o seu sucessor e seu antecessor");
   scanf ("%d", &x);
   a = x - 1;
   s = x + 1;
   printf ("%d ", a);
   printf ("%d", s);
   return 0;
    }

//Exercício 32

#include <stdio.h>
int main(){
 int x;
 int antecessor; 
 int sucessor;
 int SOMA;
 printf ("Digite um valor para calcular a soma do sucessor de seu triplo com o antecessor de seu dobro");
 scanf ("%i", &x);
sucessor = x*3 + 1;
antecessor = x*2 -1;
SOMA = sucessor + antecessor;
printf ("%i", SOMA);
    return 0;
}

//Exercício 33

#include <stdio.h>
#include <math.h>
int main(){
   float x;
   float a;
   printf ("Digite o valor do lado de um quadrado para calcular a sua area");
   scanf ("%f", &x);
   a = pow(x,2);
   printf ("%f", a);
    return 0;
    }

//Exercício 34 

#include <stdio.h>
#define PI 3.141592
#include <math.h>
int main(){
   float r, a;
   printf ("Digite o valor do raio do circulo para calcular a sua area");
   scanf ("%f", &r);
   a = PI*pow(r,2);
   printf ("%f", a);
   return 0;
    }

//Exercício 35

#include <stdio.h>
#include <math.h>
int main(){
   float a, b, h;
   printf ("Digite o valor de dois catetos para calcular a hipotenusa de um triangulo retangulo");
   scanf ("%f %f", &a, &b);
   h = sqrt(pow(a,2) + pow(b,2));
   printf ("%f", h);
   return 0;
    }

//Exercício 36

#include <stdio.h>
#define PI 3.141592
#include <math.h>
int main(){
   float h, r, v;
   printf ("Digite a altura e o raio de um cilindro circular para calcular o seu volume");
   scanf ("%f %f", &h, &r);
   v = PI*pow(r,2)*h;
   printf ("%f", v);
   return 0;
     }

//Exercício 37

#include <stdio.h>
#include <math.h>
int main(){
   float v, v2;
   printf ("Digite o valor do produto para mostra-lo com o desconto de 12 por cento");
   scanf ("%f", &v);
   v2 = v*0.88;
   printf ("%f", v2);
   return 0;
     }
   
//Exercício 38

#include <stdio.h>
int main(){
   float v, a;
   printf ("Digite o valor do salario para mostra lo com aumento de 25 por cento");
   scanf ("%f", &v);
   a = v*1.25;
   printf ("%f", a);
   return 0;
     }

//Exercício 39

#include <stdio.h>
int main(){
   float imp = 780.000, v1, v2, v3;
   v1 = 0.46*imp;
   v2 = 0.32*imp;
   v3 = 0.22*imp;
   printf ("primeiro lugar = %f", v1);
   printf ("segundo lugar = %f", v2);
   printf ("terceiro lugar = %f", v3);
   return 0;
    }

//Exercício 40

#include <stdio.h>
int main(){
   float dias, total, ql;
   printf ("Digite o numero de dias trabalhados pelo encanador");
   scanf ("%f", &dias);
   total = dias*30;
   ql = total*0.92;
   printf ("%f", ql);
   return 0;
     }
   
//Exercício 41

#include <stdio.h>
int main(){
   float valor, trabalhado, total1, total2;
   printf ("Digite o valor da hora de trabalho e as horas trabalhadas.");
   scanf ("%f %f", &valor, &trabalhado);
   total1 = valor*trabalhado;
   total2 = total1*1.10;
   printf ("%f", total2);
   return 0;
}

//Exercício 42

#include <stdio.h>
int main(){
   float salariob, total1, total2;
   printf ("Digite o valor do salario base.");
   scanf ("%f", &salariob);
   total1 = salariob*1.05;
   total2 = total1*0.93;
   printf ("%f", total2);
   return 0;
}

//Exercício 43

#include <stdio.h>
int main(){
   float valort, desconto, parcela, comissao1, comissao2;
   printf ("Digite um valor");
   scanf ("%f", &valort);
   desconto = valort*0.90;
   printf ("com desconto = %f \n", desconto);
   parcela = valort/3;
   printf ("parcelamento sem juros = %f \n", parcela);
   comissao1 = desconto*0.05;
   printf ("valor da comissao a vista = %f \n", comissao1);
   comissao2 = valort*0.05;
   printf ("valor da comissao parcelado = %f \n", comissao2);
   return 0;
}
    
//Exercício 44 

#include <stdio.h>
int main(){
    float degraus, objetivo, resultado;
   printf ("Digite o valor da altura do degraus e a altura que se deseja alcancar");
   scanf ("%f %f", &degraus, &objetivo);
   resultado = objetivo/degraus;
   printf ("numero de degraus = %f", resultado);
   return 0;
}

//Exercício 45

#include <stdio.h>
int main(){
   char letra, LETRA;
   printf ("Digite uma letra MAIUSCULA");
   scanf ("%c", &LETRA);
   letra = LETRA + 32;
   printf ("%c", letra);
   return 0;
}

//Exercício 46

#include <stdio.h>
#include <stdlib.h>
int 
main()
{
   int numero, x, y, z;
   printf ("Digite um numero inteiro de 3 digitos");
   scanf ("%i", &numero);
   x = numero%10;
   numero = numero/10;
   y = numero%10;
   numero = numero/10;
   z = numero%10;
   numero = numero/10;
   printf ("%i%i%i", x, y, z);
   return 0;
}

//Exercício 47

#include <stdio.h>
#include <stdlib.h>
int 
main()
{
   int numero, milhar, centena, dezena, unidade;
   printf ("Digite um numero inteiro de 4 digitos");
   scanf ("%i", &numero);
   milhar=numero/1000;
   centena=numero/100-10*milhar;
   dezena=numero/10-100*milhar-10*centena;
   unidade=numero/1-1000*milhar-100*centena-10*dezena;
   printf ("%i\n%i\n%i\n%i\n", milhar, centena, dezena, unidade);
   return 0;
}

//Exercício 48

#include <stdio.h>
#include <stdlib.h>
int 
main()
{
   int entrada, h, m, s, resto;
   printf ("Digite uma quantidade de segundos");
   scanf ("%i", &entrada);
   h = entrada/3600;
   resto = entrada%3600;
   m = resto/60;
   s = resto%60;
   printf ("horas = %i, minutos = %i, segundos = %i", h, m, s);
   return 0;
 }


//Exercício 49

#include <stdio.h>
int main(){ 
int h1, m1, s1, h2, m2, s2, h3, m3, s3, tempo, duracao;
    printf("Digite as horas iniciais");
    scanf("%i", &h1);
    printf("Digite os minutos iniciais:");
    scanf("%i", &m1);
    printf("Digite os segundos de iniciais:");
    scanf("%i", &s1);
    printf("Digite a duracao do experimento em segundos:");
    scanf("%i", &duracao);
    tempo=duracao%3600; 
    h2=duracao/3600; 
    m2=tempo/60; 
    s2=tempo%60; 
    s3=(s2+s1)%60;
    m3=(m2+m1+(s2+s1)/60)%60;
    h3=(h2+h1+(m2+m1+(s2+s1)/60)/60)%24;
    printf("O experimento acabou as %i %i %i", h3, m3, s3);
    return 0;
}

//Exercício 50

#include <stdio.h>
#include <stdlib.h>
int 
main()
{
   int idade, ano1, ano2;
   printf ("Digite a sua idade e o ano atual");
   scanf ("%i %i", &idade, &ano1);
   ano2 = ano1-idade;
   printf ("Seu ano de nascimento e = %i", ano2);
   return 0;
}

//Exercício 51

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int 
main()
{
   float d, x, y;
   printf ("Digite o valor de x e y");
   scanf ("%f %f", &x, &y);
   d = sqrt(pow(x,2)+pow(y,2));
   printf ("A dista2]ncia e = %f", d);
   return 0;
}

//Exercício 52

#include <stdio.h>
#include <stdlib.h>
int 
main()
{
   float inv1, inv2, inv3, invt, premiot, premio1, premio2, premio3, x, y, z;
   printf ("Digite o investimento do primeiro apostador");
   scanf ("%f", &inv1);
   printf ("Digite o investimento do segundo apostador");
   scanf ("%f", &inv2);
   printf ("Digite o investimento do terceiro apostador");
   scanf ("%f", &inv3);
   printf ("Digite o valor do premio");
   scanf ("%f", &premiot);
   invt = inv1 + inv2 + inv3;
   x = inv1/invt;
   y = inv2/invt;
   z = inv3/invt;
   premio1 = x*premiot;
   premio2 = y*premiot;
   premio3 = z*premiot;
   printf ("%f %f %f", premio1, premio2, premio3);
   return 0;
 }


//Exercício 53

#include <stdio.h>
#include <stdlib.h>
int 
main()
{
   float l, c, tela, p;
   printf ("Digite a largura do terreno");
   scanf ("%f", &l);
   printf ("Digite o comprimento do terreno");
   scanf ("%f", &c);
   printf ("Digite o preço do metro de tela");
   scanf ("%f", &p);
   tela = l*c*p;
   printf ("&f", tela);
   return 0;
}



