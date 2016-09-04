/*
    8. Escreva uma função omega(n:integer):integer que retorne a soma dos
    divisores de n exceto ele próprio. Exemplo: omega(15) = 1+3+5 = 9
    Usando a função omega solicitada acima, escreva um programa que
    imprima todos os números primos entre 2 e 10000.
*/
#include <stdio.h>

int omega(int);

void main(){
    int i,primo,cont;

    for(i=2;i<=10000;i++){
        cont += 1;
        primo = omega(i);
        if(primo == 1)
        printf("%d\t",i);
        if(cont == 10 )
        printf("\n");
    }    
   printf("\n\n\n");
}

int omega(int n){
    int soma, i;
    soma = 0;

    for(i=1;i<n;i++){
        if(!(n%i))
        soma += i;
    }
   return soma; 
}

