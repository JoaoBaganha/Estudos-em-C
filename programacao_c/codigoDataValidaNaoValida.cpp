#include <stdio.h>

int main (){
	int data, dia, mes, ano;
	
	printf("Digite uma data no formato DDMMAA: ");
	scanf("%d", &data);
	
	// 1_ 5_ 0_ 8_ 2_ 0_ 0_ 4_
	//  8  7  6  5  4  3  2  1	
	//  1  0  0  0  0  0  0  0	
	
		
	ano = data%10000;
	mes = (data%1000000 - ano) / 10000;
	dia = (data - (data%1000000)) / 1000000;
	
	printf("Data: %d / %d / %d \n", dia, mes, ano);
	
	if ( dia > 31 || dia < 1 || mes > 12 || mes < 1 || ano < 0  ) {
		printf("Data invalidada");
		
	} else if (dia > 30 && ( mes == 4 || mes == 6 || mes == 9 || mes == 11 )) {
		printf("Data invalidada");

	} else if (dia > 29 && mes == 2 && (ano%4 != 0)){
		printf("Data invalidada");

	} else{
		printf("Data ADEQUADA");

	}
	
	
}
