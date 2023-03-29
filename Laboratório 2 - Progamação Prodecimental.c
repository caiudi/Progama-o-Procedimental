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

#include <stdio.h>
int
main()
{
    int salario, emprestimo;
    
    printf ("Digite o salario");
    scanf ("%i", &salario);
   
    printf ("\n");

    printf ("Digite a prestacao do emprestimo");
    scanf ("%i", &emprestimo);
    
    printf ("\n");

    if (emprestimo>0.2*salario)
    {
        printf ("Emprestimo nao concedido");
        return 0;
    }
    else
    { 
        printf ("Emprestimo concedido");
        return 0;
    }
}
  
//Exercício 10
  
#include <stdio.h>
int 
main()
{
    float altura, peso;
    char sexo;
    printf ("Digite a altura\n");
    scanf ("%f", &altura);

    printf ("\n");

    printf ("Digite o sexo : F ou M \n");
    scanf ("%s", &sexo);

    if (sexo=='M')
    {
        peso = ((72.7*altura) - 58);
        printf ("Seu peso ideal e: %.2f", peso);
        
        return 0;
    }
    else 
    {
       peso = ((62.1*altura) - 44.7);   
       printf ("Seu peso ideal e: %.2f", peso);

       return 0;
    }
}

//Exercício 11
  
#include <stdio.h>
int 
main()
{
    int numero, soma=0;
    printf ("Digite um numero inteiro\n");
    scanf ("%i", &numero);

    printf ("\n");

    if (numero>=0)
    {
        while(numero>0)
        {
            soma=soma+numero%10;
            numero=numero/10;
        }
        printf ("A soma dos numeros e: %i", soma);
        return 0;
    }
    else
    {
        printf ("Numero invalido");
        return 0;
    }
}


//Exercício 12
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int numero, log;

    printf ("Digite um numero inteiro\n");
    scanf ("%i", &numero);

    printf ("\n");

    if (numero>=0)
    {
        log = log10(numero);
        printf ("O logaritimo do numero e: %i", log);
        return 0;
    }
    else
    { 
        printf ("Numero invalido");
        return 0;
    }
}

//Exercício 13
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int p1, p2, p3, media;

    printf ("Digite o valor da primeira prova\n");
    scanf ("%i", &p1);

    printf ("\n");

    printf ("Digite o valor da segunda prova\n");
    scanf ("%i", &p2);

    printf ("\n");

    printf ("Digite o valor da terceira prova\n");
    scanf ("%i", &p3);

    printf ("\n");

    media = (1*p1 + 1*p2 + 3*p3)/5;

    if (media>=60)
    {
        printf ("A media foi de: %i", media);

        printf ("\n");

        printf ("O aluno foi aprovado");
        
        return 0;
    }
    else
    { 
        printf ("A media foi de: %i\n", media);
        
        printf ("\n");
        
        printf ("O aluno foi reprovado");

        return 0;
    }
}

//Exercício 14

#include <stdio.h>
#include <math.h>
int 
main()
{
    int lab, avaliacao, final, media;

    printf ("Digite a nota do trabalho de laboratorio [0 a 10]\n");
    scanf ("%i", &lab);

    printf ("\n");

    printf ("Digite a nota da avaliacao semestral [0 a 10]\n");
    scanf ("%i", &avaliacao);

    printf ("\n");

    printf ("Digite a nota do exame final [0 a 10]\n");
    scanf ("%i", &final);

    printf ("\n");
    
    media = (2*lab+3*avaliacao+5*final)/10;

    if (media>0 && media<2.9)
    {
        printf ("A media foi de: %i", media);

        printf ("\n");

        printf ("O aluno foi reprovado");
        
        return 0;
    }
    if (media>3 && media<4.9)
    {  
        printf ("A media foi de: %i", media);
        
        printf ("\n");

        printf ("O aluno esta de recuperacao");

        return 0;
    }
    if (media>4.9)
    {
         printf ("A media foi de: %i", media);
        
        printf ("\n");

        printf ("O aluno esta aprovado");
    }
}
  
