/*
3) Faça um programa que leia do arquivo arq.txt os preços e códigos armazenados
(inteiros). Exiba na tela os códigos com os respectivos preços. Ao final, exiba
o valor total. Use a função fscanf ( ).
*/
#include <stdio.h>
#include <string.h>

struct produto{
    int codigo;
    float valor;
};

void main(){
    FILE *arquivo;

    int id;
    float valor;
    char var_aux;
    int indice=0;
    struct produto *produtos;
    
    /*strcpy(nome,"glauber");*/
/****************************************/
// lendo arquivo txt
    
    arquivo = fopen("arq.txt","r");
    
    if(arquivo == NULL){
        printf("Não foi possivel ler arquivo!\n");
    }
    else{
       var_aux = fscanf(arquivo, "%d %f", &id, &valor);
       
        while(var_aux != EOF){
            indice++;
         var_aux = fscanf(arquivo, "%d %f", &id, &valor);
        } 
    }
    fclose(arquivo);
/***************************************/
// alocação dinamica
  produtos = (struct produto *)(malloc(indice * sizeof(struct produto)));
//  produtos = malloc(indice * sizeof(struct produto));
  indice = 0;
/*********************************/
    arquivo = fopen("arq.txt","r");
    if(arquivo == NULL){
        printf("Não foi possivel ler arquivo!\n");
    }
    else{
       var_aux = fscanf(arquivo, "%d %f", &produtos[0].codigo, &produtos[0].valor);
       
        while(var_aux != EOF){
            printf("Código produto:%d Valor: %8.2f \n", produtos[indice].codigo, produtos[indice].valor);
            indice++;
         var_aux = fscanf(arquivo, "%d %f", &produtos[indice].codigo, &produtos[indice].valor);
        } 
    }
    fclose(arquivo);
/****************************************************/
// escrevendo no arquivo binario

    arquivo = fopen("arquivo.gb","wb");
        if(arquivo == NULL)
            printf("Não foi possivel ler arquivo!\n");
        else
          fwrite(produtos, sizeof(produtos),indice,arquivo);
    fclose(arquivo);
    
}