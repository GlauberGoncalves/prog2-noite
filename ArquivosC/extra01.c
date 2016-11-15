#include <stdio.h>





void main(){
    FILE *arquivo;
    int contador,id,valor;
    char acesso;
    
    
    arquivo = fopen("arq.txt","r");
    
    if(arquivo == NULL)
        printf("arquivo não pode ser aberto");
    else{
        acesso = fscanf(arquivo,"%d %f \n", &id, &valor);
        while(acesso != EOF){
            
        }  
    }    
    
    
}