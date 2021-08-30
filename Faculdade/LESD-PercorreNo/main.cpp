#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct arv
{
    char info;
    struct arv* esq;
    struct arv* dir;
};
typedef struct arv Arv;



Arv *criaNo(char info, arv* esq, arv* dir)
{
    Arv *n = (Arv *) malloc(sizeof(Arv));
    if(n==NULL)
    {
        printf("Erro de memoria");
        exit(0);
    }
    n->info = info;
    n->esq = esq;
    n->dir = dir;
    return n;
}

Arv *criaArv()
{
    Arv *d = criaNo('d', NULL, NULL);
    Arv *e = criaNo('e', NULL, NULL);
    Arv *f = criaNo('f', NULL, NULL);

    Arv *b = criaNo('b', d, NULL);
    Arv *c = criaNo('c', e, f);

    Arv *a = criaNo('a', b, c);

    return a;
}

void PosOrdem(Arv *no)
{
    if(no != NULL)
    {
        PosOrdem(no->esq);
        PosOrdem(no->dir);
        printf("%c, ", no->info);
    }
}

void Simetrica(Arv *no)
{
    if(no != NULL)
    {
        Simetrica(no->esq);
        printf("%c, ", no->info);
        Simetrica(no->dir);
    }
}


int altura(Arv* a)
{
	int ae = altura(a->esq);
    int ad = altura(a->dir);

	if(ae<ad)
	{
		return ad+1;
	}
	else
	{
		return ae+1;
	}
}


int main()
{
    long num;
    Arv *par = criaArv();
    //printf("Pos Ordem:\n");
    //PosOrdem(par);
    //printf("\n\nSimetrica:\n");
    //Simetrica(par);
	num = altura(par);
	printf("\n\nAltura: %.2lf", num);
}

