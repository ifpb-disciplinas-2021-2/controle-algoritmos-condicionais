/*
Escreva um algoritmo em linguagem C que leia uma opção de menu do usuário
*/
#include <stdio.h>
int main(){
    int opcao;
    printf("[1] Cadastrar cliente\n" 
           "[2] Sair\n"
           "Digite sua escolha: "); 
    scanf("%i", &opcao);
    switch (opcao){ // int ou char
        case 1: printf("Cadastrando os clientes \n"); break;
        case 2: printf("Sair \n"); break;
        default: printf("Opção inválida!\n");
    }
    return 0; 
}