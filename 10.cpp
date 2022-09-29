#include<stdio.h>
int main(){
int numerador = -1;
float resposta = 0;
for (int denominador = 1; denominador <= 50; denominador++){
    numerador = numerador + 2;
    resposta = resposta + (numerador / denominador);
    
}

printf("\n%f", resposta);

return 0;
}

