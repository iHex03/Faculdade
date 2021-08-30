#include<stdio.h>
int main()
{
	int n, lin, col, esp, aux;
	printf("Forneca a altura: ");
	scanf("%d", &n);
	
	for(lin=1, aux=n; lin<=aux; lin++)
	{
		for(esp=(n-1); esp>=1; esp--)
		{
			printf(" ");
		}
		
		for(col=lin; col>=1; col--)
		{
			printf("*");
		}
		printf("\n");
		n--;
	}
	
	return 0;
	
}
