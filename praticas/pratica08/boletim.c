#include <stdio.h>
int main () {

    float notas[10][2];
    float media;



    for(int i = 0; i< 10; i++) {
        printf("\nAluno &d\n", i +1);

        printf("Digite a primeira nota: ");
        scanf("%f", &notas[i][0]);

        printf("Digite a segunda nota: ");
        scanf("%f", &notas[i][1]);

    
    }

    printf("\n-------BOLETIM-------\n");

    for(int i = 0; i < 10; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;
        printf("Aluno %d -> Media: %.2f\n", i + 1, media);
    }





    return 0;
}