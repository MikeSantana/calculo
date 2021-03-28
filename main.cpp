#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	float valor_inicial, valor_5desconto;
	int resp,i;
	int meses=0;
do	{

	
	  printf ("\n\n Insira o Valor Inicial\n\n");
	  scanf("%f", &valor_inicial);
	  valor_5desconto=valor_inicial*0.95;
	  printf ("\n\n 5%% de desconto R$ %0.2f\n",valor_5desconto);
	  printf ("\n\n ____________________________________________\n");	
	float valor_50desconto;
	  valor_50desconto=valor_5desconto*0.50;
	  printf("\n\n ¿ VISTA 50%% DE ENTRADA R$ %0.2f E O RESTANTE AP”S A ENTREGA.\n", valor_50desconto);
	  printf ("\n\n ____________________________________________\n");
	float valor_40desconto;
	  valor_40desconto=valor_5desconto*0.40;
	  printf("\n\n¡ PRAZO COM DESCONTO 40%% DE ENTRADA R$ %0.2f E O RESTANTE PARCELADO EM 4X IGUAIS NO CHEQUE, NO ATO DO PEDIDO.\n",valor_40desconto);
	  printf ("\n\n ____________________________________________\n");
	float valor_40semdesconto,valor_parcelas,valor_montante,taxa,capital;
	  valor_40semdesconto=valor_inicial*0.40;
	  capital=valor_inicial*0.60;
	  
	  printf("\n\n¿ PRAZO 40%% DE ENTRADA R$ %0.2f E O RESTANTE PARCELADO\n",valor_40semdesconto);
	  
	 	for (i=1; i<=10; i++)
		 { 
		 	meses++;
	 	 	taxa=1.9;
	 	 	taxa=pow((1+(taxa/100)),meses);
      		valor_montante=capital*taxa;
      		valor_parcelas=valor_montante/meses;
      		
      
	  	printf("\nR$ %0.2f EM %dX\n",valor_parcelas,meses);
		}	
	  
	printf("\n NO CHEQUE OU BOLETO. TAXA DE 1,9%% AO M S\n");

  	printf ("\n\n ____________________________________________\n");
  	printf ("\nDigite 1 para continuar ou digite 2 para sair\n");
  	scanf("%d",&resp);
  	system("cls");
}
while(resp==1);
	  
	system ("pause");
	return 0;
}
