#include <stdio.h>
#include <stdlib.h>


int main () {
int num, num2;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	printf("\nDigite um segundo numero inteiro:");
	scanf("%d", &num2);
	
	if(num > num2){
		printf("\nO primeiro numero digitado e maior");
	}
	
	else
		printf("\nO segundo numero digitado e maior");
	
	
	}