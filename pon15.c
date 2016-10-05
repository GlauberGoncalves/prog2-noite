#include <stdio.h>
/*
    15. Escrever um programa contendo uma função int divisao 
    (int dividendo, int divisor, int *resto), que retorna a divisão
    inteira de dividendo por divisor e armazena no parâmetro resto,
    passado por referência, o resto da divisão.

*/


int divisao(int dividendo, int divisor, int *resto);

void main(){

    int resultado;
    printf("\n\n10 / 2 = ");
    divisao(10,2,&resultado);
    printf("%d",resultado);
}

int divisao(int dividendo, int divisor, int *resto){
    *resto = dividendo/divisor;
    return 0;
}