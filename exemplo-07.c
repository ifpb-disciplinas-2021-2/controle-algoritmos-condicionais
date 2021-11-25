#include <stdio.h>
int main(){
   int numero, retorno;
   printf("Digite um número: ");
   scanf("%i", &numero);
//    if(numero > 10){
//        retorno = 10;
//    }else{
//        retorno = 15;
//    }
   retorno = numero > 10 ? 10: 15; //operador ternário
   printf("O valor do retorno: %i \n", retorno);
   return 0; 
}
// int status = 0; //1 desligado