#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define TAMANHO 15

int buscaBinaria(int vetor[TAMANHO], int item)
{
    int inicio = 0;
    int fim = TAMANHO-1;

    while (inicio <= fim) 
	{
        int i = (inicio+fim)/2;  

        if (vetor[i] == item) 
		{  
            return i;
        }

        if (vetor[i] < item) 
		{  
            inicio = i+1;
        }
        
		else 
		{
            fim = i;
        }
    }

    return 0;
}




int main ()
{
	setlocale(LC_ALL,"");
    int vetor[TAMANHO] = {2, 7, 15, 22, 28, 30, 40, 42, 43, 48, 50, 51, 52, 54, 58};



    for (int i=0; i<TAMANHO; i++) 
	{
        int item = vetor[i];
        printf("Número %d está na posição [%d]\n\n", item, buscaBinaria(vetor, item));
    }

    return 0;
}
