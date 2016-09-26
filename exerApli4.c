/*
    Faça um programa que leia uma matriz 4x4, e mostre a media
    aritmetica da diagonal secundária;
*/
#include <stdio.h>

void main(){
    int i,j, matriz[4][4], cont = 0, media;
    
    for(i=0;i<4;i++){
         printf("\n");
         for(j=0;j<4;j++){
            cont += 1;
            matriz[i][j] = cont;
            printf("%d\t", matriz[i][j]);
         }  
    }
    
    media = (matriz[0][3]+matriz[1][2]+matriz[2][1]+matriz[3][0])/4;
    
    printf("\n\nMedia: %d", media);
}