#include<stdio.h>
int main()
{
	int a, b, c, aux1=0, aux2=0;
	scanf("%d%d%d", &a, &b, &c);
	
	if(((a-b)!=0)	&&	((a-c)!=0)	&&	((b-c)!=0))
	{
		aux1=a+b;
		aux2=a-b;
		
		if((((aux1+c)!=0)&&((aux1-c)!=0))&&(((aux2+c)!=0)&&((aux2-c)!=0)))
		{
			printf("N\n");
		}
		else
		{
			printf("S\n");
		}
	}
	
	else
	{
		printf("S\n");
	}
}
