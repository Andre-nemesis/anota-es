#include <stdio.h>

int dobro(int num) {
	int d;
	d = 2 * num;
	return d;
}

int main () {
	int n,x;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	x = dobro(n);
	
	printf("%d\n",x);
	
	return 0;
}
