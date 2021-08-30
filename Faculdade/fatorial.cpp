#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n=1, k, c, d;
    
    while((n>=0) && (n<=12))
    {
        scanf("%d", &n);
        for(c=n-1; c>=1; c--)
        {
        	d=n*c;
            k+=d;
        }
        printf("%d\n", k);
    }

    return 0;
}
