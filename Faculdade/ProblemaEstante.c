#include <stdio.h>
#include <locale.h>
 
void Estante(int parede, int est1, int est2)
{
    int qtd_est1 = 0, qtd_est2 = 0, min = parede, inicial = parede;
    int p = parede/est1, q = 0, tira=parede%est1;
    
    qtd_est1=p;
    qtd_est2=q;
    min=tira;
      
    while (parede >= est2) 
	{
        q += 1;
        parede = parede - est2;
        
        p = parede / est1;
        tira = parede % est1;
 
        if (tira <= min) 
		{
            qtd_est1 = p;
            qtd_est2 = q;
            min = tira;
        }
    }
 
 	printf("Tamanho total: %dm\nEstantes de %dm: %d \nEstantes de %dm: %d \nEspaço de sobra: %dm\n\n", inicial, est1, qtd_est1, est2, qtd_est2, min);
 	
}
 
 
int main()
{
	setlocale(LC_ALL, "");
	
    int parede = 30, est1 = 3, est2 = 9;
    Estante(parede, est1, est2);
 
    parede = 43, est1 = 2, est2 = 10;
    Estante(parede, est1, est2);
    
    return 0;
}
