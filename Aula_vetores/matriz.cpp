//Crie uma matriz 3x3 que primeiro escaneia os números depois imprime a matriz

#include<stdio.h>

int main(){
	int i =0;
	int j = 0;
	int matriz[3][3];
	
	for (i = 0;i < 3; i ++){
		for(j = 0; j < 3; j ++){
			printf("digite o numero para linha [%d] e outro para coluna [%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for (i = 0; i < 3; i ++){
		for (j = 0; j < 3; j++){
			printf("%d\t",matriz[i][j]);
			
		}
		printf("\n");
	}	
}
