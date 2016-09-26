#include <stdio.h>

void main(){
    int vetor[7],i, soma, aux, entrou;
    soma = 0; entrou = 0;

    for(i=0;i<=6;i++){
        printf("Digite o %dº numero ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]%2 == 1){
            soma += vetor[i];
        }
    }
    
    printf("A soma dos impares é %d", soma);
    printf("\n\n");
    
    // ordenar
    
    do{
        entrou = 0;
        for(i=0;i<6;i++){
            if(vetor[i] < vetor[i+1]){
               aux = vetor[i];
               vetor[i] = vetor[i+1];
               vetor[i+1] = aux;
               entrou = 1;
            }
        }
    }while(entrou);    
       
        for(i=0;i<7;i++){
            printf("%d\n",vetor[i]);
        }
        
        
}

