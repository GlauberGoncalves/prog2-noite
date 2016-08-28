/*  1. Faça uma função que receba dois números positivos por parâmetro e
    retorne a soma dos N números inteiros existentes entre eles. 
*/

#include <stdio.h>

int somaInteiros(int,int);

int main(){
    
    int n1,n2, soma;
    
    printf("\nInforme o primeiro numero ");
    scanf("%d", &n1);
    printf("\nInforme o segundo numero ");
    scanf("%d", &n2);
    
    soma = somaInteiros(n1,n2);
    
    printf("\nSoma: %d", soma);
    
    return 0;
}

int somaInteiros(int a, int b){
    
    int i, soma;
    soma = 0;
    
    if(a < b)
     for(i=a+1; i<b; i++)
     soma += i;
    else
     for(i=a+1; i<b; i++)
     soma += i;
  return soma;  
}