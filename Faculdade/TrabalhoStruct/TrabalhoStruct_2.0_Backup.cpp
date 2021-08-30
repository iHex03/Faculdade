#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 20

typedef struct esporte
	{
		int codigo;
		char nome[MAX];
		int excluido;
		int praticantes;
		int times;
	}esporte;
	 esporte esp, iesp[MAX];

	
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
	 atleta atl, iatl[MAX];



char correcao(char *nome)			//Faz com que a quebra de linha seja retirada do fgets
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


void CadastrarEsporte()			//Cadastro de esportes
{
	int size, i;
	FILE *ESPORTES = fopen("Esportes.dat", "a+b");	//Abre o arquivo
	size = fread(iesp, MAX, sizeof(esporte), ESPORTES);
	
	printf("Digite o codigo: ");
	scanf("%d", &esp.codigo);
	fflush(stdin);
	
	for(i=0; i<size; i++)
	{
		while(esp.codigo==iesp[i].codigo)			//Caso o codigo ja esteja sendo usado
		{
			printf("\nErro! Codigo pertence a %s\nDigite outro codigo: ", iesp[i].nome);
			scanf("%d", &esp.codigo);
			fflush(stdin);
			i=0;
		}
	}
	printf("\n\nDigite o nome do esporte: ");
	fgets(esp.nome, MAX, stdin);
	fflush(stdin);
	correcao(esp.nome);
	
	printf("\n\nDigite quantos participantes ha em cada time: ");
	scanf("%d", &esp.times);
	
	fwrite(&esp, sizeof(esporte), 1, ESPORTES);		//Grava as informacoes registradas
	fclose(ESPORTES);								//Fecha o arquivo
}


void AlterarEsporte()
{
	int num, num2, ced;
	FILE *ESPORTES = fopen("Esportes.dat", "w+b");
	fread(iesp, MAX, sizeof(esporte), ESPORTES);
	printf("\n=============================================================\n");
	printf("1-Buscar esporte	2-Excluir esporte	3-Cancelar\n");
	printf("=============================================================\n");
	scanf("%d", &num);
	system("cls");
	switch(num)
	{
		case 1:				//Buscar esporte
			{
			printf("Digite o codigo do esporte: ");
			scanf("%d", &ced);
			fflush(stdin);
			printf("\n\nNome: %s", iesp[ced].nome);
				printf("\nDigite o novo nome: ");
				fgets(iesp[ced].nome, MAX, stdin); correcao(iesp[ced].nome); fflush(stdin);
			printf("\n\nTamanho do time: %d", iesp[ced].times);
				printf("\nNovo tamanho do time: ");
				scanf("%d", &iesp[ced].times); fflush(stdin);
			printf("\n\nCadastrados: %d", iesp[ced].praticantes);
			printf("\n\nSalvar alteracoes?\n1-Sim	2-Nao");	scanf("%d", &num2);	fflush(stdin);
			switch(num2)
			{
				case 1: fwrite(&iesp, sizeof(esporte), 1, ESPORTES); system("cls");		//Salvar alteracoes
					printf("==============================================");
				 	printf("\nAlteracoes realizadas com sucesso!");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fgetc(stdin); break;
					case 2: system("cls");												//Cancelar alteracoes
					printf("==============================================");
				 	printf("\nAlteracoes canceladas com sucesso!");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fgetc(stdin); break;
			}
			}
		case 2:
			{
			printf("Digite o codigo do esporte: ");
			scanf("%d", &ced);
			fflush(stdin);
			printf("\n\nNome: %s", iesp[ced].nome);
			printf("\n\nTamanho do time: %d", iesp[ced].times);
			printf("\n\nCadastrados: %d", iesp[ced].praticantes);
			printf("\n\nExcluir esporte?\n1-Sim	2-Nao");	scanf("%d", &num2);	fflush(stdin);
			switch(num2)
			{
				case 1: 
				if(iesp[ced].praticantes == 0)
				{
					iesp[ced].excluido = 1;
					fwrite(&iesp[ced].excluido, sizeof(int), 1, ESPORTES); system("cls");		//Excluir esporte
					printf("==============================================");
				 	printf("\nEsporte excluido com sucesso!");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fgetc(stdin); break;
				}
				else
				{
					printf("==============================================");
				 	printf("\nErro! Existem atletas cadastrados nesse esporte");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fgetc(stdin); break;
				}
				case 2: system("cls");												//Cancelar exclusao
					printf("==============================================");
				 	printf("\nExclusao cancelada com sucesso!");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fgetc(stdin); break;
			}
			}
		case 3: break;		//Cancela a escolha
	}
}


