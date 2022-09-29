#include<stdio.h>
int main(){
	int num, maior, menor, i;
	for(i=0;i<15;i++) {
		
		printf("Digite o %do numero: ", i+1);
	scanf("%d",&num);
	
	if (i==0){
		maior=num;
		menor=num;
	}
	else if(num>maior) {
		maior=num;
	}
	else if(num<menor){
		menor=num;
	}
	}

printf("\nO maior numero eh: %d", maior);	
printf("\nO menor numero eh: %d", menor);	
	return 0;
}
