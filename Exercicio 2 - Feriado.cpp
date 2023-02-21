#include <stdio.h>
#include <stdlib.h>

int idade;
int main () {
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("\nVoce e maior de idade, sendo considerado um adulto");
	}
	
	else 
		printf("\nVoce ainda e menor de idade, nao sendo considerado um adulto");
	
	
	return 0;
}