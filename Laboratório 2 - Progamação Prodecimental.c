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
    printf ("A raiz do numero e: %.2f", raiz);
    
    printf ("\n");

    aoquadrado = pow(x,2);
    printf ("O numero ao quadrado e: %.2f", aoquadrado); 
  }
  else
  {
   return 0;
  }
}

//Exercício 5
 
#include <stdio.h>
#include <math.h>
int
main()
{ 
  int x;
  
  printf ("Digite um numero inteiro");
  scanf ("%i", &x);
  
  printf ("\n");
  if(x%2==0){
    
    printf("O numero %i e par", x);
    return 0;
    
  }
  else{
    
    printf("O numero %i e impar", x);
    return 0;
    
  }
}

//Exercicio 6
  
#include <stdio.h>
#include <math.h>
int
main()
{ 
  
  int x, y, diferenca;
  
  printf("Digite um numero inteiro");
  scanf("%i", &x);

  printf("\n");
  
  printf("Digite um numero inteiro");
  scanf("%i",&y);
  
  printf("\n");
  
  if(x>y)
    {
      printf("O numero %i e o maior", x);
      
      printf("\n");
      
      diferenca = x - y;

      printf("A diferenca entre os dois e %i", diferenca);
      
      return 0;
    }
    else
    {
      printf("O numero %i e o maior", y);
      
      printf("\n");
      
      diferenca = y - x;

      printf("A diferenca entre os dois e %i", diferenca);
      
      return 0;
    }
}
  
//Exercicio 7
 
#include <stdio.h>
#include <math.h>
int
main()
{ 
  
  int x, y, diferenca;
  
  printf("Digite um numero inteiro");
  scanf("%i", &x);

  printf("\n");
  
  printf("Digite um numero inteiro");
  scanf("%i",&y);
  
  printf("\n");
  
  if(x>y)
    {
      printf("O numero %i e o maior", x);
    }
  if(y>x)
    {
      printf("O numero %i e o maior", y);
      return 0;
    }
  if(x==y)
    {
      printf ("Os dois numeros %i %i sao iguais", x, y);
      return 0;
    }
}

//Exercicio 8
  
  #include <stdio.h>
#include <math.h>
int
main()
{ 
  
  float x, y, media;
  
  printf("Digite a nota 1\n");
  scanf("%f", &x);

  printf("\n");
  
  printf("Digite a nota 2\n");
  scanf("%f",&y);
  
  printf("\n");
  
  if((x>=0)&&(x<=10)&&(y>=0)&&(y<=10))
  {
    media = (x+y)/2;
    printf("A media e %.2f", media);
    return 0;
  }
  else
  {
    printf("Os valores %.2f %.2f sao invalidos", x, y);
    return 0;
  }
}
  
//Exercicio 9
  
  
  

  


  
