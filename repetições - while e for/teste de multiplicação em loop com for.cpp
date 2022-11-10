#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a,b,soma;
	
	printf("Somatório de números positivos.\n");
	printf("Primeiro número\n");
	scanf("%d",&a);
	
	for (;a < 0;){
	printf("Número não pode ser negativo\nTente novamente\n");	
	printf("Primeiro número\n");
	scanf("%d",&a);
	}
	
	printf("Segundo número\n");
	scanf("%d",&b);
	
	for (;b < 0;) {
	printf("Número não pode ser negativo\nTente novamente\n");	
	printf("Primeiro número\n");
	scanf("%d",&b);	
	}
	
	soma = a + b;
	
	printf("Essa foi a soma: %d",soma);
}
