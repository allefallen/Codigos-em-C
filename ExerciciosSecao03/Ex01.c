#include <stdio.h>
#include<stdlib.h>

int main(){

	int num;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite um n�mero: ");
	scanf("%d", &num);

	printf("O n�mero que voc� digitou foi %d", num);




	return 0;
}
