#include <stdio.h>
#define pi 3.14

float CalcArea(float r);

int main () {
	float raio,area;
	
	printf("Digite o valo do raio: ");
	scanf("%f",&raio);
	
	area = CalcArea(raio);
	
	printf("Esse e o valor da area %.2f cm",area);
	
	return raio;
}

float CalcArea(float r) {
	return pi * (r * r);
}
