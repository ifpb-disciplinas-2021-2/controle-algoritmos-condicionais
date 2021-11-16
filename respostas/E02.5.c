/*
Escreva um programa que leia dois valores inteiros A e B, realizar a troca dos valores e
imprimir o resultado após a troca.
*/
#include <stdio.h>
int main(){
    // ler o valor a
    int a;
    int b;
    int auxiliar;
    printf("Digite o valor A: "); //exibir uma mensagem ao usuário
    scanf("%d",&a); //armazena um valor em uma variável
    // ler o valor b
    printf("Digite o valor B: ");
    scanf("%d", &b);
    // trocar os valores de a e b
    auxiliar = a;
    a = b;
    b = auxiliar;
    // imprimir os valores de a e b
    printf("O valor de A:%d e B:%d \n", a, b);
    return 0;
}