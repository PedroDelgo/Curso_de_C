#include<stdio.h>
#include<stdlib.h>

int mult(int x){
	if (x %2 == 0){
		printf("Seu numero e multiplo de 2");
	} else {
		printf("Seu numero nao e multiplo de 2");
	}
}

int main(){
	int num;
	printf("Digite um numero: \n");
	scanf("%d",&num);
	
	mult(num);
	return 0;
}
