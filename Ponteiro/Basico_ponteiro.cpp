#include<stdio.h>
#include<stdlib.h>

//& = endere�o; 
//* = Valor; 
// No inicio do codigo declaramos o ponteiro como int *p

//O que as linhas abaixo fazem? Fa�a o coment�rio de cada linha .

int main(){
	
	int i = 99, j; // criando uma variavel i =99 e cirando um varivel j vazia
	int *p; // criando um ponteiro p
	p = &i; // agora voce esta atribuindo o endere�o de i para o ponteiro p em outras palavaras vc esta apontando p para o endere�o de i p -> i
	j = *p + 100; //como o ponteiro p esta apontando para o endere�o de i ent�o o valor de p � igual a 99 e j = *p +100 entao seria igual a j = 99 + 100 nesse caso j = 199
}
