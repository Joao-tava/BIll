#include <stdio.h>
int main(){
    //Faça um programa que preencha uma matriz 2x2 com valores inteiros
    //fornecidos pelo usuário e mostre a matriz.
float matrix[4] ;
    for (int i = 1; i < 5; ++i) {
        printf("Digite o numero %d: " , i);
        scanf("%f" , &matrix[i]);
    }
    for (int i = 0; i < 4 ; ++i) {
        printf("%2.f\t" , matrix[i]) ;
    }
}