//Fa�a uma fun��o que aceita 2 inteiros e retorna a multiplica��o

#include<stdio.h>
#include<stdlib.h>

int produto (int x, int y){
	return x*y;
}

int main(){
	int x;
	int y;
	printf("Digite um numero: \n");
	scanf("%d",&x);
	printf("Digite um numero: \n");
	scanf("%d",&y);
	printf("%d",produto(x,y));
	
}
