#include <stdio.h>


int main(){

	float real;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe um n�mero real: ");
	scanf("%f", &real);


	printf("O n�meor real digitado foi: %.2f", real);


	return 0;
}
