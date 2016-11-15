#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    float nota;
};

void main(){
/*********************** Declaração das variaveis ****************************/
    FILE *arquivo;
    char acesso;
    struct aluno *lista;
    struct aluno leitura;
    int aux=-1; /*variaval começa com -1 para entrar no while com 0 após soma */

/*********************** Pedindo dados ao usuario ****************************/

/* Escreve no arquivo txt até que usuario digite xxx no nome */
   
    arquivo = fopen("exer4.txt","w");

    if(arquivo == NULL){
        printf("não foi possivel abrir o arquivo\n");
    }else{
        
        do{
            aux++;
            printf("\nNome do %dº aluno ", aux+1);
            scanf("%s", leitura.nome);
            printf("Nota do %dº aluno ", aux+1);
            scanf("%f", &leitura.nota);
      
/*escreve no arquivo txt*/

            if(strncmp(leitura.nome, "xxx", 3) != 0)
                fprintf(arquivo,"%s %8.2f\n", leitura.nome, leitura.nota);
            
            
        }while(strncmp(leitura.nome, "xxx", 3));
    
        fclose(arquivo);
    }

/* Cria variavel dinamicamente */
    
    lista = (struct aluno*)(malloc(aux * sizeof(struct aluno)));
    
/*********************** criando arquivo binario ****************************/
    
    arquivo = fopen("prog2.bin","w");
    
        if(arquivo == NULL){
            printf("\nNão foi possivel criar arquivo");
        }else{
            fwrite(lista,sizeof(struct aluno),aux,arquivo);
        }

    fclose(arquivo);
    
}