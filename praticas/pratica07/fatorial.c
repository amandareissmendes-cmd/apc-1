#include <stdio.h>
int main () {

int numero, i;
int fatorial = 1;

printf("Digite um numero positivo: ");
scanf("%d", &numero);

for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;
}

printf("O fatorial de %d eh %d\n", numero, fatorial);





    return 0;
}