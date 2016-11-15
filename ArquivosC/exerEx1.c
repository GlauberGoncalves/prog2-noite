/*
4) Faça um programa que gere o arquivo prog2.bin, com o nome (50 caracteres) 
e a nota final dos alunos de uma turma de PROG II. A entrada das notas
termina com um nome igual a XXX.
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
    struct aluno leitura[10]={0};
    int aux; /*variaval começa com -1 para entrar no while com 0 após soma */

/*********************** Lendo arquivo txt ****************************/
   
    arquivo = fopen("exer4.txt","r");

    if(arquivo == NULL){
        printf("não foi possivel abrir o arquivo\n");
    }else{
        aux = 0;
        while(acesso != EOF ){
           acesso = fscanf(arquivo, "%s %f\n", leitura[aux].nome, &leitura[aux].nota);
            aux++;
        }
        fclose(arquivo);
    }
    
/*********************** criando arquivo binario ****************************/
 
    arquivo = fopen("prog2.bin","wb");
    
        if(arquivo == NULL){
            printf("\nNão foi possivel criar arquivo");
        }else{
            fwrite(&leitura[0],sizeof(struct aluno),10,arquivo);
        }

    fclose(arquivo);
    
    
    
    
    
}