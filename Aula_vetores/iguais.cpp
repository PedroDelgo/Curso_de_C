//Elabore um algoritmo que preencha duas matrizes 3×3 com valores e em seguida, 
//determine se as matrizes são iguais (possuem os mesmos valores em cada posição).

#include<stdio.h>

int main(){
	int i =0;
	int j = 0;
	int contador = 0;
	int matriz1[3][3];
	int matriz2[3][3];
		
	for (i = 0; i < 3; i ++){
		for(j = 0; j < 3; j ++){
			printf("digite o numero para linha [%d] e outro para coluna [%d]: ",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}	
	for (i = 0;i < 3; i ++){
		for(j = 0; j < 3; j ++){
			printf("digite o numero para linha [%d] e outro para coluna [%d]: ",i,j);
			scanf("%d",&matriz2[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (matriz1[i][j] == matriz2[i][j]){
				contador ++;
			}
		}
	}
	if (contador == i*j){
		printf("Suas matrizes tem os elementos iguias");
	} else {
		printf("Suas matrizes nao sao iguias");
	}
}
