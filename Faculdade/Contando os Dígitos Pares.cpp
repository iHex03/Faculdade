#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitos=0;

int Armstrong(int m, int aux, int soma, int cont, int num)
{
	while(aux!=0)
	{
		cont++;
		aux=aux/10;
	}
    
    if(aux==0 && soma!=0)
    {
        num = num + pow((soma%10), cont);
        soma=soma/10;
        num += Armstrong(m, aux, soma, cont, num);
    }
    
    return num;
}

int main() 
{
    int Arms, m, aux, soma, cont=0, num=0;
    scanf("%d", &m);
    aux=m;
    soma=m;
    Arms=Armstrong(m, aux, soma, cont, num);
    
    if(Arms==m)
    {
    	printf("Armstrong");
	}
	else
	{
		printf("soma: %d", Arms);
	}
}
