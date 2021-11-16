// o valor de é maior que 10 e menor que 20
#include <stdio.h>
int main(){
    //operadores lógicos
    // E  &&
    // OU || 
    int a;
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    if((a > 10) || (a < 20))  { 
        printf("O valor digitado é maior que 10. \n");
        printf("O valor digitado é menor que 20. \n");
    }

    // if(a > 10){ //verdadeira
    //     if(a < 20){ //verdadeira
    //        printf("O valor digitado é maior que 10. \n");
    //        printf("O valor digitado é menor que 20. \n");
    //     }
    // }
    
    
    return 0;
}