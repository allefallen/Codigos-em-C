#include <stdio.h>

int main(){

	float v;
	float d;

	float desc;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o pre�o do produto: ");
	scanf("%f", &v);

	d = (v * 12) / 100;

	desc = v - d;

	printf("O produto que custa %.2f est� com desconto e passa a custar: %.2f", v, desc);

	return 0;

}
