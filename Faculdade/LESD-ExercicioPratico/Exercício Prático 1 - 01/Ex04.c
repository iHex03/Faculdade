#include <stdio.h>
#include <stdlib.h>


void lerVetor(int n, int *p)
{
	int i;
    for(i=0; i<n; i++)
    {
        printf("Digite o vetor [%d]: ", i);
        scanf("%d", &p[i]);
    }
}


int main()
{
    int n, i;
	int *p;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

	p = (int*)malloc(n*sizeof(int));

    lerVetor(n,p);
    
    for(i=0; i<n; i++)
    {
        printf("\nVetor[%d] = ", i);
        printf("%d", *(p+i));
    }
    
	free(p);
	
    return 0;
}
