#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {
	float massa, altura, IMC ;
	
	printf("Digite o valor da sua massa:");
	scanf("%f", &massa);
	
	printf("\nDigite o valor a da sua altura:");
	scanf("%f", &altura);
	
	 IMC = massa / (altura * altura);
	
	if ( IMC < 18.5){
		printf("\nVoce esta abaixo do peso ideal %0.2f", IMC);
	}else if (IMC >= 18.5 && IMC <= 25){
		printf("\nVoce esta dentro do peso ideal %0.2f", IMC);
	}else if (IMC >= 25 && IMC <= 30){
		printf("\nVoce apresenta o quadro de sobrepeso %0.2f", IMC);
	}else if (IMC >= 30 && IMC <= 35){
		printf("\nVoce apresenta o quadro de Obesidade I %0.2f", IMC);
	}else if (IMC >= 35 && IMC <= 40){
		printf("\nVoce apresenta o quadro de Obesidade II %0.2f", IMC);
	}else if (IMC >= 40){
		printf("\nVoce apresenta o quadro de Obesidade III %0.2f", IMC);
	}
		
}