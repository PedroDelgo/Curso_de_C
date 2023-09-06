//Faça um programa que soma e subtrai duas matrizes

#include<stdio.h>

int main(){
	int matriz1[2][2], matriz2[2][2];
	int i = 0 ;
	int j = 0 ;
	
	
	for (i = 0 ;i < 2; i ++){
		for (j= 0; j < 2; j++){
			printf("Digite a linha [%d] da matriz 1, e digite a coluna[%d] da matriz 1: \n",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}
	
	for (i = 0;i < 2; i++ ){
		for (j = 0; j < 2; j++){
			printf("Digite a linha [%d] da matriz 2, e digite a coluna[%d] da matriz 2: \n",i,j);
			scanf("%d",&matriz2[i][j]);
		}
	}
	for (i = 0;i < 2; i++ ){
		for (j = 0;j < 2; j++ ){
			printf("[%d]\t",matriz1[i][j] - matriz2[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 2; i ++){
		for(j = 0; j < 2; j ++){
			printf("[%d]\t",matriz1[i][j] + matriz2[i][j]);
		}
		printf("\n");
	}
	
}
