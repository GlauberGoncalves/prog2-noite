#include <stdio.h>
#include <stdlib.h>
/*
    15. Escreva uma função divisão, que retorne a divisão inteira de
    dividendo por divisor e armazena no parâmetro resto, passado por
    referência o resto da divisão. Construa um programa utilizando esta
    função. 

*/


int divisao(int *var){
    int dividendo,divisor;
    
    printf("\nDigite o dividendo ");
    scanf("%d", &dividendo);
    
    printf("\nDigite o divisor ");
    scanf("%d", &divisor);    
    
    var = dividendo % divisor;
    
    return 0;
}

void main(){
    int resto;
    
    divisao(resto);
    printf("O resto é %d", resto);
}


