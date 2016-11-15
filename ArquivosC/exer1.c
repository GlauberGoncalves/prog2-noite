/*
1) Faça um programa que leia uma seqüência de 100 nomes. 
Cada nome lido deverá ter no máximo
40 caracteres. Armazene esta seqüência de nomes em um arquivo chamado nomes.txt.
*/
#include <stdio.h>
#include <string.h>



void main(){
    FILE *arquivo;
    char nome[40];
    
    /*strcpy(nome,"glauber");*/
    
    arquivo = fopen("nomes.txt","w");
    
    if(arquivo == NULL){
        printf("Não foi possivel abrir o arquivo!\n");
    }
    else{
        
        for(int i=0; i<10;i++){
                printf("Informe o %dº nome: ", i+1);
                scanf("%s", nome);
                fprintf(arquivo,"%s \n" , nome);
            }
    }
    
    fclose(arquivo);
}