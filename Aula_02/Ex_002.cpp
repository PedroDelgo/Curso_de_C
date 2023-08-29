//Faça um algoritmo que leia a idade de uma pessoa e mostre a sua classificação, de acordo com a seguinte tabela:
//até 9 anos: mirim
//10 a 13 anos: infantil
//14 a 17 anos: juvenil
//maiores de 18 anos: adulto

//biliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Função principal

int main(){
	
	setlocale(LC_ALL,"Portuguese");//importação de caracteres em pt-br
	
//decalração de variaveis 
	
	int idade; 
	
//input

	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
//if 

	if (idade >= 18) {
		printf("Você é um adulto");
	}else if (idade <= 17 && idade >= 14){
		printf("Você é juvenil");
	}else if (idade <= 13 && idade >=10) {
		printf("Você é mirim ");
	}else {
		printf("Você é mirim");
	}
}