//Exercício 15
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int numero, dia;

    printf ("Digite um numero inteiro [0 a 7]\n");
    scanf ("%i", &numero);

    printf ("\n");

    switch ( numero )
    {
        case 1:
            printf ("Domingo\n"); break;
        case 2:
            printf ("Segunda\n"); break;
        case 3:
            printf ("Terca\n"); break;
        case 4:
            printf ("Quarta\n"); break;
        case 5:
            printf ("Quinta\n"); break;
        case 6:
            printf ("Sexta\n"); break;
        case 7:
            printf ("Sabado\n"); break;
        default:
            printf ("Nao corresponde a um dia"); break;
    } 
    return 0;
}
  
//Exercicio 16
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int numero;

    printf ("Digite um numero inteiro [0 a 12]\n");
    scanf ("%i", &numero);

    printf ("\n");

    switch ( numero )
    {
        case 1:
            printf ("Janeiro\n"); break;
        case 2:
            printf ("Fevereiro\n"); break;
        case 3:
            printf ("Marco\n"); break;
        case 4:
            printf ("Abril\n"); break;
        case 5:
            printf ("Maio\n"); break;
        case 6:
            printf ("Junho\n"); break;
        case 7:
            printf ("Julho\n"); break;
        case 8:
            printf ("Agosto\n"); break;
        case 9:
            printf ("Setembro\n"); break;
        case 10:
            printf ("Outubro\n"); break;
        case 11:
            printf ("Novembro\n"); break;
        case 12:
            printf ("Dezembro\n"); break;
        default:
            printf ("Nao corresponde a um mes"); break;
    } 
    return 0;
}
  
//Exercício 17

#include <stdio.h>
#include <math.h>
int 
main()
{
    int baseM, basem, altura, area1, area2;
    
    printf ("Digite a base maior do trapezio\n");
    scanf ("%i", &baseM);
    
    printf ("\n");

    printf ("Digite a base menor do trapezio\n");
    scanf ("%i", &basem);

    printf ("\n");

    printf ("Digite a altura do trapezio\n");
    scanf ("%i", &altura);

    printf ("\n");

    area1=(baseM+basem)*altura;
    area2= area1/2;

    printf ("A area do trapezio e: %i", area2);

    return 0;
}
  
//Exercicio 18
 
#include <stdio.h>
#include <math.h>
int 
main()
{
    int operacoes, num1, num2;
    
    printf ("Selecione um:\n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
    scanf ("%d", &operacoes);
    
    printf ("\n");

    if (operacoes>0 && operacoes<5)
    { 
        printf ("Digite dois valores");
        scanf ("%i %i", &num1, &num2);
    }
    switch (operacoes)
    {
        case 1: printf ("A Soma dos numeros e: %d\n", num1 + num2); break;
        case 2: printf ("A Diferenca dos numeros e: %d\n", num1 - num2); break;
        case 3: printf ("A Multiplicacao entre os numeros e: %d\n", num1*num2); break;
        case 4: printf ("A Divisao entre os numeros e: %d\n", num1/num2); break;
        default: printf ("Operacao invalida"); break;
    }
}

  
//Exercício 19
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int numero;
    
    printf ("Digite um numero\n");
    scanf ("%i", &numero);
    
    printf ("\n");

    if(numero%3==0)
    {
        printf ("O numero %i e divisivel por 3", numero);
        return 0;
    }
    if(numero%5==0)
    {
        printf ("O numero %i e divisivel por 5", numero);
        return 0;
    }
    if(numero%3==0 && numero%5==0)
    {
        printf ("O numero e divisivel pelos 2 simultaneamente");
        return 0;
    }
}
  
//Exercício 20

#include <stdio.h>
#include <math.h>
int 
main()
{
    int a, b, c;
    
    printf ("Digite tres valores positivos\n");
    scanf ("%i %i %i", &a, &b, &c);

    printf ("\n");

    if( a + b > c && a + c > b && b + c > a)
    {
        if(a == b && a == c )
        { 
        printf ("Os valores fornecidos formam um triangulo equilatero.");
        return 0;
        }
        if(a == b || a == c || b == c)
        { 
        printf ("Os valores fornecidos formam um triangulo isosceles");
        return 0;
        }
        else
        { 
        printf ("Os valores fornecidos formam um triangulo escaleno");
        return 0;
        }
    }
    else
    { 
        printf ("Os valores fornecidos nao formam um triangulo");
        return 0;
    }
}
  
