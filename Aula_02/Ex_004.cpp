//Desenvolva a fun��o m�xima que recebe dois n�meros inteiros e retorna o maior deles.
//Se os n�meros forem iguais, retorne um deles. A fun��o main (programa) l� dois n�meros,
//chama a fun��o m�ximo passando os dois argumentos (os valores lidos) e gera a tela de sa�da com o valor retornado pela fun��o m�xima.
//usando o comando<switch>



//biliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Fun��o m�ximo

int maximo (int a, int b){
	
	int max;
	
	switch (a > b){
		case 0:
			max = printf("O Primeiro n�mero � o maior\n");
			break;
		case 1:
			max = printf("O segundo n�mero � o maior\n");
			break;
	}
	return max;
}

//Fun��o principal

int main(){
	
	setlocale(LC_ALL,"Portuguese");//importa��o de caracteres em pt-br
	
	//declara��o de variaveis
	int num1;
	int num2;
	
	//input
	printf("Digite o primeiro n�mero:\n");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero:\n");
	scanf("%d",&num2);
	
	int maior = maximo(num1,num2);
	
	printf("O maior n�mero �:",maior);
}
