#include <stdio.h>
#include <math.h>

int main(){

	float real;
	float quadrado;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Infome um n�mero para saber seu quadrado: ");
	scanf("%f", &real);

	quadrado = real * 2;


	printf("O quadrado de %.2f �: %.2f", real, quadrado);


	return 0;
}
