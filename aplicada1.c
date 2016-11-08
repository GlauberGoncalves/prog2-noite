#include <stdio.h>

struct habitante{
    char nome[40];
    char sexo[10];
    char olhos[10];
    char cabelo[10];
    int idade;
};

int cadastro(struct habitante *pessoas);
float media(struct habitante *pessoas);

void main(){
    struct habitante pessoa[5];
    cadastro(pessoa);
    printf("A media da idade é: %f", media(pessoa));
    
    
}

int cadastro(struct habitante *pessoas){
    
    for(int i=0; i<5; i++){
        printf("\nCadastro %d",i+1);
        printf("\nInforme o nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Informe o sexo");
        scanf("%s", pessoas[i].sexo);  
        printf("Cor dos olhos ");
        scanf("%s", pessoas[i].olhos);
        printf("Informe a cor dos cabelos ");
        scanf("%s", pessoas[i].cabelo);         
        printf("Informe a idade ");
        scanf("%d", &pessoas[i].idade);
        system("clear");
    }
    return 1;
}

float media(struct habitante *pessoas){
    float olhosCast=0;
    for(int i=0; i<5; i++){
        if(pessoas[i].olhos == "c")
            if(pessoas[i].cabelo == "c"){
                olhosCast += pessoas[i].idade;
            }
        if(i == 4){
            olhosCast = olhosCast/5;
        }
    }
    return olhosCast;
}