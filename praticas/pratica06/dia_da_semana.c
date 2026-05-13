#include <stdio.h>
int main () {

int numero;
printf("Digite um numero: ");
scanf ("%i", &numero);

if ( numero == 6 || numero == 7 ) {
    printf("Eh final de semana!\n ");

} else {
    printf("Eh dia util! \n");
}




    return 0;
}