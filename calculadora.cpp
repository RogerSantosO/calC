#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float nmr1=0, nmr2=0, resultado=0;
	int op=0, volt=0;
	
	{
	
	printf("\tOl�,Bem vindo � calculadora! \n");
}
	do
	{
	
	refaz:
	
	printf("\t Digite o n�mero referente � opera��o que voc� deseja fazer:\n\t 1 SOMA \n\t 2 SUBTRA��O \n\t 3 MULTIPLICA��O \n\t 4 DIVIS�O \n");
	scanf("%d", &op);
	
	if (op !=1 && op !=2 && op !=3 && op !=4){
		printf("\n\tA op��o escolhida n�o � compat�vel. Porfavor, escolha dentre as opera��es exibidas a seguir: \n\n\n");	 
		goto refaz;
	}
	
	printf("\n>Digite o primeiro n�mero: \n");
	scanf("%f", &nmr1);
	
	printf("\n>Digite o segundo n�mero: \n");
	scanf("%f", &nmr2);
	
	if (op == 1){
		
		
		resultado = nmr1 + nmr2;
		
		printf("\n\t O resultado da soma �: %0.2f \n", resultado);
			
	}
	if (op == 2){
		
		
		resultado = nmr1 - nmr2;
		
		printf("\n\t O resultado da subtracao �: %0.2f \n", resultado);
		
	}
	if (op == 3){
		
		
		resultado = nmr1 * nmr2;
		
		printf("\n\t O resultado da multiplicacao �: %0.2f \n", resultado);
		
	}
	if (op == 4){
		
		resultado = nmr1 / nmr2;
		
		if(nmr2 == 0){
			printf("\n\t A divis�o por 0 � uma opera��o inv�lida");
		}
		
		else{
		
		printf("\n\t O resultado da divis�o e: %0.2f", resultado);
	
	}
	}
	
		
	{
	
		printf("\n\t Digite 1, se voc� deseja fazer outra opera��o: \n");
		scanf("%d", &volt);
	}
	

	} while(volt == 1);

		
	return 0;

}
