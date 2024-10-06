#include  <stdio.h>
#include <stdlib.h>


void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main(){
	int pin1, pin2;
	printf("Escolha seu pin: ");
	scanf ("%d", &pin1);
	clear_screen();
	printf ("========================================================================\n");
	printf("Insira seu pin: ");
	scanf("%d", &pin2);
	if(pin1 == pin2){
		printf("Acesso garantido!\n");
	}else {
		printf("Acesso negado!\n");
	}

}

