/*
Que leia duas notas e determine se o aluno está aprovado, ou não.
Considere a média maior que 7, aprovado; menor que 4, reprovado;
e, maior que 4 e menor que 7, Final.
*/
#include <stdio.h>
int main(){
    //ler duas notas
    float nota1, nota2, media;
    printf("Digite  sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite  sua segunda nota: ");
    scanf("%f", &nota2);
    //calcular a média do aluno
    media = (nota1+nota2)/2;
    //verificar se foi aprovado
    if(media >= 7){ //aprovado
        printf("Parabéns, você foi aprovado. \n");
    } else if(media >= 4){ //final
        printf("Estude um pouco mais, você está na final! \n");
    } else{ //reprovado
        printf("Infelizmente, não conseguimos neste semestre. \n");
    }
    printf("Sua média foi: %.2f\n", media);
    
    return 0;
}