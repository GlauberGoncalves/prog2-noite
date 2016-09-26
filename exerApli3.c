/*
    Faça um programa que preencha uma matriz M(3x3),
    Calcule e mostre a matriz L, resultante da multiplicação dos
    elementos de M pelo seu maior elemento.
*/
#include <stdio.h>

void main(){
    int m[3][3], l[3][3], maior, cont;
    maior = -99999;
    cont = 0;
    // preenche matriz m
        for(int i=0; i<3;i++)
            for(int j=0; j<3;j++){
                cont += 1;
                m[i][j] = cont ;
                
                if(cont > maior) 
                    maior = cont;
                
            }

        for(int i=0; i<3;i++){
            printf("\n");
            for(int j=0; j<3;j++){
                printf("%d ",m[i][j]);
            }
        }
        
        printf("\n\nMaior numero é o %d \n", maior);
        
        for(int i=0; i<3;i++){
            printf("\n");
            for(int j=0; j<3;j++){
                l[i][j] = m[i][j] * maior;
                printf("%d ",l[i][j]);
            }
        }
}