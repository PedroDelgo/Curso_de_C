//O professor aplicou a avalia��o em sua turma e deseja mostrar se o aluno foi aprovado (nota maior ou igual a 5) ou reprovado(nota menor que 5).
//Desenvolva o programa que leia a nota do aluno e gere a tela de sa�da comas informa��es solicitadas.

//biliotecas

#include<stdio.h>
#include<stdlib.h>

//Fun��o principal

int main(){
	
	//Declara��o de variaveis
	float nota;
	
	//input
	printf("Digite a nota do aluno:\n");
	scanf("%f",&nota);
	
	if (nota >= 5){
		printf("Aprovado");
	} else {
		printf("Reprovado");
	}
	
	
}

