/*
    10. Escrever um procedimento, que inverta a ordem dos elementos de um
    vetor sem usar um vetor auxiliar 
*/
#include <stdio.h>

void inverte(int v[]);

void main(){
    int vetor[5],i;
    
    for(i=1;i<=5;i++){
        printf("Inf %dº numero: ",i);
        scanf("%d", &vetor[i-1]);
    }
    
    inverte(vetor);
}

void inverte(int v[]){
    int aux;
    
    for(int i=0;i<5;i++){
        aux  = v[i];
        v[i] = v[4 - i];
        v[4 - i] = aux;
        printf("\n%dº: %d", i+1,v[i]);
    }
    
}