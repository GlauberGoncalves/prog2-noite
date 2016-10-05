#include <stdio.h>
#include <stdlib.h>

/*

*/

struct produto{
    int codigo;
    char descricao[30];
    float preco;
}; 

void main(){
    int codigo;
    float desconto;
    struct produto mercadorias[50];
    
    for(int i=0; i<50; i++){
        printf("Informe o codigo do produto ");
        scanf("%d",&mercadorias[i].codigo);
        
        printf("Informe a descricao ");
        scanf("%s", mercadorias[i].descricao);
        
        printf("Informe o preço ");
        scanf("%f", &mercadorias[i].preco);
        system("clear");
    }
    
    printf("informe o percentual de desconto ");
    scanf("%f", &desconto);system("clear");
    
    desconto = desconto/100;
    
    printf("Informe codigo do produto ");
    scanf("%d", &codigo);system("clear");
    
    for(int i=0;i<50;i++){
        mercadorias[i].preco = mercadorias[i].preco + (mercadorias[i].preco * desconto);
    }
    
    for(int i=0; i<50; i++){
        if(codigo == mercadorias[i].codigo){
            printf("Codigo: %d\n", mercadorias[i].codigo);
            printf("Descrição: %s\n", mercadorias[i].descricao);
            printf("Preço: %f\n\n", mercadorias[i].preco);
        }
    }
}


