#include <stdio.h>

float S;

float recursiva(int N)
{
	float numerador;
	if(N==0)
	{
		return S;
	}
	else
	{
		numerador = (N*N)+1;
		S += (numerador/N);
		recursiva(N-1);
	}
}

int main()
{
	int num;
	float soma;
	scanf("%d", &num);
	soma = recursiva(num);
	printf("%.2f", soma);
	return 0;
}
