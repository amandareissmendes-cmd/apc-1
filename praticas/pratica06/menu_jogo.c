#include <stdio.h>
int main () {

int opcao;

printf("Digite sua opcao de 1 a 4: " );
scanf("%i",&opcao);

if (opcao==1) {
    printf("Novo jogo \n");

}

if (opcao==2) {
    printf("Continuar jogo\n");
}

if (opcao==3) {
    printf("Ver pontuacao \n");
}

if (opcao==4) {
    printf("Sair\n");
}

    return 0;
}