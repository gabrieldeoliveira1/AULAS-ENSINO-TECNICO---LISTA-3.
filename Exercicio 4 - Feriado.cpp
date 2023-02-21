#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("\nA letra digitada e uma vogal");
    } else {
        printf("\nA letra digitada e uma consoante");
    }

    return 0;
}

	