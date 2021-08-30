#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int max(int a, int b)
{
    return (a>b)?a:b;
}

int sub(char *str1, char *str2, int tam1, int tam2)
{
	int matrix[tam1+1][tam2+1];
    int i, j;

	for(i=0; i<=tam1; i++)
	{
    	for (j=0; j<=tam2; j++)
    	{
    		if (i==0||j==0)
        	matrix[i][j]=0;

    		else if(str1[i-1]==str2[j-1])
        	matrix[i][j]=matrix[i-1][j-1]+1;

    		else
        	matrix[i][j]=max(matrix[i-1][j], matrix[i][j-1]);
     	}
   }

   return matrix[tam1][tam2];
}


int main()
{
    setlocale(LC_ALL, "");
	
	char str1[]="plhashgaabatacliy";
    char str2[]="wkjashgaabatbwpkd";
    int tam1=strlen(str1);
    int tam2=strlen(str2);

    printf("A maior subsequência comum tem %d letras iguais.", sub(str1, str2, tam1, tam2));

    return 0;
}
