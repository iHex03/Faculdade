#include<stdio.h>
#include<stdlib.h>

int main()
{
	int qtdE, qtdA;
	FILE *atletas, *esportes;
	
	esportes = fopen("E:\\Dev-C++\\TrabalhoStruct\\Esportes.dat", "w+b");
	atletas = fopen("E:\\Dev-C++\\TrabalhoStruct\\Atletas.dat", "w+b");
	
	if(esportes == NULL)		//Verificar o arquivo de esportes
	{
		printf("Erro ao abrir o arquivo de esportes!\n");
		exit(1);
	}
	if(atletas == NULL)			//Verificar o arquivo de atletas
	{
		printf("Erro ao abrir o arquivo de atletas!\n");
		exit(1);
	}
	
	qtdFILE = fwrite(esp[MAX])
	
}
