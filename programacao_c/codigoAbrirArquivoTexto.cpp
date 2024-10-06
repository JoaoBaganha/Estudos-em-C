#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int file_descriptor;

file_descriptor = open("C:\\Users\\bagan\\OneDrive - Associacao Cultural e Educacional do Para\\COMPUTAÇÃO\\programacao_erick\\arquivoSystemCallOpen.txt", O_RDWR);

    if (file_descriptor == -1) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Arquivo aberto com sucesso!\n");

    close(file_descriptor);

    return 0;
}

