#include <stdio.h> 
int main () {

    int idade;
    printf("Escreva sua idade:" );
    scanf ("%i", &idade);

    int eh_maior_que_0_anos= idade >=0;
    int eh_menor_que_12_anos= idade <= 12;

    if(eh_maior_que_0_anos && eh_menor_que_12_anos) {
        printf("Com %i anos voce eh criança\n");
    

    }

    int eh_maior_que_12_anos= idade >=12;
    int eh_menor_que_18_anos= idade <=18;
    if (eh_maior_que_12_anos && eh_menor_que_18_anos) {
        printf("Com %i anos voce eh adolescente\n");
    }

    int eh_maior_que_18_anos= idade >=18;
    int eh_menor_que_65_anos= idade<= 65;

    if (eh_maior_que_18_anos && eh_menor_que_65_anos){
        printf("Com %i anos voce eh adulto\n");

    } 
     int eh_maior_que_65_anos= idade>=65;
     if (eh_maior_que_65_anos){ 

        printf ("Com %i anos, voce eh idoso\n");
     }
    




    return 0;
}