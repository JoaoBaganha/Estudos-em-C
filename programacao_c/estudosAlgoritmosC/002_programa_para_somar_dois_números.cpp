#include <stdio.h>

int main (){
	int numerA, numerB, numerT;
	
	
	printf("Insira o primeiro dado: "); //indicando para o usuário onde colocar o primeiro número da soma
	scanf("%d", &numerA);
	printf("Insira o segundo dado:"); //indicando para o usuário onde vai entrar o segundo número
	scanf("%d", &numerB);
	
	numerT = numerA + numerB; //operação da soma
	printf("=====================================================================================================\n");//mostrando o resultado da soma para o usuário
	printf("Resultado da soma: %d\n", numerT);
	printf("=====================================================================================================\n");//mostrando o resultado da soma para o usuário
	
	
	
}
