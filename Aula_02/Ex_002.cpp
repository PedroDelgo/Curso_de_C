//Fa�a um algoritmo que leia a idade de uma pessoa e mostre a sua classifica��o, de acordo com a seguinte tabela:
//at� 9 anos: mirim
//10 a 13 anos: infantil
//14 a 17 anos: juvenil
//maiores de 18 anos: adulto

//biliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Fun��o principal

int main(){
	
	setlocale(LC_ALL,"Portuguese");//importa��o de caracteres em pt-br
	
//decalra��o de variaveis 
	
	int idade; 
	
//input

	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
//if 

	if (idade >= 18) {
		printf("Voc� � um adulto");
	}else if (idade <= 17 && idade >= 14){
		printf("Voc� � juvenil");
	}else if (idade <= 13 && idade >=10) {
		printf("Voc� � mirim ");
	}else {
		printf("Voc� � mirim");
	}
}

