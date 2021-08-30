#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

	int i, dados[8], str, cha, con, wis, inte, dex, aux0, aux1, aux2, aux3, aux4, aux5, aux6, aux7;
	int strMod=0, chaMod=0, conMod=0, wisMod=0, inteMod=0, dexMod=0;
	int Mods[31]={0,-5,-4,-4,-3,-3,-2,-2,-1,-1,0,0,+1,+1,+2,+2,+3,+3,+4,+4,+5,+5,+6,+6,+7,+7,+8,+8,+9,+9,+10};

int main()
{

	srand(time(0));
	
	for(i=0; i<8; i++)
	{
		dados[i] = rand()%20+1;
		printf("Seu %d dado eh: %d\n\n", i+1, dados[i]);
		getch();
	}
	

	for(i=0; i<6; i++)
	{
		switch(i)
		{
			case 0: printf("Escolha um dado para str: \n"); scanf("%d", &str);
				switch(str)
				{
				case 1: str = dados[0]; aux0 ++; printf("\nSua str eh %d\n\n", str); break;
				case 2: str = dados[1]; aux1 ++; printf("\nSua str eh %d\n\n", str); break;
				case 3: str = dados[2]; aux2 ++; printf("\nSua str eh %d\n\n", str); break;
				case 4: str = dados[3]; aux3 ++; printf("\nSua str eh %d\n\n", str); break;
				case 5: str = dados[4]; aux4 ++; printf("\nSua str eh %d\n\n", str); break;
				case 6: str = dados[5]; aux5 ++; printf("\nSua str eh %d\n\n", str); break;
				case 7: str = dados[6]; aux6 ++; printf("\nSua str eh %d\n\n", str); break;
				case 8: str = dados[7]; aux7 ++; printf("\nSua str eh %d\n\n", str); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
			
			case 1: printf("Escolha um dado para cha: \n"); scanf("%d", &cha);
				switch(cha)
				{
				case 1: cha = dados[0];	aux0 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 2: cha = dados[1]; aux1 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 3: cha = dados[2]; aux2 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 4: cha = dados[3]; aux3 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 5: cha = dados[4]; aux4 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 6: cha = dados[5]; aux5 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 7: cha = dados[6]; aux6 ++; printf("\nSua cha eh %d\n\n", cha); break;
				case 8: cha = dados[7]; aux7 ++; printf("\nSua cha eh %d\n\n", cha); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 2: printf("Escolha um dado para con: \n"); scanf("%d", &con);
				switch(con)
				{
				case 1: con = dados[0]; aux0 ++; printf("\nSua con eh %d\n\n", con); break;
				case 2: con = dados[1]; aux1 ++; printf("\nSua con eh %d\n\n", con); break;
				case 3: con = dados[2]; aux2 ++; printf("\nSua con eh %d\n\n", con); break;
				case 4: con = dados[3]; aux3 ++; printf("\nSua con eh %d\n\n", con); break;
				case 5: con = dados[4]; aux4 ++; printf("\nSua con eh %d\n\n", con); break;
				case 6: con = dados[5]; aux5 ++; printf("\nSua con eh %d\n\n", con); break;
				case 7: con = dados[6]; aux6 ++; printf("\nSua con eh %d\n\n", con); break;
				case 8: con = dados[7]; aux7 ++; printf("\nSua con eh %d\n\n", con); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 3: printf("Escolha um dado para wis: \n"); scanf("%d", &wis);
				switch(wis)
				{
				case 1: wis = dados[0]; aux0 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 2: wis = dados[1]; aux1 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 3: wis = dados[2]; aux2 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 4: wis = dados[3]; aux3 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 5: wis = dados[4]; aux4 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 6: wis = dados[5]; aux5 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 7: wis = dados[6]; aux6 ++; printf("\nSua wis eh %d\n\n", wis); break;
				case 8: wis = dados[7]; aux7 ++; printf("\nSua wis eh %d\n\n", wis); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 4: printf("Escolha um dado para inte: \n"); scanf("%d", &inte);
				switch(inte)
				{
				case 1: inte = dados[0]; aux0 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 2: inte = dados[1]; aux1 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 3: inte = dados[2]; aux2 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 4: inte = dados[3]; aux3 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 5: inte = dados[4]; aux4 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 6: inte = dados[5]; aux5 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 7: inte = dados[6]; aux6 ++; printf("\nSua inte eh %d\n\n", inte); break;
				case 8: inte = dados[7]; aux7 ++; printf("\nSua inte eh %d\n\n", inte); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
				
			case 5: printf("Escolha um dado para dex: \n"); scanf("%d", &dex);
				switch(dex)
				{
				case 1: dex = dados[0]; aux0 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 2: dex = dados[1]; aux1 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 3: dex = dados[2]; aux2 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 4: dex = dados[3]; aux3 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 5: dex = dados[4]; aux4 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 6: dex = dados[5]; aux5 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 7: dex = dados[6]; aux6 ++; printf("\nSua dex eh %d\n\n", dex); break;
				case 8: dex = dados[7]; aux7 ++; printf("\nSua dex eh %d\n\n", dex); break;
				default: printf("\nFaz direito carai\n"); return 0;
				} break;
		}
	}
	
	if(((aux0>1)||(aux1>1)||(aux2>1)||(aux3>1)||(aux4>1)||(aux5>1)||(aux6>1)||(aux7>1)))
	{
		printf("Usou o mesmo dado, vai toma no cu\n");
		return 0;
	}
	
	else
	{
		strMod = Mods[str];
		chaMod = Mods[cha];
		conMod = Mods[con];
		wisMod = Mods[wis];
		inteMod = Mods[inte];
		dexMod = Mods[dex];
		
		
		printf("Seus stats sao:\n\nStr: %d + (%d)\nCha: %d + (%d)\nCon: %d + (%d)\nWis: %d + (%d)\nInt: %d + (%d)\nDex: %d + (%d)\n", 
		str, strMod, cha, chaMod, con, conMod, wis, wisMod, inte, inteMod, dex, dexMod);
	}
	
	
	
	return 0;
}
