#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a,b,soma;
	
	printf("Somat�rio de n�meros positivos.\n");
	printf("Primeiro n�mero\n");
	scanf("%d",&a);
	
	for (;a < 0;){
	printf("N�mero n�o pode ser negativo\nTente novamente\n");	
	printf("Primeiro n�mero\n");
	scanf("%d",&a);
	}
	
	printf("Segundo n�mero\n");
	scanf("%d",&b);
	
	for (;b < 0;) {
	printf("N�mero n�o pode ser negativo\nTente novamente\n");	
	printf("Primeiro n�mero\n");
	scanf("%d",&b);	
	}
	
	soma = a + b;
	
	printf("Essa foi a soma: %d",soma);
}
