#include <stdio.h>
#include <math.h>
#include <ctype.h>

float media(float nota1, float nota2, char c); 

int main() {
	
	float nota1, nota2;
	char c;
	float m;
	char nome[20];

	printf("\n------------------ CALCULADORA DE MÉDIAS ------------------\n\n ");

	printf("Digite o nome do aluno: ");
	scanf("%s", nome);

	printf("\n Digite as notas: \n");

	printf("  P1: ");
	scanf("%f", &nota1);

	printf("  P2: ");
	scanf("%f", &nota2);

	printf("\n Opções de Médias:\n  A - Média Aritmética \n  B - Média Geométrica\n");

	printf("\n Digite a opção: ");
	scanf("\n%c", &c);

	m = media(nota1, nota2, c);

	//Imprime o resultado

	printf("\n Resultado:  \n");

	printf("  A Média é: %2.2f \n", m);


	if (m >= 6){
		printf("  %s está aprovado(a)!\n", nome);
	}
	else if (m < 2.5) {
		printf("  %s está reprovado(a)!\n", nome);
	}
	else{
		printf("  %s está de exame!\n", nome);
	}

	printf("\n-----------------------------------------------------------\n\n ");

}

float media(float nota1, float nota2, char c) { //Função que calcula a média

	float mediaA, mediaG, media;

	c=toupper(c);

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