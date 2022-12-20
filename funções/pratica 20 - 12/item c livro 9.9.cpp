#include <stdio.h>

int fatorial (int N1) {
	int fat = 1;
	for (int i = N1; i > 1; i--) {
		fat = fat * i;
	}
	return fat;
}

int main () {
	int V,ar;
	
	scanf("%d",&V);
	ar = fatorial(V);
	printf("O fatorial e: %d",ar);
	
	return ar;
}
