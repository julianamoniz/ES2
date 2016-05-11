#include <stdio.h>

int main() {

	//Estrutura
	struct corpo {
		char nome[20];
		int idade;
		float altura;
		float peso; 	
	} p;
	
	//Instrução ao usuário
	printf("\nDigite o nome: ");
	scanf("%s", p.nome);

	printf("\nDigite a idade: ");
	scanf("%d", &p.idade);

	printf("Digite a altura: ");
	scanf("%f", &p.altura);

	printf("Digite o peso: ");
	scanf("%f", &p.peso);

	if (p.idade > 2){
		float imc;

		imc = p.peso / (p.altura * p.altura);

		printf("\nO IMC de %s é %2.2f.\n\n", p.nome, imc);

		if (imc < 18.5){
			//PESO A BAIXO
			printf("Peso abaixo do normal. Consulte um médico para saber se há algum problema de saúde.\n");
		}
		else if ((imc > 18.5) && (imc <= 25.0)){
			//PESO NORMAL
			printf("Seu peso está dentro da faixa considerada normal pela OMS.\n");
		}
		else if ((imc > 25.0) && (imc <= 30.0)){
			//PESO ACIMA
			printf("Pré-obesidade. Esta faixa já pode representar um risco considerável para a saúde.\n");
		}
		else{ //OBESIDADE

			if ((imc > 30.0) && (imc < 35.0)){
				//NIVEL 1
				printf("Obesidade classe I. Seu peso já está causando um risco para várias doenças, como diabetes, hipertensão arterial, infarto e alguns tipos de câncer.\n");
			}
			else if ((imc >= 35.0) && (imc < 40.0)){
				//NIVEL 2
				printf("Obesidade classe II. Seu peso representa um risco muito aumentado para várias doenças.\n");
			}
			else{
				//NIVEL 3
				printf("Obesidade classe III. Considerada em alguns casos como obesidade mórbida, este resultado indica risco altíssimo para diversas complicações de saúde. Neste grau, a obesidade já é considerada uma doença grave e necessita ser tratada com orientação médica.\n");
			}
		}
	}
	else {
		printf("\nIDADE BAIXA\n\n");
	}

	return 0;
}