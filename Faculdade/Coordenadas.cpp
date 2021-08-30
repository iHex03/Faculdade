#include<stdio.h>
int main()
{
	int k, n, m, x, y, c1, c2, cont, aux1, aux2;
	
	scanf("%d", &k);
	
	while(k!=0)
	{
		scanf("%d%d", &n, &m);
		for(cont=1; cont<=k; cont++)
		{
			scanf("%d%d", &x, &y);
			
			if((x==n)||(y==m))
			{
				printf("divisa\n");
			}
			
			else
			{
				if((x>n)&&(y>m))
				{
					printf("NE\n");
				}
				else if((x<n)&&(y>m))
				{
					printf("NO\n");
				}
				else if((x>n)&&(y<m))
				{
					printf("SE\n");
				}
				else if((x<n)&&(y<m))
				{
					printf("SO\n");
				}
			}
		}
		x==0;y==0;n==0;m==0;
		scanf("%d", &k);
	}
	return 0;
}
