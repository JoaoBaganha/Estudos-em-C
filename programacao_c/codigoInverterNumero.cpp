#include <stdio.h>

int main(){
	int numeroCdu, numeroUdc, centena, dezena, unidade;
	
	printf("digite o numero: ");
	scanf("%d", &numeroCdu); 
	
	unidade = numeroCdu%10;
	dezena = (numeroCdu%100 - unidade) / 10; 
	centena = (numeroCdu%1000 - numeroCdu%100) / 100;
	
	printf("numero invertido: %d%d%d", unidade, dezena, centena);
}
