/*
    7. Faça uma função que receba um valor inteiro e positivo, calcule e
    retorne o seu fatorial. Construa um programa que utilize essa função.
*/
#include <stdio.h>

int calFatorial(int);

void main(){
    int numero, fatorial;
    printf("\nInfo numero?: ");
    scanf("%d",&numero);

    fatorial = calFatorial(numero);
    printf("\nResult: %d\n\n",fatorial);
}

int calFatorial(int n){
    int i,f;
    f = 1;

    for(i=1+1;i<=n;i++){
        f *= i;
    }
    return f;
}
