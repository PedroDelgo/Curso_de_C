//Desenvolva a função máxima que recebe dois números inteiros e retorna o maior deles.
//Se os números forem iguais, retorne um deles. A função main (programa) lê dois números,
//chama a função máximo passando os dois argumentos (os valores lidos) e gera a tela de saída com o valor retornado pela função máxima.
//usando o comando<switch>



//biliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Função máximo

int maximo (int a, int b){
	
	int max;
	
	switch (a > b){
		case 0:
			max = printf("O Primeiro número é o maior\n");
			break;
		case 1:
			max = printf("O segundo número é o maior\n");
			break;
	}
	return max;
}

//Função principal

int main(){
	
	setlocale(LC_ALL,"Portuguese");//importação de caracteres em pt-br
	
	//declaração de variaveis
	int num1;
	int num2;
	
	//input
	printf("Digite o primeiro número:\n");
	scanf("%d",&num1);
	printf("Digite o segundo número:\n");
	scanf("%d",&num2);
	
	int maior = maximo(num1,num2);
	
	printf("O maior número é:",maior);
}
