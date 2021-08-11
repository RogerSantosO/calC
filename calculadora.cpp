#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float nmr1=0, nmr2=0, resultado=0;
	int op=0, volt=0;
	
	{
	
	printf("\tOlá,Bem vindo à calculadora! \n");
}
	do
	{
	
	refaz:
	
	printf("\t Digite o número referente à operação que você deseja fazer:\n\t 1 SOMA \n\t 2 SUBTRAÇÃO \n\t 3 MULTIPLICAÇÃO \n\t 4 DIVISÃO \n");
	scanf("%d", &op);
	
	if (op !=1 && op !=2 && op !=3 && op !=4){
		printf("\n\tA opção escolhida não é compatível. Porfavor, escolha dentre as operações exibidas a seguir: \n\n\n");	 
		goto refaz;
	}
	
	printf("\n>Digite o primeiro número: \n");
	scanf("%f", &nmr1);
	
	printf("\n>Digite o segundo número: \n");
	scanf("%f", &nmr2);
	
	if (op == 1){
		
		
		resultado = nmr1 + nmr2;
		
		printf("\n\t O resultado da soma é: %0.2f \n", resultado);
			
	}
	if (op == 2){
		
		
		resultado = nmr1 - nmr2;
		
		printf("\n\t O resultado da subtracao é: %0.2f \n", resultado);
		
	}
	if (op == 3){
		
		
		resultado = nmr1 * nmr2;
		
		printf("\n\t O resultado da multiplicacao é: %0.2f \n", resultado);
		
	}
	if (op == 4){
		
		resultado = nmr1 / nmr2;
		
		if(nmr2 == 0){
			printf("\n\t A divisão por 0 é uma operação inválida");
		}
		
		else{
		
		printf("\n\t O resultado da divisão e: %0.2f", resultado);
	
	}
	}
	
		
	{
	
		printf("\n\t Digite 1, se você deseja fazer outra operação: \n");
		scanf("%d", &volt);
	}
	

	} while(volt == 1);

		
	return 0;

}
