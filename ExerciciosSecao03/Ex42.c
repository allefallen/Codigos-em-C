#include <stdio.h>


int main(){

	float sb;
	float g;
	float i;

	float sbg;
	float sbi;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe seu sal�rio base: ");
	scanf("%f", &sb);

	g = (sb * 5) / 100;
	sbg = sb + g;


	i = (sbg * 7) / 100;
	sbi = sbg - i;


	printf("Seu sal�rio � de: %.2f R$", sbi);


	return 0;
}
