#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float v1,v2,media;
	int cont = 1;
	
	printf("Calculadora de M�dia de duas notas\n");
	
	while (cont == 1) {
		printf("Primeiro n�mero\n");
		scanf("%f",&v1);
		printf("Segundo n�mero\n");
		scanf("%f",&v2);
	
		media = (v1 + v2) / 2;	
		
		printf("Esse foi o resultado: %.2f\n\n",media);
		printf("Deseja Continuar?\n0 - N�o\t1 - Sim\n");
		scanf("%d",&cont);
	}
}
