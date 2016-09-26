/*
    11. Faça um procedimento que carregue um vetor com 80 posições e
    encontre o maior e menor valor. Após isto, o procedimento deverá trocar
    o maior valor com a primeira posição e o menor valor com a última
    posição.
*/
#include <stdio.h>

void procedimento(void);

void main(){
    
    procedimento();
    
}

void procedimento(){
    int i, vetor[80], menor[2], maior[2];
    
    menor[0] =  99999;
    maior[0] = -99999;
    
    for(i=0;i<80;i++){
        vetor[i] = i * 10;
        
        if(menor[0] > vetor[i]){
            menor[0] = vetor[i];
            menor[1] = i;
        }
        
        if(maior[0] < vetor[i]){
            maior[0] = vetor[i];
            maior[1] = i;
        }
    }
    
    
    
}