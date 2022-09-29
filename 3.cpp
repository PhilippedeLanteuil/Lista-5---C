#include <stdio.h>

int main(){
	int i, num, par=0, impar=0;
	for(i=0;i<10;i++){
		printf("\nInsira um numero: ");
		scanf("%d", &num);
		if(num%2==0){
			par++;
		}else{
			impar++;
		}
	}
	printf("\nNumeros pares: %d", par);
	printf("\nNumeros impares: %d", impar);
}
