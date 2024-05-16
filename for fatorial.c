/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int fatorial, resultado;
    resultado = 1;
    
    printf("Digite um numero: \n");
    scanf("%i", &fatorial);
    
    
    for( ;fatorial >= 1; fatorial --)
    {
        resultado = resultado * fatorial;
        
    }

        printf("Resultado:%i", resultado);
}

