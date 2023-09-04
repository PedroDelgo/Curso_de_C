//Faça um programa que receba 3 valores, e armazene-os em vetores, após isso mostre os valores na tela.
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,valor;
	int vetor[3];
	int j;
	for (i = 0;i < 3; i++){
		printf("Digite um numero: \n");
		scanf("%d",&valor);
		vetor[i]=valor; 
	}
	for (j = 0; j < 3; j++){
		printf(" Os numeros dentro do vetor sao: %d\n",vetor[j]);
	}
}
