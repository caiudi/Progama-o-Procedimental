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



    
