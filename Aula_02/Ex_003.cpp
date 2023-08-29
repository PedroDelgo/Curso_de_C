//Crie um programa que receba três notas de 0 até 10 (faça as validações para aceitar apenas esse intervalo),
//depois faça o cálculo da média aritmética e então mostre a média calculada e também se o aluno passou ou não. 


//biliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Função principal

int main(){
	
	setlocale(LC_ALL,"Portuguese");//importação de caracteres em pt-br
	
	//declaração de variaveis
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
