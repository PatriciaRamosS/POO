#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct par {
	int x;
	int y;
}pares;

/*
	O objetivo desta fun��o � receber uma posi��o de mem�ria *p e
	atribuindo valores a ela;
*/
void teste(pares *p) {
	p->x = 2;
	p->y = 3;
}

/*
	Na fun��o main � fornecido uma posi��o de mem�ria (&x) para inicializar esse ponteiro *p
	Logo, o main pega a posi��o de mem�ria (&x) fornece para o ponteiro *p e com isso o ponteiro *p
	vai acessar as atribui��es feitas em sua fun��o:

			p->x = 2;
			p->y = 3;

	Com isso vai ser alterado o x e y da vari�vel x na fun��o main da linha 30 
*/
int main() {
	pares x;
	teste(&x);
	printf("%d %d\n", x.x, x.y);
}