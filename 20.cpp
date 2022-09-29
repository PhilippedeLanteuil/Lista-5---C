#include <stdio.h>

#include <stdlib.h>

int main()

{

   //CRIAR VARS

   int i, n, cont, cont2, primo;

   //PROCESSAR DADOS

   printf("\n\n INFORME O VALOR: ");
   scanf("%d", &n);
   primo=0;
   for (cont = 2; cont <= n; cont++) {
   	for(cont2 = 2; cont2 <=cont/2; cont2++){
	
	       if (cont % cont2 == 0) {
       primo++;
       break;
    }
    else{
    	primo=0;
	}
}
     if(primo==0){
	 printf("%d\n", cont);
	 }
}
     return 0;
    }


