#include <stdio.h>

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	int n; // Variavel que guarda seu valor na memoria

	//declarando o ponteiro
	int* p;


	printf("Informe o numero: ");
	scanf("%d", &n);

	// inicializando o ponteiro
	p = &n;


	printf("O n�mero informado foi: %d\n", n);

	printf("O endere�o de mem�ria eh: %d\n", &n);

	printf("Endere�o do ponteiro: %p\n", p);


	return 0;
}
