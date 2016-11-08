#include <stdio.h>
/*
    12. Faça um modulo que, pesquisando num vetor ordenado fornecido por
    parâmetro, obtenha o índice de um dado elemento. O elemento a pesquisar
    é também fornecido por parâmetro. Se o elemento não existir o módulo
    deve sinalizar. 
*/

int pesquisa(int p, int *vetor){
    
    for(int i=0;i<=9;i++){
        if(p == vetor[i]){
            return i;
        }
    }return -1;
}

void main(){
    int vetor[10], resultado, i;
    
    for(i=0;i<=9;i++){
        vetor[i] = i+1;
        printf("%d\n", vetor[i]);
    }
    
    printf("\n\nDigite o valor: ");
    scanf("%d",&i);
    
    resultado = pesquisa(i , vetor);
   if(resultado>=0)
    printf("%d está no indice %d\n", i, resultado);
   else printf("Valor não encontrado");
}


