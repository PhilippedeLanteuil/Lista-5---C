#include <stdio.h>
int main (){
	float a, b, c, produto, soma, media;
	
	do {
		printf ("Digite tres valores reais:\n");
		scanf ("%f%f%f", &a, &b, &c);
		
		produto=a*b*c;
		soma= a+b+c;
		media= (a+b+c)/3;
		
		printf ("Sua soma: %f\n", soma); 
		printf ("Seu produto: %f\n", produto);
		printf ("Sua media %f\n", media);
		
		if (a>b && b>c && a>c){
			break;
		}
		
	} while (a<b && b<c && a<c);
	
	return 0;
}
