/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float quantidadealuno, pesoaluno, soma, laco, media;
    laco = 1;
    
    printf("Digite a quantidade de alunos: \n");
    scanf("%f", &quantidadealuno);
    
    while(quantidadealuno >= laco)
    {
        printf(" Digite o peso do aluno: \n");
        scanf("%f", &pesoaluno);
        
        soma += pesoaluno;
        laco++;
        
    }
     media = soma / quantidadealuno;
     
     printf("A media é: %.2f", media);
    
}

