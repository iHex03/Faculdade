#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

	int i, dados[8], str, cha, con, wis, inte, dex, aux;

int repet()		//Condições para evitar o uso de dados iguais
{
	if((((str==cha)||(str==con))||((str==wis)||(str==inte))))
	{
		printf("Nao use o mesmo dado");
	}
	else if((((str==dex)||(cha==con))||((cha==wis)||(cha==inte))))
	{
		printf("Nao use o mesmo dado");
	}
	else if((((cha==dex)||(con==wis))||((con==inte)||(con==dex))))
	{
		printf("Nao use o mesmo dado");
	}
	else if(((wis==inte)||(wis==dex)))
	{
		printf("Nao use o mesmo dado");
	}
	else if(inte==dex)
	{
		printf("Nao use o mesmo dado");
	}
	
	return 0;
}


int main()
{

	srand(time(0));
	
	for(i=0; i<8; i++)
	{
		dados[i] = rand()%20+1;			//Gerar numeros dos dados
		printf("Seu %d dado eh: %d\n\n", i, dados[i]);
		getch();
	}
	

	for(i=0; i<6; i++)
	{
		switch(i)			//Escolha dos dados e atribuição aos stats, switch dentro de switch
		{
			case 0: printf("Escolha um dado para str: \n"); scanf("%d", &str);
				switch(str)
				{
				case 0: str = dados[0]; printf("\nSua str eh %d\n\n", str); break;
				case 1: str = dados[1]; printf("\nSua str eh %d\n\n", str); break;
				case 2: str = dados[2]; printf("\nSua str eh %d\n\n", str); break;
				case 3: str = dados[3]; printf("\nSua str eh %d\n\n", str); break;
				case 4: str = dados[4]; printf("\nSua str eh %d\n\n", str); break;
				case 5: str = dados[5]; printf("\nSua str eh %d\n\n", str); break;
				case 6: str = dados[6]; printf("\nSua str eh %d\n\n", str); break;
				case 7: str = dados[7]; printf("\nSua str eh %d\n\n", str); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
			
			case 1: printf("Escolha um dado para cha: \n"); scanf("%d", &cha);
				switch(cha)
				{
				case 0: cha = dados[0];	printf("Sua cha eh %d\n\n", cha); break;
				case 1: cha = dados[1]; printf("Sua cha eh %d\n\n", cha); break;
				case 2: cha = dados[2]; printf("Sua cha eh %d\n\n", cha); break;
				case 3: cha = dados[3]; printf("Sua cha eh %d\n\n", cha); break;
				case 4: cha = dados[4]; printf("Sua cha eh %d\n\n", cha); break;
				case 5: cha = dados[5]; printf("Sua cha eh %d\n\n", cha); break;
				case 6: cha = dados[6]; printf("Sua cha eh %d\n\n", cha); break;
				case 7: cha = dados[7]; printf("Sua cha eh %d\n\n", cha); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 2: printf("Escolha um dado para con: \n"); scanf("%d", &con);
				switch(con)
				{
				case 0: con = dados[0]; printf("Sua con eh %d\n\n", con); break;
				case 1: con = dados[1]; printf("Sua con eh %d\n\n", con); break;
				case 2: con = dados[2]; printf("Sua con eh %d\n\n", con); break;
				case 3: con = dados[3]; printf("Sua con eh %d\n\n", con); break;
				case 4: con = dados[4]; printf("Sua con eh %d\n\n", con); break;
				case 5: con = dados[5]; printf("Sua con eh %d\n\n", con); break;
				case 6: con = dados[6]; printf("Sua con eh %d\n\n", con); break;
				case 7: con = dados[7]; printf("Sua con eh %d\n\n", con); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 3: printf("Escolha um dado para wis: \n"); scanf("%d", &wis);
				switch(wis)
				{
				case 0: wis = dados[0]; printf("Sua wis eh %d\n\n", wis); break;
				case 1: wis = dados[1]; printf("Sua wis eh %d\n\n", wis); break;
				case 2: wis = dados[2]; printf("Sua wis eh %d\n\n", wis); break;
				case 3: wis = dados[3]; printf("Sua wis eh %d\n\n", wis); break;
				case 4: wis = dados[4]; printf("Sua wis eh %d\n\n", wis); break;
				case 5: wis = dados[5]; printf("Sua wis eh %d\n\n", wis); break;
				case 6: wis = dados[6]; printf("Sua wis eh %d\n\n", wis); break;
				case 7: wis = dados[7]; printf("Sua wis eh %d\n\n", wis); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 4: printf("Escolha um dado para inte: \n"); scanf("%d", &inte);
				switch(inte)
				{
				case 0: inte = dados[0]; printf("Sua inte eh %d\n\n", inte); break;
				case 1: inte = dados[1]; printf("Sua inte eh %d\n\n", inte); break;
				case 2: inte = dados[2]; printf("Sua inte eh %d\n\n", inte); break;
				case 3: inte = dados[3]; printf("Sua inte eh %d\n\n", inte); break;
				case 4: inte = dados[4]; printf("Sua inte eh %d\n\n", inte); break;
				case 5: inte = dados[5]; printf("Sua inte eh %d\n\n", inte); break;
				case 6: inte = dados[6]; printf("Sua inte eh %d\n\n", inte); break;
				case 7: inte = dados[7]; printf("Sua inte eh %d\n\n", inte); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 5: printf("Escolha um dado para dex: \n"); scanf("%d", &dex);
				switch(dex)
				{
				case 0: dex = dados[0]; printf("Sua dex eh %d\n\n", dex); break;
				case 1: dex = dados[1]; printf("Sua dex eh %d\n\n", dex); break;
				case 2: dex = dados[2]; printf("Sua dex eh %d\n\n", dex); break;
				case 3: dex = dados[3]; printf("Sua dex eh %d\n\n", dex); break;
				case 4: dex = dados[4]; printf("Sua dex eh %d\n\n", dex); break;
				case 5: dex = dados[5]; printf("Sua dex eh %d\n\n", dex); break;
				case 6: dex = dados[6]; printf("Sua dex eh %d\n\n", dex); break;
				case 7: dex = dados[7]; printf("Sua dex eh %d\n\n", dex); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
		}
	}
	
	printf("Seus stats sao:\n\nStr: %d\nCha: %d\nCon: %d\nWis: %d\nInt: %d\nDex: %d\n pau no cu de quem ta lendo", str, cha, con, wis, inte, dex);
	
	return 0;
}
