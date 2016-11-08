#include <stdio.h>
#include <stdlib.h>
/*
    14. Faça um programa modularizado para corrigir provas de múltipla
    escolha. Cada prova tem dez questões e cada questão vale 1 ponto. O
    primeiro conjunto de dados a ser lido é o gabarito da prova. Os outros
    dados serão os números dos alunos e suas respectivas respostas. Existem
    15 alunos matriculados. Calcule e mostre:
    • Para cada aluno seu número e sua nota;
    • A percentagem de aprovação, sabendo-se que a nota mínima é 6,0. 

*/

void corrigir(int prova[][10], int gabarito[], int resultado[]){
    int cont = 0,i,j;
    
    
    
    for(i=0;i<15;i++)
      for(j=0;j<10;j++)
          if(prova[i][j] == gabarito[j]){
              resultado[i] =  resultado[i] + 1;
          }
}

void main(){
    int alunos[15][10],resultado[15],gabarito[10], i,j;
    
    for(i=0;i<15;i++)
      for(j=0;j<10;j++){
          alunos[i][j]=0;
          resultado[i]=0;
          gabarito[j]=0;
      }
    
    for(i = 0; i<15; i++){
        printf("\n");
      for(j = 0; j < 10; j++){
          alunos[i][j] = (rand() % 5) +1;
          if(i == 0) gabarito[i] = (rand() % 5) +1;
      }
    }
    
       corrigir(alunos, gabarito, resultado);
    

     printf("Aluno %d: %d\n",i+1,resultado[i]);
    
}


