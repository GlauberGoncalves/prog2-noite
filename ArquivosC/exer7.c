/*
7) A cifra de Cesar é uma forma de criptografia antiga, onde cada letra de uma
determinada mensagem e trocada pela letra que a sucede em 3 posições. Por
exemplo, a palavra ajuda seria transformada em dmxgd. Escreva uma função que
leia um arquivo texto e escreva a cifra de Cesar correspondente em outro
arquivo texto.
*/

#include <stdio.h>

void main(){
    FILE *arquivo1,*arquivo2;
    char acesso, letra,cifra;
    
    
    arquivo1 = fopen("arq7-a.txt","r");
    arquivo2 = fopen("cifra.txt","w");
    
    if(arquivo1 == NULL && arquivo2 == NULL){
        printf("\nO arquivo não pode ser aberto");
    }else{
        acesso = fscanf(arquivo1,"%c", &letra);
        
        while(acesso != EOF){
           if(letra == ' ')
              cifra = letra;
           else cifra = letra + 3;  
            
            fprintf(arquivo2,"%c", cifra);
            acesso = fscanf(arquivo1,"%c", &letra);
        }
    
    } 
    
    fclose(arquivo1); fclose(arquivo2);
}