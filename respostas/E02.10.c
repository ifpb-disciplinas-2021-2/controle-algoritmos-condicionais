/* UTF-8
Escreva um programa que leia o curso que o aluno está matriculado e mostre uma
mensagem de boas-vindas para ele, no seguinte formato:
O curso de Engenharia de Controle e Automação é um excelente curso.
*/
#include <stdio.h>
#include <locale.h>
int main(){
     setlocale(LC_ALL, "Portuguese");
    //ler o nome do curso
    char curso[50]; //String (texto) 
    printf("Digite o nome de seu curso: ");
    // scanf("%s",curso);
    gets(curso);
    //exibir uma mensagem de boas-vindas
    printf("O curso de %s é um excelente curso.\n", curso);
    return 0;
}