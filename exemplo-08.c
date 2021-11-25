/*
Escrever um algoritmo em linguagem C que leia um número inteiro de 1 a 5, 
e escreva-o por extenso.
 1 -> "um"
 2 -> "dois"
*/
#include <stdio.h>
int main(){
    //número inteiro
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    //escreva-o por extenso.
    switch (numero){
        case 1: printf("um\n"); break;
        case 2: printf("dois\n"); break;
        case 3: printf("três\n"); break; 
        case 4: printf("quatro\n"); break;
        case 5: printf("cinco\n"); break;
        default: printf("o número informado não faz parte do intervalo de 1 a 5\n");
    }
    // if(numero == 1){
    //     printf("um");
    // }
    // if(numero == 2){
    //     printf("dois");
    // }
    // if(numero == 3){
    //     printf("três");
    // }
    // if(numero == 4){
    //     printf("quatro");
    // }
    // if(numero == 5){
    //     printf("cinco");
    // }
    return 0;
}