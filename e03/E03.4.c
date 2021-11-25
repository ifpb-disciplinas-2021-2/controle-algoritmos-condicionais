/*
Escreva um programa em linguagem C que leia cinco números reais, calcule e exiba
quantos destes números lidos são maiores que 10.
Exemplo de saída: “Foram lidos 3 números maiores que 10”
*/
#include <stdio.h>
int main(){
    //leia cinco números reais
    float numero1, numero2, numero3, numero4, numero5;
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro número: ");
    scanf("%f", &numero3);
    printf("Digite o quarto número: ");
    scanf("%f", &numero4);
    printf("Digite o quinto número: ");
    scanf("%f", &numero5);
    //calcule
    int contador = 0;
    if(numero1 > 10){ // se numero1>10 15
        contador = contador +1;
    } 
    if(numero2 > 10){ //34
        contador = contador +1;
    }
    if(numero3 > 10){
        contador = contador +1;
    }
    if(numero4 > 10){
        contador = contador +1;
    }
    if(numero5 > 10){
        contador = contador +1;
    }
    //exiba quantos destes números lidos são maiores que 10.
    printf("Foram exibidos %d números maiores que 10.\n", contador);
    return 0;
}