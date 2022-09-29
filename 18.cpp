#include <stdio.h>

#include <stdlib.h>

int main()

{

   //CRIAR VARS

   int i, n = 0;

   //PROCESSAR DADOS

   printf("\n\n INFORME O VALOR: ");

   fflush(stdin);

   scanf("%d", &n);

   printf("\n\n %d PRIMEIROS VALORES PARES..:\n",n);

   for(i=0; i<n*2; i++)

       if(i % 2 == 0)

           printf("\n%3d\n",i);

   printf("\n\n %d PRIMEIROS VALORES IMPARES:\n",n);

   for(i=0; i<n*2; i++)

       if(i % 2 == 1)

           printf("\n%3d\n",i);

   return 0;

}


