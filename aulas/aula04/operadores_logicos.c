#include <stdio.h>

int main () {
    int idade;

    printf("Entre com a sua idade:");
    scanf("%i", &idade);
    while ( getchar () != '\n');

    
    // && => 0 Falso E qualquer coisa = Sempre falso 
    printf ("Voce eh uma criança? %i\n", idade >= 0);
    // || => 1 Verdadeiro OU qaulquer coisa = Sempre Verdadeiro
    printf (" Voce tem prioriade para vacinar? %i\n", idade <= 6 || idade >= 60);

    // ! => NAO Verdadeiro = Falso, NAO Falso = Verdadeiro
    printf ("Voce naum pode votar? %i\n", ! (idade >= 16));

    return 0;

}