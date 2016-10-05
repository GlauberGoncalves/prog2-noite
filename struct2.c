#include <stdio.h>
#include <stdlib.h>

/*
ü sexo ( M ou F );
ü cor dos olhos ( azul, verde, castanho);
ü cor dos cabelos ( louro, castanho, preto, ruivo );
ü idade. 

*/

struct pessoa{
    char sexo;
    char olhos[10];
    char cabelo[10];
    int idade;
}; 

void main(){
    struct pessoa populacao[2];
    
    
    for(int i=0; i<2 ; i++){
        
        printf("Informe o sexo ");
        scanf(" %c", &populacao[i].sexo);
        system("clear");
        
        printf("Informe a cor dos olhos ");
        scanf("%s", populacao[i].olhos);
        system("clear");
        
        printf("Informe a cor dos cabelos ");
        scanf("%s", populacao[i].cabelo);
        system("clear");
        
        printf("Informe a idade ");
        scanf("%d", &populacao[i].idade);
        system("clear");
    }

}


