#include <stdio.h>

int maior (int a, int b) {
	int dobro;
	
	if (a > b) printf("O maior entre os dois numeros e: %d\n",a);
	else if (b > a) printf("O maior entre os dois numeros e: %d\n",b);
	
	
	return 0;
}

int main () {
	int a,b;
	
	printf("Digite o primerio numero: ");
	scanf("%d",&a);
	printf("Digite o primerio numero: ");
	scanf("%d",&b);
	
	maior(a,b);
	
	//printf("%d",dobro(x)); pode usar isso quando n�o tem algo pra mostrar na fun��o ou criar uma variavel para receber o resultado da fun��o -> X = dobro(x); -- printf("%d",X);
	
	return 1;
}

