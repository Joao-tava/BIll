//Crie um programa que leia dois números inteiros e mostre o maior
//entre eles.
#include <stdio.h>
int main(){
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d" , &n1);
    printf("Digite um numero: ");
    scanf("%d" , &n2);
    if(n1==n2){
        printf("Os numero eh igual" );
    }else if(n1>n2){
        printf("O numero maior eh: %d" , n1 );
    } else {
        printf("O numero maior eh: %d" , n2 );
    }

}