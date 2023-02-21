#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade:");
    scanf("%d", &idade );

   if (idade >= 18 && (strcmp(nome, "Joao") == 0 || strcmp(nome, "Maria") == 0)) {
        printf( "Voce inseriu o nome correto e e maior de idade.\n", nome);
	} else {
        printf("\nVoce inseriu um nome incorreto e ainda e menor de idade", nome);
    }
		

    return 0;
}
