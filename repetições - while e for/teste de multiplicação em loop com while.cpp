#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	float v1,v2,mult;
	int cont = 1;
	
	printf("Calculadora de Multiplica��o\n");
	
	while (cont == 1) {
		printf("Primeiro n�mero\n");
		scanf("%f",&v1);
		printf("Segundo n�mero\n");
		scanf("%f",&v2);
	
		mult = v1 * v2;	
		
		printf("Esse foi o resultado: %.2f\n",mult);
		printf("Deseja Continuar?\n0 - N�o\t1 - Sim\n");
		scanf("%d",&cont);
	}
	
	return 0;
}
