//Crie um programa que receba tr�s notas de 0 at� 10 (fa�a as valida��es para aceitar apenas esse intervalo),
//depois fa�a o c�lculo da m�dia aritm�tica e ent�o mostre a m�dia calculada e tamb�m se o aluno passou ou n�o. 


//biliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Fun��o principal

int main(){
	
	setlocale(LC_ALL,"Portuguese");//importa��o de caracteres em pt-br
	
	//declara��o de variaveis
	float nota1;
	float nota2;
	float nota3;
	
	
	
	//input
	printf("Digite sua primeira nota:\n");
	scanf("%f",&nota1);
	printf("Digite sua segunda nota:\n");
	scanf("%f",&nota2);
	printf("Digite sua terceira nota:\n");
	scanf("%f",&nota3);
	
	float media = nota1 + nota2 + nota3 / 3;
	
	if (media >= 5){
		printf("Aprovado!");
 	} else {
 		printf("Reprovado");
	 }
}
