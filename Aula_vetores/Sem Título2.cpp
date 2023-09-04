//Faça um programa que receba 5 valores, e armazene-os em vetores, 
//após isso mostre os valores na tela de saída, mas se o valor for positivo mostre-o sendo negativo.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int vetor[5];
	int i;
	int valores;
	int j;
	
	for (i = 0;i < 5; i ++){
		printf("Digite os numeros: ");
		scanf("%d",&valores);
		if (valores > 0){
			valores = valores - (2*valores);
			vetor[i] = valores;
		} else {
			vetor[i] = valores;
		}
	}
	for (j = 0;j < 5; j++){
		printf("Os numeros dentro dos veteores sao igual a: %d\n",vetor[j]);
	}
}

