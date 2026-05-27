# include <stdio.h>
int main () {

int numero;
int i;

printf("Digite um numero: ");
scanf("%d", &numero);

printf("Multiplos de &d de 1 a 100");

for (i = 1; i <= 100; i++) {
    if (i % numero == 0) {
        printf("%d\n", i);
    }
}



    return 0;
}