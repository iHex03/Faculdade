#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<errno.h>
#include<locale.h>
#define CM CHAR_MAX
	

int main()
{
	setlocale(LC_ALL, "");
	
	char letra, criptoLetra;
	int  i=0, chave;
	
	FILE *arq, *descriptografado;
	
	arq = fopen("criptografado.txt", "r");
	descriptografado = fopen("descriptografado.txt", "w");
	
	if(arq == NULL)
	{
		printf("\nErro ao tentar abrir arquivo.\nErrno: %s\n\n", strerror(errno));
	}
	
	
	printf("Insira a chave: ");
	scanf("%d", &chave);
	
	while((letra = fgetc(arq)) != EOF)
	{
		criptoLetra = letra-chave;
		fputc(criptoLetra, descriptografado);
	}
	
	printf("Arquivo descriptografado com sucesso!");

	
	return 0;
}
