#include <stdio.h>


int multiplo(int numero);
void imprimir(int matrix[][5]);
void preenche(int numero, int opcao, int matrix[][5],int *c, int *o, int t);

void main(){
    int matrix[5][5] = {0}, num, mult, mult5, mult11, mult13;
    
    printf("Informe o numero mult 5 || 11 || 13 ");
    scanf("%d",&num);
    
    mult = multiplo(num);
    
    switch(mult){
        case 1:
            if(mult5 <= 5)
                preenche(mult,1,matrix);
                imprimir(matrix);
            break;    
        case 2:
            if(mult11 <= 9)
                preenche(mult,2,matrix);
                imprimir(matrix);
            break;                
        case 3:
            if(mult11 <= 9)
                preenche(mult,2,matrix);
                imprimir(matrix);
            break;                
        default:
            printf("Número não é multiplo\n");
    }
}


// imprime matrix
void imprimir(int matrix[][5]){
    int i, j;
    
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf("%d\t", matrix[i][j]);
        }
    }
}

// verifica multiplo
int multiplo(int numero){
    
    if(numero%5 == 0)
        return 1;
    else
    if(numero%11 == 0)
        return 2;
    else
    if(numero%13 == 0)
        return 3;
    else return 0;
}

void preenche(int numero, int opcao, int matrix[][5], int *c, int *o, int *t){
    //multiplos de 5
   /* switch(opcao){
        case 1:
            
    }*/
    
}