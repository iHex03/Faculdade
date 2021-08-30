#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int funcao(int num)
{
   if(num==0)
   {
        return 10;
   }
   else if(num==1)
   {
        return 11;
   }
   else if(num==2)
   {
        return 27;
   }
   else
   {
        return funcao(num - 2) - funcao(num - 3);
   }
}

int main()
{
    int num;

    while(scanf("%d", &num)!=EOF)
	{
        printf("%d\n", funcao(num));
    }
    
    return 0;
}
