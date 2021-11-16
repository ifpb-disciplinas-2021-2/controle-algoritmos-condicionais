#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    // operação aritmetica
    c = a + b; //adição
    c = a - b; //subtração
    c = a * b; //multiplicação
    c = a / b; //divisão
    c = a % b; //módulo (resto)
    printf("O valor de C:%d \n", c);
    return 0;
}