#include <stdio.h>
#include <stdlib.h>

typedef struct Produto
{
	int mes;
	int ano;
	int quantidade;
	double unitario;
} produto;

int main()
{
	produto Infos;
	FILE *arquivo = fopen("Ex4.dat", "rb");
	int ano;
	float total=0;
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if(arquivo == NULL)
	{
		printf("Erro ao abrir arquivo.");
	}
	else
	{
		while(!EOF)
		{
			fread(&Infos.ano, sizeof(Produto), 1, arquivo);
			if(ano == Infos.ano)
			{
				total = Infos.quantidade * Infos.unitario;
				
			}
		}
		printf("Valor total: %.2f", total);
	}
	
	
	return 0;
}
