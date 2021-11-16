// um número inteiro é positivo, negativo ou neutro
#include <stdio.h>
int main(){
    // ler o número inteiro
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero > 0){ // número positivo -> se for maior que zero
        printf("O número é positivo \n");
    } else if (numero < 0){ // número negativo -> se for menor que zero
        printf("O número é negativo \n");
    } else{ // número neutro -> se for igual a zero
        printf("O número é neutro \n");
    }
    return 0;
}