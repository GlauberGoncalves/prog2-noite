/*
    5. Escreva uma função potenciaInt(base, expoente) que retorne o valor
    de base expoente . Não use nenhuma das funções da biblioteca matemática.
*/
#include <stdio.h>

int potenciaInt(int,int);

void main(){
    int base, expoente, result;

    printf("\nBase?: ");
    scanf("%d", &base);

    printf("\nExpoente?: ");
    scanf("%d", &expoente);

    result = potenciaInt(base,expoente);
    printf("\nResultado: %d\n\n", result);
}

int potenciaInt(int b, int e){
    int i, result;

    result = b;
    for(i=1; i<e ;i++){
        result *= b; 
    }
    return result;
}