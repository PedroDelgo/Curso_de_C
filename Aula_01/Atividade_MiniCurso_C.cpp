//Receba um valor em Real (R$) (float) e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$).

//////////////////////////
//Algoritmo de conversão//
//////////////////////////

//importação de bibliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");//importação de caracteres em pt-br
	
	//Declaração de variaveis
	float valorReal;

	//input
	printf("Digite um valor em Reais para saber seu valor em Dólar e em Euros:\n");
	scanf("%f",&valorReal);
	
	//Tratemnto de erros 
	if (valorReal < 0 ) {
		printf("Você deve colocar um valor válido!");	
	} else {
		printf("O valor em Dólar é igual a %.2f \nE o valor em Euros é igual a %.2f ",valorReal*5,valorReal*5.2);	
	}
}
