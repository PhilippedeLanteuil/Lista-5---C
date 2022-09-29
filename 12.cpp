#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main()

{

   setlocale(LC_ALL,"PORTUGUESE");

   //CRIAR VARS

   int i, num, soma;

   //INICIALIZAR VARS

   num = soma = 0;

   //PROCESSAR DADOS

   printf("\n\n\t======================================");

   printf("\n\t|| VERIFICAR SE O NÚMERO É PERFEITO ||");

   printf("\n\t======================================\n");

   printf("\n\n INFORME O VALOR: ");

   fflush(stdin);

   scanf("%d", &num);

   //VALIDAR SE O NÚMERO É POSITIVO

   while(num <= 0)

   {

       printf("\n\n NÚMERO INVÁLIDO...INSIRA UM VALOR SUPERIOR A 0.");

       printf("\n\n\n INFORME O VALOR: ");

       fflush(stdin);

       scanf("%d", &num);

   }

   //VERIFICAR SE O NÚMERO É PERFEITO

   for(i=1; i<num; i++)

       if(num % i == 0)

           soma = soma + i;

   if(soma == num)

       printf("\n\n %d É UM NÚMERO PERFEITO...\n",num);

   else

       printf("\n\n %d NÃO É UM NÚMERO PERFEITO...\n",num);

   return 0;

}
