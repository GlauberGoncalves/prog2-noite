/*  2. Faça uma função que transforme e mostre segundos em horas, minutos e
    segundos.
*/

#include <stdio.h>

int segparaHoras(int);

int main(){
    
    int segundos;
    
    printf("\nQuantos segundos?: ");
    scanf("%d", &segundos);

    segparaHoras(segundos);
    
    return 0;
}

int segparaHoras(int segundos){
    int h,m,s;
    
    if(segundos < 60){
      s = segundos;    
      printf("%ds", s);
    }
    else if (segundos < 3600){
      m = segundos / 60;
      s = segundos % 60;
      printf("Tempo: %dm:%ds", m,s);
    }
    else{
      h = segundos / 3600;
          segundos -= (h*3600);
      m = segundos / 60;
      s = segundos % 60;
      printf("Tempo: %dh:%dm:%ds",h, m,s);
    }  
      
    return 0;    
    
}