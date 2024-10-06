#include <stdio.h>
#include <math.h>

// Variáveis que representam ponto A
//float x_1, y_1, distancia;
// Variáveis que representam ponto B
//float x_2, y_2;


int main(){
	float vetor_ponto[5];
	
	printf ("Insira a latitude do ponto A: ");
	scanf("%f", &vetor_ponto[0]);

	printf ("Insira a longitude do ponto A: ");
	scanf("%f", &vetor_ponto[1]);

	printf ("Insira a latitude do ponto B: ");
	scanf("%f", &vetor_ponto[2]);

	printf ("Insira a longitude do ponto B:");
	scanf("%f", &vetor_ponto[3]);
	
	vetor_ponto[4] = sqrt( pow((vetor_ponto[1] - vetor_ponto[0]), 2) + pow((vetor_ponto[3] - vetor_ponto[2]),2) );

printf("a distancia entre o ponto A e o ponto B: %f", vetor_ponto[4]);
}
