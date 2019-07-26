#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>>

#define PI 3.14159265

int main()
{
setlocale(LC_ALL, "Portuguese");

   float adicao, sub, multi, div, potencia, raiz, resultado;
   float num1 = 0, num2 = 0, fat, n;
   char op = '0';
   //int fat, n;

   do
   {
       system("color 1E");

       printf("\n\t\t==========CALCULADORA 2.0==========\n\n");

       printf("(1) somar \n");
       printf("(2) subtrair \n");
       printf("(3) multiplicar \n");
       printf("(4) dividir \n");
       printf("(5) Potenciação \n");
       printf("(6) Raiz Quadrada \n");
       printf("(7) Fatorial \n");
       printf("(8) Cosseno \n");
       printf("(9) Seno \n");
       printf("(0) Sair \n");

       printf("\nInforme a operação: \n\t");
       op = getche();

    //if(op!= '7' && op!='5' && op!='6' && op!='0' && op!= '8' && op!= '9')
    if(op>'0' && op<='4')
     {
         printf("\nDigite o primeiro número (use APENAS vírgula): \n\t");
         scanf("%f", &num1);

         printf("\nDigite o segundo número (use APENAS vírgula): \n\t");
         scanf("%f", &num2);

       if(op=='1')
       {
          adicao = num1 + num2;
          printf("\nO resultado da soma é: %f \n", adicao);
       }

       else if(op=='2')
       {
          sub = num1-num2;
          printf("\nO resultado da subtração é: %f \n", sub);
       }

       else if(op=='3')
       {
          multi = num1 * num2;
          printf("\nO resultado da multiplicação é: %f \n", multi);
       }

       else if(op=='4')
       {
          div = num1 / num2;

          if(num2 == 0)
          {
              printf("\nImpossível dividir por zero!");
          }
          else if(num1 == 0)
          {
              printf("\nO resultado da divisão é: 0 \n");
          }
          else
          {
               printf("\nO resultado da divisão é: %f \n", div);
          }
       }
    }

    //__________________________________________________________________________________________//

       else if(op=='5')
        {
          printf("\nInforme o valor da base: \n");
          scanf("%f", &num1);
          printf("\nInforme o valor do expoente: \n");
          scanf("%f", &num2);

          potencia = pow(num1, num2);

          printf("\nO resultado da potenciação é: %f \n", potencia);
       }

       else if(op=='6')
        {
          printf("\nInforme o valor: \n");
          scanf("%f", &num1);

          raiz = sqrt(num1);

          printf("\nA raiz quadrada de %f é: %f \n", num1, raiz);
        }

       else if(op=='7')
       {
          printf("\nInforme o valor que quer calcular o fatorial \n");
          scanf("%f", &n);

          for(fat=1; n>1; n = n-1)
          {
            fat = fat * n;
          }
          printf("\nFatorial calculado: %f \n", fat);
       }

       else if(op=='8')
       {
           printf("\n Informe o valor: \n");
           scanf("%f", &num1);

           resultado = cos(num1 * PI / 180);

           printf("\n O cosseno de %f é: %f \n", num1, resultado);
       }

        else if(op=='9')
       {
           printf("\n Informe o valor: \n");
           scanf("%f", &num1);

           resultado = sin(num1 * PI / 180);

           printf("\n O seno de %f é: %f \n", num1, resultado);
       }

       else if(op=='0')
       {
        exit(0);
       }
   }while(op!='0');
    return 0;
}
