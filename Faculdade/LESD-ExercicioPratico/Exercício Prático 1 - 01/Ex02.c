/*#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int soma(int *v1, int i)
{
    int somatoria=0;
    if(i<MAX)
    {
        somatoria = v1[i];
        i++;
        return somatoria+=soma(v1, i);
    }
    return 0;
}
int main()
{
    int vet1[MAX], somatoria, i, *v1;

    for(i=0; i<MAX; i++)
    {
        printf("Digite o valor de vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }

    v1 = vet1;

    somatoria = soma(v1, 0);

    printf("\n--------------\nSoma dos vetores: %d\n--------------\n", somatoria);

    return 0;
}*/

