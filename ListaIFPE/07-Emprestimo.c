#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	float salario;
	float emprestimo;
	float parcela;
	float parcValor;

	float minimo;
	float maximo;


	printf("Informe seu sal�rio (R$): ");
	scanf("%f", &salario);

	printf("Qual o valor do empr�stimo? ");
	scanf("%f", &emprestimo);

	printf("Quer parcelar em quantas vezes? ");
	scanf("%f", &parcela);

	printf("Qual o valor de cada parcela? ");
	scanf("%f", &parcValor);

	minimo = salario * 30 / 100;

	if(emprestimo > minimo){
		printf("Emprestimo n�o pode ser aprovado, pq o valor eh maior que TRINTA POR CENTO de seu sal�rio\n");

		maximo = emprestimo / minimo;

		printf("O valor maximo da presta��o para esse caso seria: %.2f", maximo);

	}else{
		printf("Emprestimo aprovado");
	}






	return 0;
}
