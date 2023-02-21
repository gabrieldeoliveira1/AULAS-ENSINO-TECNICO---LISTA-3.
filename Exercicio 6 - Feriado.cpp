#include <stdio.h>
#include <stdlib.h>

int main () {
	int num;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("O valor digitado e par");
	}

	 else 
		printf("O valor digitado e impar");
		
		return 0;
}




	