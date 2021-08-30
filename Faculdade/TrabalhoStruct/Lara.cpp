#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

char dir_atual[_MAX_PATH], *erro_teste;

//Estrutura "esporte"
typedef struct{
	int codigo, excluido, NumPart;
	char modalidade[51], resumo[281];
}Esporte;

typedef struct{
	int codigo, codModalidade, excluido, idade;
	char nome[60], sexo[15];
	int NumMedalhaOuro, NumMedalhaPrata, NumMedalhaBronze;
}Atleta;

void atrDir();

//Fun??o para adicionar esporte
void IncluiEsporte()
{
	
	int qtd, i;
	FILE *arq = fopen("Esporte.dat","a+b");//Abre o arquivo Esporte.dat
	Esporte esporte, aux[20];

	qtd = fread(aux, 20, sizeof(Esporte), arq);

	printf("C?digo: ");
	scanf("%d", &esporte.codigo);
	fflush(stdin);
	
	for(i =0; i< qtd; i++)
		while(esporte.codigo == aux[i].codigo){
			system("cls");
			printf("Este c?digo j? existe!\nDigite outro c?digo: ");
			scanf("%d", &esporte.codigo);
			fflush(stdin);
		}
	printf("Modalidade: ");
	fflush(stdin);
	fgets(esporte.modalidade,51, stdin);
	
	for( i = 0; i< qtd; i++){
		while(!strcmp(esporte.modalidade, aux[i].modalidade)){
				system("cls");
				printf("Esta modalidade j? est? cadastrada\nDigite outra: ");
				fgets(esporte.modalidade,51, stdin);
		}
	}
	printf("Numero de participantes por equipe: ");
	scanf("%d", &esporte.NumPart);
	printf("Insira um breve resumo do esporte(280 caracteres no m?ximo): ");
	fflush(stdin);
	fgets(esporte.resumo, 280, stdin);
	system("cls");
	printf("adicionado com Sucesso!\n");

	fwrite(&esporte, sizeof(Esporte), 1, arq);

	fclose(arq);
}
void ALteraEsporte()
{


}
void ExlcuiEsporte()
{
	printf("");
}
void IncluiAtleta()
{
	FILE *arq;
	Atleta atletas;

	arq = fopen("Atleta.dat","a");

	printf("C?digo: ");
	scanf("%d", &atletas.codigo);
	printf("C?digo da modalidade: ");
	scanf("%d", &atletas.codModalidade);
	printf("Nome:");
	fgets(atletas.nome,60, stdin);
	printf("idade: ");
	scanf("%d", &atletas.idade);
	printf("Sexo: ");
	scanf("%s", atletas.sexo);
	Sleep(5000);
}
void AlteraAtleta()
{
	printf("");
}
void ExcluiAtleta()
{
	printf("");
}
void ConsultaAtleta()
{
	printf("");
}

int main(){
	setlocale(LC_ALL, "");
	atrDir();
	int resp;

	while(1){
		printf("====================Menu===================\n");
		printf("1-Incluir um esporte\n2-Altera??o de esporte\n3-Exclus?o de esporte\n");
		printf("4-Incluir um atleta\n5-Altera??o na ficha do atleta\n");
		printf("6-Excluir um atleta\n7-Consultar atleta por esporte\n8-Encerrar programa\n");
		scanf("%d", &resp);//Sele??o das op??es

		system("cls");

		switch(resp){
			case 1:
				IncluiEsporte();
				break;
			case 2:
				ALteraEsporte();
				break;
			case 3:
				ExlcuiEsporte();
				break;
			case 4:
				IncluiAtleta();
				break;
			case 5:
				AlteraAtleta();
				break;
			case 6:
				ExcluiAtleta();
				break;
			case 7:
				ConsultaAtleta();
				break;
			case 8:
				return 0;
		}
	}
	return 0;
}

void atrDir()
{
	erro_teste=_getcwd(dir_atual, _MAX_PATH);
	
	if(erro_teste==NULL)
	{
		perror( "Erro na atribui??o do diret?rio atual" );
	}
	else
		printf("O endereco atual do aplicativo ? %s\n\n", dir_atual);	
}
