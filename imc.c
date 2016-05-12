#include <stdio.h>

float imc(float peso, float altura); 
void verifica(float imc);

int main() {

	struct corpo {
		int idade;
		float altura;
		float peso; 	
	} p;

	printf("\n______________________________ Calculadora de IMC ______________________________\n");
	
	printf("\n Digite os seguintes dados: ");

	printf("\n  Idade: ");
	scanf("%d", &p.idade);

	printf("  Altura: ");
	scanf("%f", &p.altura);

	printf("  Peso: ");
	scanf("%f", &p.peso);

	if (p.idade > 2){

		float result;
		result = imc(p.peso, p.altura);

		printf("\n Resultado:  ");
		printf("\n  O IMC é %2.2f.\n", result);

		verifica(result);	
	}
	else {
		printf("\n Não foi possível calcular o IMC.\n O IMC só pode ser calculado a partir dos dois anos de idade. \n");
	}

	printf("\n_________________________________________________________________________________\n\n");

	return 0;
}

float imc(float peso, float altura){
	float imc;
	imc = peso / (altura * altura);
	return imc;
}

void verifica(float imc){

	if (imc < 18.5){
			//PESO A BAIXO
			printf("  Peso abaixo do normal. \n  - Consulte um médico para saber se há algum problema de saúde.\n");
		}
		else if ((imc > 18.5) && (imc <= 25.0)){
			//PESO NORMAL
			printf("  Seu peso está dentro da faixa considerada normal pela OMS.\n");
		}
		else if ((imc > 25.0) && (imc <= 30.0)){
			//PESO ACIMA
			printf("  Pré-obesidade.\n  - Esta faixa já pode representar um risco considerável para a saúde.\n");
		}
		else{ //OBESIDADE

			if ((imc > 30.0) && (imc < 35.0)){
				//NIVEL 1
				printf("  Obesidade classe I.\n  - Seu peso já está causando um risco para várias doenças,\n  como diabetes, hipertensão arterial, infarto e alguns tipos de câncer.\n");
			}
			else if ((imc >= 35.0) && (imc < 40.0)){
				//NIVEL 2
				printf("  Obesidade classe II.\n  - Seu peso representa um risco muito aumentado para várias doenças.\n");
			}
			else{
				//NIVEL 3
				printf("  Obesidade classe III.\n   - Considerada em alguns casos como obesidade mórbida, este resultado indica\n   risco altíssimo para diversas complicações de saúde. Neste grau,\n   a obesidade já é considerada uma doença grave e necessita ser tratada\n   com orientação médica.\n");
			}
		}
}