void CadastrarAtleta()
{
	int i, erro;
	FILE *ATLETAS = fopen("Atletas.dat", "a+b");
	FILE *ESPORTES = fopen("Esportes.dat", "rb");
	fread(iatl, MAX, sizeof(atleta), ATLETAS);
	fread(iesp, MAX, sizeof(esporte), ESPORTES);
	printf("Digite o codigo: ");
	scanf("%d", &atl.codigoA);
	fflush(stdin);

	for(i=0; i<MAX; i++)
		while((atl.codigoA == iatl[i].codigoA) || (atl.codigoA==0))
		{
			printf("\nErro! Digite outro codigo: ");
			scanf("%d", &atl.codigoA);
			fflush(stdin);
			i=0;
		}
	printf("\n\nDigite o nome: "); fgets(atl.nome, MAX, stdin); correcao(atl.nome); fflush(stdin);
	printf("\n\nDigite o codigo do esporte: "); scanf("%d", &atl.codigoM); fflush(stdin);
	for(i=0; i<MAX; i++)
	{
		if(atl.codigoM == iesp[i].codigo)			//Verifica se existe um esporte com esse codigo
			{
				printf("\n=======================================");
				printf("\nEsporte cadastrado: %s", iesp[i].nome);
				printf("\n=======================================");
				iesp[i].praticantes++;
			}
			else						//Caso nao encontre o esporte com o codigo digitado
			{
			erro = 1;
			while(erro == 1)
			{
				printf("\nErro! Nenhum esporte com esse codigo!");
				printf("\n\nRedigite o codigo do esporte que %s pratica: ", atl.nome);
				scanf("%d", &atl.codigoM);
				if(atl.codigoM == iesp[i].codigo)			//Verifica se existe um esporte com esse codigo
				{
					printf("\n=======================================");
					printf("\nEsporte cadastrado: %s", iesp[i].nome);
					printf("\n=======================================");
					iesp[i].praticantes++;
					erro=0;
				}
			}
			}					
			break;		//Encerra o laço caso encontre o esporte
	}
	printf("\n\nDigite a idade: "); scanf("%d", &atl.idade); fflush(stdin);
	printf("\n\nDigite o peso: "); scanf("%f", &atl.peso); fflush(stdin);
	printf("\n\nDigite a altura: "); scanf("%f", &atl.altura); fflush(stdin);
	printf("\n\nDigite o tipo sanguineo (apenas a letra): "); scanf("%c", &atl.tipoSang); fflush(stdin);
	printf("\n\nDigite sexo (M ou F): "); scanf("%c", &atl.sexo); fflush(stdin);
	fwrite(&atl, sizeof(atleta), 1, ATLETAS);
	fclose(ATLETAS);
	fclose(ESPORTES);
}

void AlterarAtleta()
{
	FILE *ATLETAS = fopen("Atletas.dat", "w+b");
	FILE *ESPORTES = fopen("Esportes.dat", "w+b");
	fread(iatl, MAX, sizeof(atleta), ATLETAS);
	fread(iesp, MAX, sizeof(esporte), ESPORTES);
	int num, num2, cad, esp, erro, i;
	printf("\n=============================================================\n");
	printf("1-Buscar atleta	2-Excluir atleta	3-Cancelar\n");
	printf("=============================================================\n");
	scanf("%d", &num);
	system("cls");
	switch(num)
		{
			case 1: 
			{
				printf("\n\nDigite o codigo do atleta:\n");
				scanf("%d", &cad);
				fflush(stdin);
				printf("\nNome: %s", iatl[cad].nome);
					printf("\nDigite o novo nome para %s: ", iatl[cad].nome);
					fgets(iatl[cad].nome, MAX, stdin); correcao(iatl[cad].nome); fflush(stdin);
				esp = iatl[cad].codigoM;
				printf("\n\nEsporte: %s", iesp[esp].nome);
					printf("\nDigite o codigo do novo esporte: "); scanf("%d", &iatl[cad].codigoM); fflush(stdin);
					for(i=0; i<MAX; i++)
					{
						if(iatl[cad].codigoM == iesp[i].codigo)			//Verifica se existe um esporte com esse codigo
							{
								printf("\nEsporte cadastrado: %s", iesp[i].nome);
								iesp[i].praticantes++;
								iesp[esp].praticantes--;
							}
							else						//Caso nao encontre o esporte com o codigo digitado
							{
							erro = 1;
							while(erro == 1)
							{
								printf("\nErro! Nenhum esporte com esse codigo!");
								printf("\n\nRedigite o codigo do esporte: ");
								scanf("%d", &iatl[cad].codigoM);
								if(iatl[cad].codigoM == iesp[i].codigo)			//Verifica se existe um esporte com esse codigo
								{
									printf("\nEsporte cadastrado: %s", iesp[i].nome);
									iesp[i].praticantes++;
									iesp[esp].praticantes--;
									erro=0;
								}
							}
							}					
							break;		//Encerra o laço caso encontre o esporte
					}	fflush(stdin);
						fwrite(&iesp[esp].praticantes, sizeof(int), 1, ESPORTES);
				printf("\n\nIdade: %d", iatl[cad].idade);
					printf("\nDigite a nova idade: "); scanf("%d", &iatl[cad].idade); fflush(stdin);
				printf("\n\nPeso: %.2f", iatl[cad].peso);
					printf("\nDigite o novo peso: "); scanf("%f", &iatl[cad].peso); fflush(stdin);
				printf("\n\nAltura: %.2f", iatl[cad].altura);
					printf("\nDigite a nova altura: "); scanf("%f", &iatl[cad].altura); fflush(stdin);
				printf("\n\nTipo sanguineo: %c", iatl[cad].tipoSang);
					printf("\nDigite o novo tipo sanguineo: "); scanf("%c", &iatl[cad].tipoSang); fflush(stdin);
				printf("\n\nSexo: %c", iatl[cad].sexo);
					printf("\nDigite o novo sexo: "); scanf("%c", &iatl[cad].sexo); fflush(stdin);
				printf("\n\nDeseja mantes as alteracoes feitas?\n1-Sim	2-Nao\n");
				scanf("%d", &num2);
				fflush(stdin);
				switch(num2)
				{
					case 1: fwrite(&iatl, sizeof(atleta), 1, ATLETAS); system("cls");
					printf("==============================================");
				 	printf("\nAlteracoes realizadas com sucesso!");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fflush(stdin);	fgetc(stdin); break;
					case 2: system("cls");
					printf("==============================================");
				 	printf("\nAlteracoes canceladas com sucesso!");
		 			printf("\nPressione ENTER para continuar.");
				 	printf("\n==============================================\n");
					fflush(stdin);	fgetc(stdin); break;
				}
			}
			case 2:
			{
			printf("Digite o codigo do atleta: ");
			scanf("%d", &cad);
			fflush(stdin);
			printf("\nNome: %s", iatl[cad].nome);
			esp = iatl[cad].codigoM;
			printf("\n\nEsporte: %s", iesp[esp].nome);
			printf("\n\nIdade: %d", iatl[cad].idade);
			printf("\n\nPeso: %.2f", iatl[cad].peso);
			printf("\n\nAltura: %.2f", iatl[cad].altura);
			printf("\n\nTipo sanguineo: %c", iatl[cad].tipoSang);
			printf("\n\nSexo: %c", iatl[cad].sexo);
			printf("\n\nExcluir atleta?\n1-Sim	2-Nao");	scanf("%d", &num2);	fflush(stdin);
			switch(num2)
			{
			case 1: 
				iatl[cad].excluido = 1;
				fwrite(&iatl, sizeof(int), 1, ATLETAS); system("cls");		//Excluir esporte
				printf("==============================================");
			 	printf("\nEsporte excluido com sucesso!");
		 		printf("\nPressione ENTER para continuar.");
			 	printf("\n==============================================\n");
				fgetc(stdin); break;
			case 2: system("cls");												//Cancelar exclusao
				printf("==============================================");
			 	printf("\nExclusao cancelada com sucesso!");
		 		printf("\nPressione ENTER para continuar.");
			 	printf("\n==============================================\n");
				fgetc(stdin); break;
			}
			}				
			case 3: break;
		}
	fclose(ESPORTES);
	fclose(ATLETAS);
}


