#include <stdio.h>
#include <string.h>


union pessoa{

	char nome[100];// 1 char = 1 byte -> 1 * 100 = 100 bytes.
	int idade;// 4 bytes -> total de 104 bytes.

};

int main(){

	union pessoa pes;

	strcpy(pes.nome, "Angelina Jolie");
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("Ela tem %d anos\n", pes.idade);

	printf("A variavel 'pes' esta ocupando %ld bytes em memoria.", sizeof(pes));

	return 0;
}
