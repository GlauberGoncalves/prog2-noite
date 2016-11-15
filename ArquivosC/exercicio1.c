#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <string.h>
//#include <cstdlib>
//#include <iostream>

int main(int argc, char *argv[]){
    FILE *arq_cliente;
    char var_sexo, var_arquivo_aux, nomecli[50];
    int cd_cli, vl_idade, indice = 0;
    float vl_limite_credito;
    arq_cliente = fopen("cliente.txt","r");
    
    if(arq_cliente == NULL){
        printf("\nArquivo cliente.txt não pode ser aberto.");
        printf("\nOcorreu um Erro Grave! Use alguma tecla para finalizar!");
        system("pause");
    }else{
        var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f",&cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);
        
        while(var_arquivo_aux != EOF){
            indice = indice + 1;
            printf("\n------------------------------------------------------");
            printf("\n Dados do %dº cliente:", indice);
            printf("\n Codigo do cliente: %d \n Sexo %c", cd_cli, var_sexo);
            printf("\n Nome do cliente: %s ", nomecli);
            printf("\n Idade %d Credito: %8.2f", vl_idade, vl_limite_credito);
            printf("\n------------------------------------------------------");
            var_arquivo_aux = fscanf(arq_cliente,"%d %c %s %d %f", &cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);
        }
        fclose(arq_cliente);
        printf("\n *** FIM : [TECLE ALGO] ");
        
        
        return 0;
    }
}