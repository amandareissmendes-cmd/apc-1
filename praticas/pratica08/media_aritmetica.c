#include <stdio.h>
int main () {

int vetor [10];
int soma = 0;
float media;


for(int i = 0; i < 10; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &vetor[i]);

    soma += vetor[i];
}

media = soma / 10.0;

printf("Media aritmetica: %2f\n", media);


    return 0;
}