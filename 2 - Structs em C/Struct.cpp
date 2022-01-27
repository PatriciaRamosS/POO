#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct aluno {
	char nome[20];
	int idade;
	float nota;
};

/*

// Acessar o endereço de memória de uma estrutura

O (.) operador é usado para acessar um membro de uma estrutura,
enquanto o operador de seta ( ->) em C é usado para acessar um
membro de uma estrutura que é referenciada pelo ponteiro em questão.

*/

int main(int argc, char* argv[]) {
	struct aluno x, y;
	//struct aluno x = { "Rodrigo", 20, 8.5 };
	printf("Digite seu nome: ");
	//scanf pede uma posição de memória, como o x.nome é um vetor 
	//o próprio nome[50] já é a uma posição de memória, logo não precisa do & 
	scanf("%s", x.nome);
	printf("Digite sua idade: ");
	//Já a variável idade vai estar fornecendo o valor da variável idade
	//como é necessário fornecer a posição de memória coloca o &
	scanf("%d", &x.idade);
	printf("Digite sua nota: ");
	scanf("%f", &x.nota);

	//teste
	printf("Digite seu nome: ");
	scanf("%s", y.nome);
	printf("Digite sua idade: ");
	scanf("%d", &y.idade);
	printf("Digite sua nota: ");
	scanf("%f", &y.nota);

	printf("Nome: %s\n", x.nome);
	printf("Idade: %d\n", x.idade);
	printf("Nota: %.2f\n", x.nota);

	printf("Nome: %s\n", y.nome);
	printf("Idade: %d\n", y.idade);
	printf("Nota: %.2f\n", y.nota);
}