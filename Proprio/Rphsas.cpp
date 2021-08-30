#include <stdio.h>
#include <string.h>
#define MAX_STRING_LEN 12
int main()
{
	int vidaH, danoH, vidaE, danoE;
	char a[12], s[12];
	char choice;
	
	printf("digite o nome do heroi\n");
	scanf("%s", &s);
	printf("agora sua arma\n");
	scanf("%s", &a);
	printf("agora sua vida e seu dano\n");
	scanf("%d%d", &vidaH, &danoH);
	printf("voce se chama %s, equipado com %s que causa %d de dano, voce tem %d hitpoints", s, a, danoH, vidaH);
	printf("voce se depara com um esqueleto puto!\n");
	
	vidaE = 30;
	danoE = 3;
	while (true)
	{
		if (vidaH < 0)
		{
			printf("voce morreu!\n");
			return 0;
		}
		if (vidaE < 0)
		{
			printf("voce o derrotou!\n");
			return 0;
		}
		if (vidaE < 15)
		{
			printf("ele parece estar desistindo!\n");
		}
		printf("deseja atacar(A) ou fugir(F)?\n");
		scanf("%c", &choice);
		if (choice == 'F')
		{
			printf("voce fugiu para viver mais um dia!\n");
			return 0;
		}
		if (choice == 'A')
		{
			printf("voces trocam ataques!\n");
			vidaH = vidaH - danoE;
			vidaE = vidaE - danoH;
			printf("voce esta com %d de vida!\n", vidaH);
		}
	}
	
	

	
	return 0;
}
