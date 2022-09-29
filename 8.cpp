#include <stdio.h>
int main (){
	int num=1, cont;
	
	do {
		printf ("Digite um numero:");
		scanf ("%d", &num);
		cont = cont + num;
	} while (num!=0);
	
	printf ("A soma dos numeros eh: %d", cont);
	
	return 0;
}
