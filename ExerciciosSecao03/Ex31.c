#include <stdio.h>


int main(){

	int num;
	int ant;
	int suc;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe um n�mero: ");
	scanf("%d", &num);

	ant = num - 1;
	suc = num + 1;

	printf("O antecessor de %d �: %d\n", num, ant);
	printf("O sucessor de %d �: %d", num, suc);


	return 0;
}
