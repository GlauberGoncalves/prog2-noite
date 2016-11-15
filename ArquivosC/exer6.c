/*
7) A cifra de Cesar é uma forma de criptografia antiga, onde cada letra de uma
determinada mensagem e trocada pela letra que a sucede em 3 posições. Por
exemplo, a palavra ajuda seria transformada em dmxgd. Escreva uma função que
leia um arquivo texto e escreva a cifra de Cesar correspondente em outro
arquivo texto.
*/

#include <stdio.h>

struct pecas{
    int id;
    char nome[40];
    float preco;
    int quantidade;
};

void main(){
    FILE *arquivo;
    char arq_access;
    struct pecas veiculo;
    float total;
    
    arquivo = fopen("arq6.txt","r");
    
    if(arquivo == NULL){
        printf("\nNão foi possivel abrir arquivo!");
    }else{
        
        arq_access = fscanf(arquivo,"%d %s %f %d",&veiculo.id,veiculo.nome,&veiculo.preco,&veiculo.quantidade);
        while(arq_access != EOF){
            total += veiculo.quantidade * veiculo.preco;
            arq_access = fscanf(arquivo,"%d %s %f %d",&veiculo.id,veiculo.nome,&veiculo.preco,&veiculo.quantidade);
        }
        
        printf("\nValor total em estoque: %8.2f", total);
        
    }
    
    fclose(arquivo);
}