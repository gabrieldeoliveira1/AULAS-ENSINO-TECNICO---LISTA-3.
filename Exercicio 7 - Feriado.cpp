#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    if (strcmp (nome, "Joao") == 0 || strcmp (nome, "Maria") == 0) {
        printf("\n%s, voce inseriu um nome correto.", nome);
    
	} else {
        printf("\n%s, voce inseriu um nome incorreto.\n", nome);
    }

    return 0;
}