//Exercicio 21
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int numero, num1, num2, soma, diferenca, produto, divisao;
        
    printf ("Escolha uma opcao:\n 1 - Soma de 2 numeros\n 2 - Diferenca entre 2 numeros (maior pelo menor)\n 3 - Produto entre 2 numeros\n 4 - Divisao entre 2 numeros (o denominador nao pode ser 0)\n");
    scanf ("%i", &numero);
        

    printf ("\n");

    switch (numero)
    {  
        case 1: 
          
        printf ("Digite 2 numeros\n");
        scanf ("%i %i", &num1, &num2);

        soma = num1+num2;

        printf ("A soma e igual a: %i", soma); break;
            
        case 2:
            
         printf ("Digite 2 numeros, sendo o primeiro maior que o segundo\n");
         scanf ("%i %i", &num1, &num2);
         if (num1>num2)
         {
            diferenca = num1-num2;
            printf("A diferenca entre os numeros e %i", diferenca);
            return 0;
         }
         else 
         { 
            printf ("Numeros invalidos");
            return 0;
         } break;
        
        case 3:


        printf ("Digite 2 numeros\n");
        scanf ("%i %i", &num1, &num2);

        produto = num1*num2;
        printf ("O Produto entre os numeros e: %i", produto); break;

        case 4:

        printf ("Digite 2 numeros, sendo o segundo diferente de 0\n");
        scanf ("%i %i", &num1, &num2);
        if (num2==0)
        {
            printf ("Numeros invalidos");
            return 0;
        }
        else
        {
            divisao = num1/num2;
            printf ("A divisao entre os numeros e: %i", divisao);
            return 0;
        }
    }
}

//Exercício 22
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int idade, tempo;
    printf ("Digite a idade e o tempo de servico em anos\n");
    scanf ("%i %i", &idade, &tempo);

    printf ("\n");

    if (idade>=65)
    {
        printf ("Aposentadoria valida");
        return 0;
    }
    if (tempo>=30)
    {
        printf ("Aposentadoria valida");
        return 0;
    }
    if (idade>=60 && tempo>=25)
    {
        printf ("Aposentadoria valida");
        return 0;
    }
    else
    {
        printf ("Aposentadoria invalida");
        return 0;
    } 
}
  
//Execício 23
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int ano;
    printf ("Digite um ano\n");
    scanf ("%i", &ano);

    printf ("\n");

    if (ano%400==0)
    {
        printf ("Esse ano e bissexto");
        return 0;
    }
    if (ano%4==0 && ano%100!=0)
    {
        printf ("Esse ano e bissexto");
        return 0;
    }
    else 
    {
        printf ("Esse ano nao e bissexto");
        return 0;
    }
}
 
//Exercício 24

#include <stdio.h>
#include <math.h>
int 
main()
{
    float valor1, valor2;
    int estado;
    printf ("Digite um valor");
    scanf ("%f", &valor1);

    printf ("\n");

    printf ("Selecione um estado:\n 1 - MG\n 2 - SP\n 3 - RJ\n 4 - MS");
    scanf ("%i", &estado);
    
    printf ("\n");
    
    switch (estado)
    {
    case 1:
    valor2 = valor1*1.07;
    printf ("Valor final igual a %.2f", valor2); break;
    case 2:
    valor2 = valor1*1.12;
    printf ("Valor final igual a %.2f", valor2); break;
    case 3:
    valor2 = valor1*1.15;
    printf ("Valor final igual a %.2f", valor2); break;
    case 4:
    valor2 = valor1*1.08;
    printf ("Valor final igual a %.2f", valor2); break;
    default:
    printf ("Estado nao valido");
        break;
    }
    return 0;
}
    
//Exercício 25

#include <stdio.h>
#include <math.h>
int 
main()
{
    float a, x, b, c, delta, raiz1, raiz2;
    printf ("Digite o valor da variavel a, sendo ela diferente de 0\n"); 
    scanf ("%f", &a);

    printf ("\n");

    printf ("Digite o valor da variavel b\n"); 
    scanf ("%f", &b);

    printf ("\n");

    printf ("Digite o valor da variavel c\n"); 
    scanf ("%f", &c);

    printf ("\n");

    printf ("Digite o valor da variavel x\n"); 
    scanf ("%f", &x);

    printf ("\n");
    
    delta = (b*b)-4*a*c;
    
    
    printf ("Sua equacao e: %.0fx^2 + %.0fx + %.0f\n", a, b, c);
    
    if (delta<0)
    {
        printf ("Nao existe raiz");
        return 0;
    }
    if (delta>0)
    {
        raiz1=(-b + sqrt(delta))/(2*a);
        raiz2=(-b - sqrt(delta))/(2*a);
        printf ("As raizes sao %.2f e %.2f", raiz1, raiz2);
    }
    if (delta==0)
    {
        raiz1=(-b + sqrt(delta))/(2*a);
        printf ("A raiz unica e igual a: %.2f", raiz1);
    } 
    else
    {
        printf ("Nao e equacao do segundo grau");
        return 0;
    }
}
  
