/*
2) Faça um programa que leia o arquivo nomes.txt,
gerado no exercício 1 e exiba-os na tela
*/
#include <stdio.h>
#include <string.h>



void main(){
    FILE *arquivo;
    char nome[40];
    char var_aux;
    int indice;
    
    /*strcpy(nome,"glauber");*/
    
    arquivo = fopen("nomes.txt","r");
    
    if(arquivo == NULL){
        printf("Não foi possivel ler arquivo!\n");
    }
    else{
       var_aux = fscanf(arquivo, "%s", nome);
       
        while(var_aux != EOF){
            indice++;
            printf("%dº Nome: %s \n", indice, nome);
         
         var_aux = fscanf(arquivo, "%s", nome);    
        } 
       
    }
    
    fclose(arquivo);
}