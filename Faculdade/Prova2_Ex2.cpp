#include<stdio.h>

int main()
{
	int vetor[100], num, x, aux=0, cont;
	float media, somaM=0;
	
	scanf("%d %d", &x, &num);
	
	for(cont=0; cont<num; cont++)
	{
		scanf("%d", &vetor[cont]);

	}
	
	for(cont=0; cont<num; cont++)
	{
		
		if(vetor[cont]<x)
		{
			somaM += vetor[cont];
			aux++;
		}
	}
	
	media = somaM/aux;
	
	printf("\nA media e: %.2f\nCom %d numeros abaixo de x", media, aux);
	
	
	return 0;
}