//Exercicio 26

#include <stdio.h>
#include <math.h>
int 
main()
{
    int distancia, combustivel, KML;

    printf ("Digite uma distancia em KM\n");
    scanf ("%i", &distancia);

    printf ("\n");

    printf ("Digite a quantidade de litros de gasolina consumidos\n");
    scanf ("%i", &combustivel);

    printf ("\n");

    KML = distancia/combustivel;

    if (KML<8)
    {  
        printf ("Venda o carro!");
        return 0;
    }
    if (KML >= 8 && KML<18)
    {
        printf ("Economico!");
        return 0;
    }
    if (KML>14)
    {
        printf ("Super Economico!");
        return 0;
    }
}
  
//Exercicio 27

#include <stdio.h>
#include <math.h>
int 
main()
{
    int idade;
    printf ("Digite a idade\n");
    scanf ("%i", &idade);
    
    printf ("\n");

    if (idade >= 5 && idade <= 7)
    {
        printf ("Categoria Infantil A");
        return 0;
    }
    if (idade >= 8 && idade <= 1)
    {
        printf ("Categoria Infantil B");
        return 0;
    }
    if (idade >= 11 && idade <= 13)
    {
        printf ("Categoria Juvenil A");
        return 0;
    }
    if (idade >= 14 && idade <= 17)
    {
        printf ("Categoria Juvenil B");
        return 0;
    }
    if (idade >= 18)
    {
        printf ("Senior");
        return 0;
    }
    else
    {
        printf ("Idade Invalida");
        return 0;
    }
}
  
//Exercicio 28
  
#include <stdio.h>
#include <math.h>
int 
main()
{
    int x, y, z, medias, mediad1, mediad2;
    printf ("Digite 3 numeros inteiros positivos\n");
    scanf ("%i%i%i", &x, &y, &z);

    printf ("\n");

    printf ("Escolha uma das medias a seguir:\n 1 - Geometrica\n 2 - Ponderada\n 3 - Harmonica\n 4 - Aritmetica\n");
    scanf ("%i", &medias);

    printf ("\n");

    switch (medias)
    {
    case 1:
    {
        mediad1 = x*y*z;
        mediad2 = pow(mediad1, 1.0/3.0);
        printf ("A media geometrica e: %i", mediad2);
        break;
    }
    case 2:
    {
        mediad2 = (1*x)+(2*y)+(3*z)/3;
        printf ("A media ponderada e: %i", mediad2);
        break;
    }
    case 3:
    {
        mediad1 = 1/x + 1/y + 1/z;
        mediad2 = 1/mediad1;
        printf ("A media harmonica e: %i", mediad2);
        break;
    }
    case 4:
    {
        mediad2 = (x+y+z)/2;
        printf ("A media aritmetica e: %i", mediad2);
        break;
    }
    default:
    printf ("Comando invalido"); 
    break;
    }
}
  
//Exercicio 29
  
//Exercicio 30
  
#include <stdio.h>

int main() 
{
  int x, y, z;
  
  printf("Digite tres numeros: ");
  scanf("%i %i %i", &x, &y, &z);
  
  
  if (x <= y && y <= z)
    {
      printf("A ordem crescente: %d %d %d\n", x, y, z);
    }
    if (x <= z && z <= y)
    {
      printf("A ordem crescente: %d %d %d\n", x, z, y);
    }
    if (y <= x && x <= z)
    {
      printf("A ordem crescente: %d %d %d\n", y, x, z);
    }
    if (y <= z && z <= x) 
    {
      printf("A ordem crescente: %d %d %d\n", y, z, x);
    }
    if (z <= x && x <= y) 
    {
      printf("A ordem crescente: %d %d %d\n", z, x, y);
    }
  else
    {
      printf("A ordem crescente: %d %d %d\n", z, y, x);
    }

  return 0;

}
  
//Exercicio 31
  
  

 



  
