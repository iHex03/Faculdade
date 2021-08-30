#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 999


struct esporte
	{
		int codigoM;
		char nome[MAX];
		int excluido;
		int praticantes;
		int times;
	};
	
	
	
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
	int cont, qtd=0, loop=0, qtd2=0, i, erro=0, cadastro=0;
	char letra;
	
	struct esporte esp[MAX];
	struct atleta ate[MAX];
	
	
	while(loop==0)
	{	
				printf("Deseja cadastrar um esporte ou atleta?\n");
				printf("E-Esporte		A-Atleta\n\nL-Para a lista de esportes cadastrados\n\nPressione F para sair.\n\n");
			
				letra = fgetc(stdin);
				fflush(stdin);
				system("cls");
			
				
				switch(letra)
				{
					case 'E':			//Cadastro de esportes
						printf("Digite o nome do esporte: ");
						fgets(esp[qtd].nome, MAX, stdin);
						correcao(esp[qtd].nome);
						printf("\n\nDigite o codigo de %s: ", esp[qtd].nome);
						scanf("%d", &esp[qtd].codigoM);
						printf("\n\nDigite quantos participantes ha em cada time: ");
						scanf("%d", &esp[qtd].times);
						qtd++;
						cadastro=1;
						fgetc(stdin);
						system("cls");
						break;
					break;
					
					case 'A':			//Cadastro de atletas em esportes
						if(qtd==0)		//Caso nenhum esporte tenha sido cadastrado
						{
							printf("Erro! Nenhum esporte cadastrado.");
							fgetc(stdin);
							system("cls");
							return 0;
						}
						
						else			//Ao haver um esporte, procede ao cadastro do atleta
						{
						printf("Digite o nome do atleta: ");
						fgets(ate[qtd2].nome, MAX, stdin);
						correcao(ate[qtd2].nome);
						printf("\n\nDigite o codigo de %s: ", ate[qtd2].nome);
						scanf("%d", &ate[qtd2].codigoA);
						printf("\n\nDigite o codigo do esporte que %s pratica: ", ate[qtd2].nome);
						scanf("%d", &ate[qtd2].codigoM);
						
							for(i=0; i<MAX; i++)
							{
								if(ate[qtd2].codigoM == esp[i].codigoM)			//Verifica se existe um esporte com esse codigo
								{
									printf("\n=======================================");
									printf("\nEsporte cadastrado: %s", esp[i].nome);
									printf("\n=======================================");
									esp[i].praticantes++;
								}
								else						//Caso nao encontre o esporte com o codigo digitado
								{
									erro = 1;
									while(erro == 1)
									{
										printf("\nErro! Nenhum esporte com esse codigo!");
										printf("\n\nRedigite o codigo do esporte que %s pratica: ", ate[qtd2].nome);
										scanf("%d", &ate[qtd2].codigoM);
											if(ate[qtd2].codigoM == esp[i].codigoM)			//Verifica se existe um esporte com esse codigo
											{
												printf("\n=======================================");
												printf("\nEsporte cadastrado: %s", esp[i].nome);
												printf("\n=======================================");
												esp[i].praticantes++;
												erro=0;
											}
									}
								}
								
								break;		//Encerra o laço caso encontre o esporte
							}
						
						printf("\n\nDigite a idade de %s: ", ate[qtd2].nome);
						scanf("%d", &ate[qtd2].idade);
						printf("\n\nDigite o peso: ");
						scanf("%f", &ate[qtd2].peso);
						fflush(stdin);
						printf("\n\nDigite o tipo sanguineo (apenas a letra): ");
						ate[qtd2].tipoSang = fgetc(stdin);
						printf("\n\nDigite a altura (em metros): ");
						scanf("%f", &ate[qtd2].altura);
						printf("\n\nDigite o sexo (M ou F): ");
						ate[qtd2].sexo = fgetc(stdin);
						fflush(stdin);
						fgetc(stdin);
						system("cls");
						break;
						}
						
						
					case 'L':		//Mostra os dados dos esportes cadastrados
						{
							for(i=0; i<qtd; i++)
							{
								printf("\n==============================");
								printf("\nNome: %s", esp[i].nome);
								printf("\nCodigo: %d", esp[i].codigoM);
								printf("\nTamanho dos times: %d", esp[i].times);
								printf("\nCadastrados: %d", esp[i].praticantes);
								printf("\n==============================");
							}
							
							break;
						}
						
						
					case 'F': loop = 1; break;		//Para sair do programa
			 	}
			 	
			 	if((loop != 1) && (cadastro == 1)){
				 	fflush(stdin);
				 	printf("==============================================");
				 	printf("\nCadastro realizado com sucesso!");
				 	printf("\nPressione qualquer tecla para continuar.");
				 	printf("\n==============================================\n");
				 	cadastro = 0;
				 	fgetc(stdin);
					system("cls");}
	}
}
