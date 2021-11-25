/*
Escreva um algoritmo em linguagem C que leia um caracter minusculo e verifique se 
ele é uma vogal ou consoante. Podem considerar que serão informadas apenas caracteres do alfabeto.
*/
#include <stdio.h>
int main(){
    //leia um caracter minusculo
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    //verifique se ele é uma vogal ou consoante (a, e, i, o, u)
    switch (letra){
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': printf("vogal \n"); break;
        default: printf("consoante\n");
    }
    // switch (letra){
    //     case 'a': printf("vogal \n"); break;
    //     case 'e': printf("vogal \n"); break;
    //     case 'i': printf("vogal \n"); break;
    //     case 'o': printf("vogal \n"); break;
    //     case 'u': printf("vogal \n"); break;
    //     default: printf("consoante\n");
    // }
    return 0;
}