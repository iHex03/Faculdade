#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 999

char correcao(char *nome)
{
	int i;
	for(i=0; i<=MAX; i++)
	{
		if(nome[i] == '\n')
		{
			nome[i] = ' ';
			break;
		}
	}
	
	return *nome;
}

int main()
{
	int cont, qtd=0, loop=0;
	char letra;
	
	struct esporte
	{
		int codigoM;
		char nome[MAX];
		int excluido;
		int praticantes;
		int times;
	};
	
	struct esporte esp;
	
	struct atleta
	{
		int codigoA;
		char nome[MAX];
		int codigoM;
		int excluido;
		int idade;
		float peso;
		char tipoSang;
		float altura;
		char sexo;
	};
	
	struct atleta ate;
	
	while(loop==0)
	{	
				printf("Deseja cadastrar um esporte ou atleta?\n");
				printf("E-Esporte		A-Atleta\n");
			
				letra = fgetc(stdin);
				fflush(stdin);
				system("cls");
			
				
				switch(letra)
				{
					case 'E':
						printf("Digite o nome do esporte: ");
						fgets(esp.nome, MAX, stdin);
						correcao(esp.nome);
						printf("\n\nDigite o codigo de %s: ", esp.nome);
						scanf("%d", &esp.codigoM);
						printf("\n\nDigite quantos participantes ha em cada time: ");
						scanf("%d", &esp.times);
						qtd++;
						fgetc(stdin);
						system("cls");
						break;
					break;
					
					case 'A':
						if(qtd==0)	
						{
							printf("Erro! Nenhum esporte cadastrado.");
							fgetc(stdin);
							system("cls");
							return 0;
						}
						
						else
						{
						printf("Digite o nome do atleta: ");
						fgets(ate.nome, MAX, stdin);
						correcao(ate.nome);
						printf("\n\nDigite o codigo de %s: ", ate.nome);
						scanf("%d", &ate.codigoA);
						printf("\n\nDigite o codigo do esporte que %s pratica: ", ate.nome);
						scanf("%d", &ate.codigoM);
						
							if(ate.codigoM == esp.codigoM)
							{
								printf("\n=======================================");
								printf("\nEsporte cadastrado: %s", esp.nome);
								printf("\n=======================================");
							}
						
						printf("\n\nDigite a idade de %s: ", ate.nome);
						scanf("%d", &ate.idade);
						printf("\n\nDigite o peso: ");
						scanf("%f", &ate.peso);
						fflush(stdin);
						printf("\n\nDigite o tipo sanguineo (apenas a letra): ");
						ate.tipoSang = fgetc(stdin);
						printf("\n\nDigite a altura (em metros): ");
						scanf("%f", &ate.altura);
						printf("\n\nDigite o sexo (M ou F): ");
						ate.sexo = fgetc(stdin);
						fflush(stdin);
						fgetc(stdin);
						system("cls");
						break;
						}
			 	}
			 	
			 	fflush(stdin);
			 	printf("==============================================");
			 	printf("\nCadastro realizado com sucesso!");
			 	printf("\nPressione qualquer tecla para continuar.");
			 	printf("\n==============================================");
			 	fgetc(stdin);
				system("cls");
	}
				
				
	system("cls");

	printf("Esporte: %s", esp.nome);
	printf("\nCodigo: %d", esp.codigoM);
	printf("\nPraticantes: %d", esp.praticantes);
	printf("\nTamanho do time: %d", esp.times);
}
