#include <stdio.h>
#include <math.h>

float Raio, Area;
const float Pi = 3.14;
int main(){

	printf("Digite o valor do raio da circunferencia: ");
	scanf("%f", &Raio);
	
	Area = Pi*pow(Raio, 2);
	printf("Area da circunferencia: %f", Area);
	
}
