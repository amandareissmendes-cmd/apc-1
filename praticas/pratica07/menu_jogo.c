#include <stdio.h>
int main () {

int opcao;

do {
printf("======MENU=====\n");
printf("1 - Novo jogo\n");
printf("2 - Continuar jogo\n");
printf("3 - Ver pontuacao\n");
printf("4 - Sair\n");

printf("Escolha uma opcao de 1 a 4: ");
scanf("%d", &opcao);

switch(opcao) {
    case 1: 
printf("Novo jogo iniciado\n");
break;

    case 2 :
    printf("Continuar jogo...\n");
    break;

    case 3 :
    printf("Mostrando pontuacao\n");
    break;

    case 4 :
    printf("Saindo do jogo...\n");
    break;

    default :
    printf("Opcao invalida!\n");
}


} while (opcao != 4); 

    return 0;
}