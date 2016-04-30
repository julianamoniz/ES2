/*Lê os dados do usuário e calcula o IMC*/

#include <stdio.h>

int main() {

	//Estrutura
	struct corpo {
		char nome[20];
		float altura;
		float peso; 	
	} p;
	
	//Instrução ao usuário
	printf("\nDigite o nome: ");
	scanf("%s", p.nome);

	printf("Digite a altura: ");
	scanf("%f", &p.altura);

	printf("Digite o peso: ");
	scanf("%f", &p.peso);

	//Calcula o IMC
	float imc;

	imc = p.peso / (p.altura * p.altura);

	//Imprime o resultado	
	printf("\nO IMC de %s é %2.2f.\n\n", p.nome, imc);

	return 0;
}
