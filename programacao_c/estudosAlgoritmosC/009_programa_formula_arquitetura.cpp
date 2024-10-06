#include <stdio.h>

int main(){
	float h, c, i;
	
	printf("escreva o valor da altura: ");
	scanf("%f", &h);
	
	printf("escreva o valor de i: ");
	scanf("%f", &i);
	
	c = ((h * 100)/i);
	
	printf("C tem valor de: %f", c);
}
