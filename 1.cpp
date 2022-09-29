#include <stdio.h>

int main(){

    int contador;

    printf("\nNumeros pares entre 0 e 100: ");

    for (contador = 0; contador <= 100; contador++) {

        if (contador % 2 == 0) {

            printf("\n%d", contador);

        }

    }


    return 0;

}
