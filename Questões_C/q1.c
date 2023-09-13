//Faça um programa que receba 3 valores, e armazene-os em vetores, após isso mostre os valores na tela.

#include<stdio.h>

int main(){
    int i = 0;
    int num;
    int vet[3];

    for (i = 0 ; i < 3; i++){
        printf("Digite 3 valores para serem colcados em um vetor: ");
        scanf("%d",&vet[i]);
    }
    for (i =0;i <3 ; i++){
        printf("[%d]",vet[i]);
    }
}

