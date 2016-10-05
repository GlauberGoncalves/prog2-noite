#include <stdio.h>
/*
    17. Faça um programa que declara e carrega um vetor de 20 elementos
    inteiros na função main. Em seguida exibir seu conteúdo na exibe,
    seguindo o seguinte: se a soma dos valores for um número par, mostrar
    o vetor a partir do primeiro elemento até o último, caso contrário,
    mostrar o vetor a partir do último elemento até o primeiro.
    O programa não pode utilizar nenhuma variável global.
*/

void exibe(int *v){
    int soma;
    soma = 0;
    
    for(int i=0;i<20;i++){
        soma = soma + v[i];
    }
    printf("\n\nsoma = %d\n\n", soma);
    //se for impar
    if(soma%2){
        for(int i=19;i>=0;i--){
            printf("\n%d", v[i]);
        }
    }
    else{//se for par
        for(int i=0;i<20;i++)
        printf("\n%d", v[i]);
    }
}

void main(){
    int vetor[20];
    
    for(int i=0; i<20; i++){
        vetor[i] = i*2;
    }
    
    exibe(vetor);
    
}




