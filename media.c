/*Faz a média aritmética ou a média geométrica de acordo com a escolha do usuário*/

#include <stdio.h>
#include <math.h>

float media(float nota1, float nota2, char c); //Protótipo da função

int main() {
	//Declaração das variáveis
	float nota1, nota2;
	char c;

	//Instrução ao usuário
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	printf("Digite o caracter: ");
	scanf("\n%c", &c);

	//Imprime o resultado
	printf("\nA média é: %2.2f \n\n", media(nota1, nota2, c));
}

float media(float nota1, float nota2, char c) { //Função que calcula a média

	float mediaA, mediaG, media;

	if(c == 'A') { //Média aritmética

		mediaA = (nota1+nota2)/2;

		media = mediaA;	
	}

	else if(c == 'B') { //Média geométrica

		mediaG = sqrt(nota1*nota2);
	
		media = mediaG;
	}
	
	return media;
}
