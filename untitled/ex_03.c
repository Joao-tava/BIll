 #include <stdio.h>
//Escreva um programa que calcule a média de três números inteiros.
int main(){
     float n1, n2, n3, media;
     printf("Digite um numero: ");
     scanf("%d" , &n1);
     printf("Digite um numero: ");
     scanf("%d" , &n2);
     printf("Digite um numero: ");
     scanf("%d" , &n3);

     media = (n1 + n2+ n3) / 3;
     printf("A media dos numeros eh: %2.f" , media);
return 0;
}