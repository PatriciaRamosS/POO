#include <stdio.h>

//1. Implementar uma classe pessoa.
struct pessoa {
	char nome[50];
	int idade;
};

int main() {
	//2. Criar três objetos da classe pessoa.
	pessoa x, y, z;

	//3. Ler dados das pessoas.
	printf("Digite o nome da pessoa X: ");
	scanf("%s", x.nome);
	printf("Digite a idade da pessoa X: ");
	scanf("%d", &x.idade);

	printf("Digite o nome da pessoa Y: ");
	scanf("%s", y.nome);
	printf("Digite a idade da pessoa Y: ");
	scanf("%d", &y.idade);

	printf("Digite o nome da pessoa Z: ");
	scanf("%s", z.nome);
	printf("Digite a idade da pessoa Z: ");
	scanf("%d", &z.idade);

	//4. Descobrir a maior idade entre as pessoas.
	int maior = x.idade;

	if (maior < y.idade)
		maior = y.idade;
	if (maior < z.idade)
		maior = z.idade;

	//5. Imprimir o nome de todas as pessoas com a maior idade do grupo.
	if (maior == x.idade)
		printf("%s\n", x.nome);
	if (maior == y.idade)
		printf("%s\n", y.nome);
	if (maior == x.idade)
		printf("%s\n", z.nome);
}