#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct aluno {
	char nome[20];
	int idade;
	float nota;
};

/*

// Acessar o endere�o de mem�ria de uma estrutura

O (.) operador � usado para acessar um membro de uma estrutura,
enquanto o operador de seta ( ->) em C � usado para acessar um
membro de uma estrutura que � referenciada pelo ponteiro em quest�o.

*/

int main(int argc, char* argv[]) {
	struct aluno x, y;
	//struct aluno x = { "Rodrigo", 20, 8.5 };
	printf("Digite seu nome: ");
	//scanf pede uma posi��o de mem�ria, como o x.nome � um vetor 
	//o pr�prio nome[50] j� � a uma posi��o de mem�ria, logo n�o precisa do & 
	scanf("%s", x.nome);
	printf("Digite sua idade: ");
	//J� a vari�vel idade vai estar fornecendo o valor da vari�vel idade
	//como � necess�rio fornecer a posi��o de mem�ria coloca o &
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