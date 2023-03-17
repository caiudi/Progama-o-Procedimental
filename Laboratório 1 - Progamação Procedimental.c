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
}

//Exercício 33

#include <stdio.h>
int main(){
   float x;
   float a;
   printf ("Digite o valor do lado de um quadrado para calcular a sua area");
   scanf ("%f", &x);
   a = x*x;
   printf ("%f", a);
    }

//Exercício 34 

#include <stdio.h>
#include <math.h>
int main(){
   float x;
   float a;
   printf ("Digite o valor do lado de um quadrado para calcular a sua area");
   scanf ("%f", &x);
   a = pow(x,2);
   printf ("%f", a);
    }

//Exercício 35



