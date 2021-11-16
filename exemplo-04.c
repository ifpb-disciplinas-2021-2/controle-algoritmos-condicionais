// um número inteiro é positivo, negativo ou neutro
#include <stdio.h>
int main(){
    // ler o número inteiro
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero > 0){ // número positivo -> se for maior que zero
        printf("O número é positivo \n");
    } else {
        printf("O número é negativo ou neutro \n");
    }
    return 0;
}