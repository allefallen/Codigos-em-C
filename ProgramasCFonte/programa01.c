
#include <stdio.h>

int main(){

	int idade;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Qual � a sua idade? ");
	scanf("%d", &idade);

	printf("A sua idade � %d", idade);




	return 0;
}
