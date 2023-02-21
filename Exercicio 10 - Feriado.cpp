#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	float renda, idade;
	
	printf("Digite a sua renda mensal:");
	scanf("%f", &renda);
	
	printf("Digite a sua idade:");
	scanf("%f", &idade);
	
	if (renda <= 1500 && idade > 18){
		printf("Parabens, voce e elegivel para receber o beneficio!");
	}
	else 
		printf("Infelizmente, voce nao e elegivel para receber o beneficio.");
}