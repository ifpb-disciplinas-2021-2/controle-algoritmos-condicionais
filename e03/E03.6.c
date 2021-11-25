/*
Escreva um programa em linguagem C que recebe a dimensão dos três lados de um
triângulo. Inicialmente, o algoritmo deve verificar se os lados informados podem
formar um triângulo (a soma de dois lados não pode ser menor que o terceiro lado).
Caso seja possível formar um triângulo, o algoritmo deve indicar se o triângulo é
equilátero, isósceles ou escaleno. Considere que em um triângulo equilátero: todos os
lados iguais; isósceles: dois lados iguais; escaleno: todos os lados diferentes
*/
#include <stdio.h>
int main(){
    // recebe a dimensão dos três lados de um triângulo
    int a, b, c;
    printf("Digite os lados três do triângulo (separados por espaço): ");
    scanf("%d %d %d", &a, &b, &c);
    // verificar se os lados informados podem formar um triângulo
    //a + b > c (3, 4, 5) (5, 3, 4) (3, 5, 4)
    if ((a+b) >= c && (a+c) >= b && (b+c) >= a){ // é um triângulo
        // deve indicar se o triângulo é equilátero, isósceles ou escaleno
        if(a==b && a==c){ // equilátero: todos os lados iguais; 
            printf("triângulo equilátero\n");
        }else if(a==b || b==c || a==c){ // isósceles: dois lados iguais; 
            printf("triângulo isósceles\n");
        }else {
            printf("triângulo escaleno\n");
        }
    }else{ // (2, 2, 5)
        printf("Não formam um triângulo \n");
    }    
    return 0;
}