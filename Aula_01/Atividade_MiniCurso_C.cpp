//Receba um valor em Real (R$) (float) e mostre a convers�o para D�lar(5 R$) e Euro(5.2 R$).

//////////////////////////
//Algoritmo de convers�o//
//////////////////////////

//importa��o de bibliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");//importa��o de caracteres em pt-br
	
	//Declara��o de variaveis
	float valorReal;

	//input
	printf("Digite um valor em Reais para saber seu valor em D�lar e em Euros:\n");
	scanf("%f",&valorReal);
	
	//Tratemnto de erros 
	if (valorReal < 0 ) {
		printf("Voc� deve colocar um valor v�lido!");	
	} else {
		printf("O valor em D�lar � igual a %.2f \nE o valor em Euros � igual a %.2f ",valorReal*5,valorReal*5.2);	
	}
}
