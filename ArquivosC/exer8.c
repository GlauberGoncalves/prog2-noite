/*
8) Escreva um programa que abra um arquivo texto e conte o número de caracteres
presentes nele. Imprima o número de caracteres na tela.
*/

#include <stdio.h>

void main(){
    FILE *arquivo;
    char access,ch;
    int cont;
    
    arquivo = fopen("arq8.txt","r");
    
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo ");
    }else{
        access = fscanf(arquivo,"%c", ch);
        while(access != EOF){
            cont++;
            access = fscanf(arquivo,"%c", ch);  
        }
        printf("\nTotal de caracteres: %d\n", cont);
    }
    
    fclose(arquivo);
}