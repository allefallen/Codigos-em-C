#include <stdio.h>

int main(){

	float s;
	float a;

	float aumento;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe seu sal�rio: ");
	scanf("%f", &s);

	a = (s * 25) / 100;

	aumento = s + a;

	printf("Seu sal�rio antigo: %.2f \n", s);
	printf("Voc� ganhou um aumento de %.2f", aumento);

	return 0;

}
