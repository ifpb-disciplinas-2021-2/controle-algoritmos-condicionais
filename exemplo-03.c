// um número inteiro é positivo, negativo ou neutro
#include <stdio.h>
int main(){
    // ler o número inteiro
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    // número positivo -> se for maior que zero
    if (numero > 0){
        printf("O número é positivo \n");
    }
    // número negativo -> se for menor que zero
    if (numero < 0){
        printf("O número é negativo \n");
    }
    // número neutro -> se for igual a zero
    if (numero == 0){
        printf("O número é neutro \n");
    }
    return 0;
}