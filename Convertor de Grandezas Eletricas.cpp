#include <stdio.h>

int main(){
	int dados_conhecidos, dado_procurado, tensao, corrente, potencia, resistencia;
	printf("Me diga os dados que voce ja possui \n(1 - Tensao e Corrente; 2 - Tensao e Potencia; 3 - Tensao e Resistencia; 4 - Corrente e Potencia; 5 - Corrente e Resistencia): ");
	scanf("%d", &dados_conhecidos);
	switch(dados_conhecidos) {
		case 1:
			printf("Digite a Tensao: ");
			scanf("%d", &tensao);
			printf("Digite a Corrente: ");
			scanf("%d", &corrente);
			printf("Para qual valor voce deseja converter? 1 - Potencia; 2 - Resistencia");
			scanf("%d", &dado_procurado);
			if(dado_procurado == 1) {
				printf("A Potencia é: %d", tensao * corrente);
			} else {
				printf("A Resistencia é: %d", tensao / corrente);
			}
		break;
		case 2:
			printf("Digite a Tensao: ");
			scanf("%d", &tensao);
			printf("Digite a Potencia: ");
			scanf("%d", &potencia);
			printf("Para qual valor voce deseja converter? 1 - Corrente; 2 - Resistencia");
			scanf("%d", &dado_procurado);
			if(dado_procurado == 1) {
				printf("A corrente é: %d", potencia / tensao);
			} else {
				printf("A Resistencia é: %d", (potencia / tensao) * tensao);
			}
		break;
		case 3:
			printf("Digite a Tensao: ");
			scanf("%d", &tensao);
			printf("Digite a Resistencia: ");
			scanf("%d", &resistencia);
			printf("Para qual valor voce deseja converter? 1 - Corrente; 2 - Potencia");
			scanf("%d", &dado_procurado);
			if(dado_procurado == 1) {
				printf("A Corrente é: %d", tensao / resistencia);
			} else {
				printf("A Potencia é: %d", (tensao / resistencia) * tensao);
			}
		break;
		case 4:
			printf("Digite a Corrente: ");
			scanf("%d", &corrente);
			printf("Digite a Potencia: ");
			scanf("%d", &potencia);
			printf("Para qual valor voce deseja converter? 1 - Tensao; 2 - Resistencia");
			scanf("%d", &dado_procurado);
			if(dado_procurado == 1) {
				printf("A Tensao é: %d", potencia / corrente);
			} else {
				printf("A Resistencia é: %d", (potencia / corrente) / corrente);
			}
		break;
		case 5:
			printf("Digite a Corrente: ");
			scanf("%d", &corrente);
			printf("Digite a Resistencia: ");
			scanf("%d", &resistencia);
			printf("Para qual valor voce deseja converter? 1 - Tensao; 2 - Potencia");
			scanf("%d", &dado_procurado);
			if(dado_procurado == 1) {
				printf("A Tensao é: %d", resistencia * corrente);
			} else {
				printf("A Potencia é: %d", (resistencia * corrente) * corrente);
			}
		break;
		return 0;
	}
}
