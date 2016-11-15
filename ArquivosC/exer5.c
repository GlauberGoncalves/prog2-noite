/*
5) Faça um programa que leia o arquivo prog2.bin, criado por você no
exercício 4, e imprima a média dos alunos da turma e quantos alunos 
tiveram notas acima da média.
*/
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
    struct aluno leitura[10];
    float media;
    int melhores;
    

/*************** Lê todos dos dados do arquivo de um vez só ******************/

    arquivo = fopen("prog2.bin","rb");
        if(arquivo == NULL)
            printf("Não foi possivel abrir arquivo ");
        else{    
            fread(leitura,sizeof(leitura),10,arquivo);
        }
    fclose(arquivo);
    
/*****************************************************************************/    
/* tira media e a imprime */
    media = 0;

    for(int i=0;i<=10;i++){
        media += leitura[i].nota;
        printf("nome: %s\n",leitura[i].nome);
    }
    media = media/10;
    printf("\nA media dos alunos é de %f", media);
    
/* imprime quantidade de alunos acima da media */    
    melhores = 0;
    
    for(int i=0;i<=10;i++){
        if(leitura[i].nota > media)
        melhores++;
    }
    printf("\n%d estão acima da media", melhores);
}