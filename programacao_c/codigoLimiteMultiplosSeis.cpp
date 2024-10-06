#include <stdio.h>

int main(){
	int limiteInferior, limiteSuperior, i;
		
	printf("Digite o limite inferior: ");
	scanf("%d", &limiteInferior);
	
	printf("Digite o limite superior: ");
	scanf("%d", &limiteSuperior);

	for(i = limiteInferior; i <= limiteSuperior; i++ ){
		if(i%6 == 0){
			printf(": %d \n", i);
		}
	}
}
