//Estruturas de decis�o if, else, else if
//						se, ent�o, ent�o se
#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int idade;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	//Entrada
	printf("Qual � a sua idade? ");
	scanf("%d", &idade);

	//Processamento
	if(idade < 18){
		printf("Voc� � menor de idade. \n");
	}else if(idade >= 18 && idade < 60){
		printf("Voc� � adulto.\n");
	}else{
		printf("Voc� � idoso.\n");
	}
	//Sa�da
	printf("Sua idade � %d\n", idade);

	return 0;
}
