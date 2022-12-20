#include <stdio.h>

int soma (int V1,int V2) {
	return V1 + V2;
}

int main () {
	int V1,V2,ar;
	
	scanf("%d",&V1);
	scanf("%d",&V2);
	ar = soma(V1,V2);
	printf("A soma e: %d",ar);
	
	return ar;
}
