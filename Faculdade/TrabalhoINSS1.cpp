/*  Trabalho de Algoritmos e Lógica de Programação I
Nome: Marcel Fernandes de Mattos
Prontuário: 3001806 */

#include<stdio.h>
int main()
{
	int dependentes, n=1, a1=0, a2=0, a3=0, a4=0, a5=0;
	float salario=1, media, sal_media=0, dep_media=0, dep_m1, red_aliquota, inss=0, ded_imp, base=0, aliquota=0, IR=0, med_IR=0;
	while(salario>0)
	{
		printf("Digite seu salario:\n");
		scanf("%f", &salario);
		
		if(salario>0)
		{
			sal_media += salario;	//calculo da media de salarios
			media = sal_media/n;	//calculo da media de salarios
			
			printf("Digite o numero de dependentes:\n");
			scanf("%d", &dependentes);
			
			dep_media += dependentes;	//media de dependentes
			dep_m1 = dep_media/n;	//media de dependentes
			
				if(salario<=1751.81)	//calculo do inss
				{
					red_aliquota=salario*0.08;
				}
				else if((salario>=1751.82) && (salario<=2919.72))
				{
					red_aliquota=salario*0.09;
				}
				else if((salario>=2919.73) && (salario<=5839.45))
				{
					red_aliquota=salario*0.11;
				}
				else
				{
					red_aliquota=5839.45;
				}
				
				inss = red_aliquota;	//inss
			
				
				base = salario-inss-(dependentes*189.59);	//base de calculo
				
			
				if(base<=1903.98)	//calculo imposto de renda
				{
					ded_imp=0;
					aliquota=0;
					a1++;
				}
				else if((base>=1903.99) && (base<=2826.65))
				{
					ded_imp= 142.80;
					aliquota=0.075;
					a2++;
				}
				else if((base>=2826.66) && (base<=3751.05))
				{
					ded_imp= 354.80;
					aliquota=0.15;
					a3++;
				}
				else if((base>=3751.06) && (base<=4664.68))
				{
					ded_imp= 636.13;
					aliquota=0.225;
					a4++;
				}
				else
				{
					ded_imp= 869.36;
					aliquota=0.275;
					a5++;
				}
				
				IR = (base * aliquota)-ded_imp;		//calculo do IR
				med_IR = IR/n;		//calculo da media dos IR's
			
			printf("\nSeu salario e de R$%.2f e possui %d dependente(s)\n\nA media de salarios e:\n%.2f\nA media de dependentes e:\n%.2f\n\nO INSS e:\n%.2f\n\nO imposto e:\n%.2f\n\nA media do imposto e:\n%.2f\n\n", salario, dependentes, media, dep_m1, inss, IR, med_IR);
			printf("Existem:\n%d funcionarios abaixo de R$ 1903.98\n%d funcionarios entre R$ 1903.99 e R$ 2826.65\n%d funcionarios entre R$ 2826.66 e R$ 3751.05\n%d funcionarios entre R$ 3751.06 e R$ 4664.68\n%d funcionarios acima de R$ 4664.68\n\n", a1, a2, a3, a4, a5);
			n++;	//adição para calculo das médias
		}
	}
	
	printf("\nSalario invalido, encerrando o programa.");
	return 0;
}
