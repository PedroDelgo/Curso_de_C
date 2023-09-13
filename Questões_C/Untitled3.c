//Faça um programa que receba 5 valores, e armazene-os em vetores,
//após isso mostre os valores na tela de saída, mas se o valor for positivo mostre-o sendo negativo.
#include<stdio.h>

int main(){
    int i=0, vet[5];

    for (i=0;i<5;i++){
        printf("Digite os valores: ");
        scanf("%d",&vet[i]);
        if (vet[i]> 0){
            vet[i] = 2 *vet[i];
        }
    }
    for (i=0;i<5;i++){
        printf("[%d]\n",vet[i]);
    }
}
