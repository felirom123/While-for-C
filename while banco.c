/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main()
{
   int controle;
   bool finalizou = false;
   float saldo;
   saldo = 0;
   
   printf("1 - Consulta.\n");
   printf("2 - Saque.\n");
   printf("3 - Deposito.\n");
   printf("4 - Sair.\n");
   
   
   
   while(finalizou == false)
   {    
            printf("Digite uma das opçoes:\n");
            scanf("%i", &controle);
           switch(controle)
           {
            case 1:
                printf("Seu saldo é: R$ %.2f \n", saldo);
            break;
           
            case 2:
                float saque;
                printf("Digite o valor do saque:");
                scanf("%f", &saque);
                saldo = saldo - saque;
                 printf("Saldo atual: R$ %.2f \n", saldo);
            break;
           
            case 3:
                float deposito;
                 printf("Digite o valor do deposito:\n");
                scanf("%f", &deposito);
                saldo = saldo + deposito;
                 printf("Saldo atual:R$ %.2f \n", saldo);
            break;
           
            case 4:
                printf("Volte Sempre!");
                finalizou = true;
            break;
            
            default:
                printf("Opcao invalida.\n");
                break;
           }
           
          
        
   }
   

   
}



