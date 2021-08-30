#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 20

	int cont, qtdE, loop=0, qtdA, i, erro=0, cadastro=0;
	char letra;
	int FILEqtdE, FILEqtdA;
	FILE *atletas, *esportes;


typedef struct esporte
	{
		int codigoM;
		char nome[MAX];
		int excluido;
		int praticantes;
		int times;
	}esporte;
	
	
	
typedef	struct atleta
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
	}atleta;
	
	struct esporte esp, iEsp[MAX];

	struct atleta ate, iAte[MAX];



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


int registro(char letra)
{
	
				switch(letra)
				{
					case 'E':			//Cadastro de esportes
						esportes = fopen("D:\\Dev-C++\\TrabalhoStruct\\Esportes.dat", "a+b");
						qtdE = fread(iEsp, sizeof(esporte), MAX, esportes);

						printf("Digite o nome do esporte: ");
						fgets(esp.nome, MAX, stdin);
						fflush(stdin);
						correcao(esp.nome);
						printf("\n\nDigite o codigo de %s: ", esp.nome);
						scanf("%d", &esp.codigoM);
						fflush(stdin);
						for(i=0; i<qtdE; i++)
						{
							while(esp.codigoM == iEsp[qtdE].codigoM)		//Verifica se há um esporte com esse codigo
							{
								printf("\nErro! Ja existe um esporte cadastrado com esse codigo: %s", iEsp[qtdE].nome);
								printf("\n\nRedigite o codigo: ");
								scanf("%d", &esp.codigoM);
								fflush(stdin);
							}	
						}
						
						printf("\n\nDigite quantos participantes ha em cada time: ");
						scanf("%d", &esp.times);
						
						cadastro=1;
						fgetc(stdin);
						system("cls");
						break;
					break;
					
					case 'A':			//Cadastro de atletas em esportes
						{
						printf("Digite o nome do atleta: ");
						fgets(ate.nome, MAX, stdin);
						correcao(ate.nome);
						printf("\n\nDigite o codigo de %s: ", ate.nome);
						scanf("%d", &ate.codigoA);
						
						/*for(i=0; i<MAX; i++)
							{
								if(qtdA != i)
								{
									if(ate.codigoA == ate[i].codigoA)			//Verifica se existe um atleta com esse codigo
									{
										erro = 1;
										while(erro == 1)
										{
											if(ate.codigoA == ate[i].codigoA)			//Verifica se existe um atleta com esse codigo
											{
												printf("\nErro! Ja existe um aluno cadastrado com esse codigo: %s", ate[i].nome);
												printf("\n\nRedigite o codigo de %s: ", ate[qtdA].nome);
												scanf("%d", &ate[qtdA].codigoA);
											}
											else
											{
												erro=0;
											}
										}
									}
								}
								
								break;		//Encerra o laço caso o codigo seja diferente
							}*/
						
						printf("\n\nDigite o codigo do esporte que %s pratica: ", ate.nome);
						scanf("%d", &ate.codigoM);
						
							/*for(i=0; i<MAX; i++)
							{
								if(ate[qtdA].codigoM == esp[i].codigoM)			//Verifica se existe um esporte com esse codigo
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
										printf("\n\nRedigite o codigo do esporte que %s pratica: ", ate[qtdA].nome);
										scanf("%d", &ate[qtdA].codigoM);
											if(ate[qtdA].codigoM == esp[i].codigoM)			//Verifica se existe um esporte com esse codigo
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
							}*/
						
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
						
						
					case 'L':		//Mostra os dados dos esportes cadastrados
						{
							for(i=0; i<qtdE; i++)
							{
								printf("\n==============================");
								printf("\nNome: %s", esp.nome);
								printf("\nCodigo: %d", esp.codigoM);
								printf("\nTamanho dos times: %d", esp.times);
								printf("\nCadastrados: %d", esp.praticantes);
								printf("\n==============================\n\n");
								fgetc(stdin);
							}
							
							break;
						}
						
						
					case 'F': loop = 1; break;		//Para sair do programa
			 	}
			 		
			 	fflush(stdin);
				FILEqtdE = fwrite(&esp, sizeof(esporte), 1, esportes);
				FILEqtdA = fwrite(&ate, sizeof(atleta), 1, atletas);
			 	
			 	if((loop != 1) && (cadastro == 1))		//Mensagem para confirmar cadastro de atletas e esportes
				 {
				 	fflush(stdin);
				 	printf("==============================================");
				 	printf("\nCadastro realizado com sucesso!");
				 	printf("\nPressione qualquer tecla para continuar.");
				 	printf("\n==============================================\n");
				 	printf("%d", qtdE);
				 	cadastro = 0;
				 	fgetc(stdin);
					system("cls");}
}


int main()
{
	atletas = fopen("D:\\Dev-C++\\TrabalhoStruct\\Atletas.dat", "a+b");

	
	while(loop==0)
	{	
				printf("Deseja cadastrar um esporte ou atleta?\n");
				printf("E-Esporte		A-Atleta\n\nL-Para a lista de esportes cadastrados\n\nPressione F para sair.\n\n");		
				letra = fgetc(stdin);
				fflush(stdin);
				system("cls");
				registro(letra);
	}
}
