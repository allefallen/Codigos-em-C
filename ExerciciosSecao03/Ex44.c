#include <stdio.h>

int main(){


	int de;
	int du;
	int dr;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a altura de cada degrau da escada: ");
	scanf("%d", &de);

	printf("Quantos metros voc� quer subir?: ");
	scanf("%d", &du);

	dr = de / du;

	printf("Voce precisa subir %d degarus pra chegar onde voc� quer.", dr);


	return 0;
}
