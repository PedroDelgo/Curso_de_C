//Escrever um programa que solicita ao usuário um conjunto de 4 valores reais
//e verifica quantos estão acima da média(dois casa decimal).

#include<stdio.h>

int main(){
    int i=0;
    float vet[4];
    float soma = 0;
    int contador;

    for (i=0;i<4;i++){
        printf("Digite seus numeros: ");
        scanf("%f",&vet[i]);
        soma += vet[i];
    }
    soma = soma/4;
    for (i=0;i<4;i++){
        if (vet[i] >= soma ){
            contador++;
        }
    }
    printf("A media e igual a: %.2f\nE a quantidades de numeros acima da media sao: %d",soma,contador);
}

