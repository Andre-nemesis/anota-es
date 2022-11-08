#include <stdio.h>

int main () {
	int x,y;
	
	printf("Calculadora de numero pares\n");
	printf("Digite um numero que vai iniciar a contagem\n");
	scanf("%d",&x);
	printf("Digite um numero que vai terminar a contagem\n");
	scanf("%d",&y);
	
	for (int x=0 ; x <= y; x++) {
		if (x % 2 == 0) {
			printf("%d\n",x);}	
		}
		
	
	
	return 0;
}
