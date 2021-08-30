/*#include <stdio.h>
#include <stdlib.h>

int soma(int n, int k, int somatoria)
{
    int resto;

    resto=n%10;

    if(resto==k)
    {
        somatoria++;
    }
    if(n>=0 && n<=9)
    {
        return somatoria;
    }
    n=n/10;
    soma(n, k, somatoria);
}

int main()
{
    int N, K, somatoria;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Digite o valor de K: ");
    scanf("%d", &K);

    somatoria = soma(N, K, 0);

    printf("\n--------------\nNumero de repeticoes: %d\n--------------\n", somatoria);

    return 0;
}
*/
