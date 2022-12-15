#include <stdio.h>

int dobro (int a, int b) {
	int dobro;
	if (a > b) dobro = a * 2;
	else if (b > a) dobro = b * 2;
	
	printf("O dobre do maior numero e: %d\n",dobro);
	
	return 0;
}

int main () {
	int a,b;
	
	printf("Digite o primerio numero: ");
	scanf("%d",&a);
	printf("Digite o primerio numero: ");
	scanf("%d",&b);
	
	dobro(a,b);
	
	//printf("%d",dobro(x)); pode usar isso quando não tem algo pra mostrar na função ou criar uma variavel para receber o resultado da função -> X = dobro(x); -- printf("%d",X);
	
	return 1;
}

