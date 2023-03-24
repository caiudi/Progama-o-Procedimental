//Exercício 1

#include <stdio.h>

int
main()
{ 
  int x, y;
  
  printf ("Digite o primeiro numero:");
  scanf ("%i", &x);
  
  printf ("\n");
  
  printf ("Digite o segundo numero");
  scanf ("%i", &y);
  
  printf("\n");
  
  if(x>y){ 
  printf ("O primeiro numero e maior que o segundo");
    return 0;
  }
  else{
    printf ("O segundo numero e maior que o primeiro");
    return 0; 
  }
  
  //Exercício 2
  
  #include <stdio.h>
#include <math.h>
int
main()
{ 
  float x, raiz;
  
  printf ("Digite um numero real");
  scanf ("%f", &x);
  
  printf ("\n");
  
  if(x>=0)
  {
    raiz = sqrt(x);
    printf("A raiz do numero e %.2f", raiz);
    return 0;
  }
  else
  {
    printf("O numero e invalido");
    return 0;
  }

  //Exercício 3
  
  #include <stdio.h>
#include <math.h>
int
main()
{ 
  float x, raiz, aoquadrado;
  
  printf ("Digite um numero real");
  scanf ("%f", &x);
  
  printf ("\n");
  if(x>=0)
    
  {
    raiz = sqrt(x);
    printf("A raiz do numero e %.2f", raiz);
    return 0;
  }
  else
  {
    aoquadrado = pow(x,2);
    printf("O numero ao quadrado e %.2f", aoquadrado);
    return 0;
  }

//Exercício 4
  
  