void ConsultarAtleta()
{
	int cod, aux, i, qtdA;
	FILE *ATLETAS = fopen("Atletas.dat", "rb");
	FILE *ESPORTES = fopen("Esportes.dat", "rb");	
	qtdA=fread(iatl, MAX, sizeof(atleta), ATLETAS);
	fread(iesp, MAX, sizeof(esporte), ESPORTES);
	printf("Digite o codigo do esporte: "); scanf("%d", &cod); fflush(stdin);
	for(i=0; i<qtdA; i++)
	{
		if(iatl[i].codigoM==iesp[cod].codigo)
		{
			printf("\n==============================================");
		 	printf("\nNome: %s", iatl[i].nome);
			printf("\nEsporte: %s", iesp[cod].nome);
			printf("\nIdade: %d", iatl[i].idade);
			printf("\nPeso: %.2f", iatl[i].peso);
			printf("\nAltura: %.2f", iatl[i].altura);
			printf("\nTipo sanguineo: %c", iatl[i].tipoSang);
			printf("\nSexo: %c", iatl[i].sexo);
		 	printf("\n==============================================");
		}
	}
	printf("\nPressione ENTER para continuar.");
	fgetc(stdin);
}


int main()
{
	int num, cadastro;
	while(true)
	{
		fflush(stdin);
		system("cls");
	 	printf("\n=============================================================\n");
		printf("1-Cadastrar atleta	2-Alterar atleta	3-Consultar atleta\n");
		printf("4-Cadastrar esporte	5-Alterar esporte	6-Fechar programa\n");
		printf("=============================================================\n");
		scanf("%d", &num);
		system("cls");
		
		switch(num)
		{
			case 1: CadastrarAtleta(); cadastro = 1; break;
			case 2: AlterarAtleta(); break;
			case 3: ConsultarAtleta(); break;
			case 4: CadastrarEsporte(); cadastro = 1; break;
			case 5: AlterarEsporte(); break;
			case 6: return 0; break;
		}
		
		if(cadastro == 1)
		{
			system("cls");
			fflush(stdin);
		 	printf("==============================================");
		 	printf("\nCadastro realizado com sucesso!");
		 	printf("\nPressione ENTER para continuar.");
		 	printf("\n==============================================\n");
		 	cadastro = 0;
		 	fgetc(stdin);
		}
	}
}
