#include<stdio.h>

int main()
{
	int vetor[100], vR[100], vA[100], vP[100];
	int num, cont, aux1=0, aux2=0, aux3=0;
	float somaR=0, somaA=0, somaP=0;
	float mediaR=0, mediaA=0, mediaP=0;
	
	scanf("%d", &num);
	
	for(cont=0; cont<num; cont++)
	{
		scanf("%d", &vetor[cont]);
	}
	
	
	
	for(cont=0; cont<num; cont++)
	{
		if(vetor[cont]<4)					//Vetor dos Reprovados
		{
			vR[aux1] = vetor[cont];
			somaR += vetor[cont];
			aux1++;
		}
		
		else if(vetor[cont]>=6)				//Vetor dos Aprovados
		{
			vA[aux2] = vetor[cont];
			somaA += vetor[cont];
			aux2++;
		}
		
		else
		{
			vP[aux3] = vetor[cont];			//Vetor da Prova Final
			somaP += vetor[cont];
			aux3++;
		}
		
	}
	
	
	
	mediaR = somaR/aux1;
	mediaA = somaA/aux2;
	mediaP = somaP/aux3;
	
	printf("\nMedia das notas:\n\nAprovados: %.2f\nReprovados: %.2f\nProva Final: %.2f", mediaA, mediaR, mediaP);
	
	
	return 0;
}
