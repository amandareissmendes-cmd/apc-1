#include <stdio.h>
int main () {

int nota;

printf("Digite sua nota: ");
scanf("%d", &nota);
while(getchar()!= '\n');


while (nota < 0 || nota > 10) {
printf("Nota invalida! Tente novamente\n");
scanf("%d", &nota);
while(getchar()!= '\n');
}



    return 0;
}