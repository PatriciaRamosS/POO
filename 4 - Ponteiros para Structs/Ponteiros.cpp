#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct par {
	int x;
	int y;
}pares;

/*
	O objetivo desta função é receber uma posição de memória *p e
	atribuindo valores a ela;
*/
void teste(pares *p) {
	p->x = 2;
	p->y = 3;
}

/*
	Na função main é fornecido uma posição de memória (&x) para inicializar esse ponteiro *p
	Logo, o main pega a posição de memória (&x) fornece para o ponteiro *p e com isso o ponteiro *p
	vai acessar as atribuições feitas em sua função:

			p->x = 2;
			p->y = 3;

	Com isso vai ser alterado o x e y da variável x na função main da linha 30 
*/
int main() {
	pares x;
	teste(&x);
	printf("%d %d\n", x.x, x.y);
}