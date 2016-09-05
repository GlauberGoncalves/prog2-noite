#include <stdio.h>

void main(){

	int c[15],a[15],b[15], i;


	for(i = 0; i < 15; i++){
		a[i] = i;
		b[i] = i + 2;
	}

	for(i = 0; i < 15; i++){
		c[i] = a[i] + b[14 - i];
		printf("%d = %d + %d\n", c[i],a[i],b[14 - i]);
	}

}