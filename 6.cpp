#include <stdio.h>

int main(){
	
	int numero = 0;
	
	printf("Insira um numero entre 12 e 20: ");
		scanf("%d", &numero);
		
	while (numero <12 || numero > 20) {
	
		printf("\nEntrada inv�lida! Insira um n�mero novamente: ");
		scanf("%d", &numero);
	}
	printf("%d", numero);
	

    return 0;
}
