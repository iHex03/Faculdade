#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitos=0;

int decrementa(int n, int num, int ant)
{	
    if(n!=0)
	{
		ant=n;
       	n=n/10;
      	decrementa(n, num, ant);
	}
   
   else if((ant%2)==1)
   {
   		return num=num-3;
   }
   else if((ant%2)==0)
   {
   		return num=num-4;
   }
   }

int main() 
{
    int m, num, ant;
    scanf("%d", &n);
    num = n;
    printf("%d", decrementa(n, num, ant));
}
