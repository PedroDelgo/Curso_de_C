#include<stdio.h>
#include<stdlib.h>

//& = endereço; 
//* = Valor; 
// No inicio do codigo declaramos o ponteiro como int *p

//O que as linhas abaixo fazem? Faça o comentário de cada linha .

int main(){
	
	int i = 99, j; // criando uma variavel i =99 e cirando um varivel j vazia
	int *p; // criando um ponteiro p
	p = &i; // agora voce esta atribuindo o endereço de i para o ponteiro p em outras palavaras vc esta apontando p para o endereço de i p -> i
	j = *p + 100; //como o ponteiro p esta apontando para o endereço de i então o valor de p é igual a 99 e j = *p +100 entao seria igual a j = 99 + 100 nesse caso j = 199
}
