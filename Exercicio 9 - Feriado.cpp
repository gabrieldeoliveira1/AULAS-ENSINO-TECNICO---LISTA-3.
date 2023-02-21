#include <stdio.h>
#include <stdlib.h>

int num, num2, num3;
	int main () {
		printf("Digite um numero:");
		scanf("%d", &num);
		printf("Digite um segundo numero:");
		scanf("%d", &num2);
		printf("Digite um terceiro numero:");
		scanf("%d", &num3);
		
			if(num == num2, num3 == num ){
			printf("\nTodos os numeros sao iguais!");
			
			}else if (num > num2 && num > num3){
				printf("O numero 1 e o maior!");
	  		}else if (num2 > num && num2 > num3){
	  			printf("O numero 2 e o maior!");
			}else if (num3 > num && num3 > num2){
				printf("O numero 3 e o maior!");
			}
			
			if (num < num2 && num < num3) {
       			printf("\nE o numero 1 e o menor!");
    		} else if (num2 < num && num2 < num3) {
       			printf("\nE o numero 2 e o menor!");
    		} else {
        		printf("\nE o numero 3 e o menor!");
    		}

	}