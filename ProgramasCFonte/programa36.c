#include <stdio.h>

union numeros{

	int num1, num2, num3, num4, num5;// 20 bytes
}n;

int main(){

	int soma = 0; // 4 bytes

	n.num1 = 1;
	soma = soma + n.num1;
	printf("O valor de 'num1' eh %d\n", n.num1);

	n.num2 = 3;
	soma = soma + n.num2;
	printf("O valor de 'num2' eh %d\n", n.num2);

	n.num3 = 5;
	soma = soma + n.num3;
	printf("O valor de 'num3' eh %d\n", n.num3);

	n.num4 = 7;
	soma = soma + n.num4;
	printf("O valor de 'num4' eh %d\n", n.num4);

	n.num5 = 9;
	soma = soma + n.num5;
	printf("O valor de 'num5' eh %d\n", n.num5);

	printf("O valor de 'num1' eh %d\n", n.num1);
	printf("O valor de 'num2' eh %d\n", n.num2);
	printf("O valor de 'num3' eh %d\n", n.num3);
	printf("O valor de 'num4' eh %d\n", n.num4);
	printf("O valor de 'num5' eh %d\n", n.num5);

	printf("'n' esta ocupando %ld bytes em memoria\n", sizeof(n));

	printf("Soma = %d\n", soma);

	printf("memoria total ocupada %ld", (sizeof(n) + sizeof(soma)));




	return 0;
}
