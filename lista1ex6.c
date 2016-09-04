/*
    6. Elabore uma função que receba 2 números inteiros a e b e um caracter
    c. A função deve imprimir uma "moldura" de tamanho a x b, feita usando
    um caracter c e devolver o número de caracteres impressos. O programa
    deve executar a função e imprimir seu valor de retorno.
*/

#include <stdio.h>

int imprime(int, int, char);

void main(){
    int altura, largura;
    char caracter;

    printf("\nAltura?: ");
    scanf("%d", &altura);

    printf("\nLargura?: ");
    scanf("%d",&largura);

    printf("\nCaractar?: ");
    scanf(" %c",&caracter);

    imprime(altura, largura, caracter);
}    

int imprime(int h, int l, char c){
    int i,j;

    for(i=1;i<=h;i++){
        if(i == 1 || i == h){// se for a primeira ou a ultima linha
           for(j=1;j<=l;j++)
            printf("%c",c);
            printf("\n");
        }else{
            for(j=1;j<=l;j++){
                if(j == 1 || j == l){
                    printf("%c",c);
                }else{
                    printf(" ");
                }
            }
           printf("\n"); 
        }
    }
}