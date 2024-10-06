#include <stdio.h>

int main() {
    int vetor[3];
    int i;
    int media;
    int acumulador;

    for (i = 0; i < 3; i++) {
        printf("Informe valores para media: \n");
        scanf("%d", &vetor[i]);
        acumulador += vetor[i];
    }

    for (i = 0; i < 3; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("\nA media dos valores e: %d", (vetor[0] + vetor[1] + vetor[2]) / 3);

    return 0;
}

