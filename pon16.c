#include <stdio.h>
/*
    16. Escrever um programa que declara um vetor inteiro com 30 elementos
    na função main. Em seguida, em uma função chamada leitura, ler um
    valor maior que 0 e menor que 1000 para cada posição do vetor.
    Finalmente, em uma função chamada calculo, deve ser impresso o maior e
    o menor valor armazenado no vetor. 
    Não pode ser declarada nenhuma variável global.
*/


int leitura(int *v); void calculo(int *vet);


void main(){
    int vetor[30];
    
    leitura(vetor);
    calculo(vetor);
    
}

int leitura(int *v){
    for(int i=0;i<=29;i++){
        v[i] = i+1;
    }
}

void calculo(int *vet){
    int maior = -99999, menor=99999;
    
    for(int i=0;i<=29;i++){
        if(vet[i] > maior) maior = vet[i];
        if(vet[i] < menor) menor = vet[i];
    }
    printf("Maior = %d\nMenor = %d\n\n",maior, menor);
}