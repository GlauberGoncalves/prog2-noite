/*
	3. Faça uma função que receba três notas de um aluno com parâmetros e
	uma letra. Se a letra for A o procedimento calcula a média das notas do
	aluno, se for P o procedimento calcula a média ponderada com pesos 5,3 e
	2. A média calculada deve ser devolvida ao programa principal para,
	então ser mostrada.

*/

#include <stdio.h>

	float procNotas(float,float,float,char);

	int main(void)
	{
		int i;
		float nota[3], media;
		char letra;

		media = 0;

		for(i=0;i < 3;i++)
		{
			printf("Entre com a nota %d \n",i+1);
			scanf("%f", &nota[i]);
		}

		printf("Informe a letra (A || P) \n");
		scanf(" %c", &letra);

		media = procNotas(nota[0],nota[1],nota[2], letra);

		printf("Media é: %f\n", media);

		return 0;
	}

	float procNotas(float n1, float n2, float n3, char letra){

		int media;

		if (letra == 'a' || letra == 'A')
			media = ((n1 + n2 + n3) / 3);
		else if (letra == 'p' || letra == 'B')
		{
			media = (n1*5 + n2*3 + n3*2)/(5+3+2);
		}

		return media;
	}
