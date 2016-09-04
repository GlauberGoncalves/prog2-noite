/* 4. Escreva uma função que determina se três valores inteiros fornecidos
   como parâmetros representam medidas de um triângulo retângulo. Suponha
   que os parâmetros são fornecidos em ordem decrescente.
*/
#include <stdio.h>

int mediTri(float a, float b, float c);

void main(){
    float triangulo[3];
    int result, i;

    for(i=0;i<3;i++){
        printf("\nInforme a medida %d: ", i+1);
        scanf("%f",&triangulo[i]);
    }
    result = mediTri(triangulo[0],triangulo[1],triangulo[2]);

 if(result == 1)
    printf("\nÉ um triangulo retângulo\n\n");
 else
    printf("\nNão é um triangulo retângulo\n\n"); 

}

int mediTri(float a, float b, float c){
    float result,soma;    

    if((a*a) == (b*b)+(c*c))
        return 1;
    else
        return 0;
}