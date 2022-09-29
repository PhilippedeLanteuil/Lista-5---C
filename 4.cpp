#include <stdio.h>

int main(){
	int i, num, dentro=0, fora=0;
	for(i=0;i<10;i++){
		printf("\nInsira um numero: ");
		scanf("%d", &num);
			if(num>=10 && num<=20){
			dentro++;
		}else{
			fora++;
		}
	}
	printf("\nNumeros dentro do intervalo |10,20|: %d", dentro);
	printf("\nNumeros fora do intervalo |10,20|: %d", fora);
}
