#include <stdio.h>

char* Re_neg(int a) { //char armazena carcteres char* armzena o endereço para varios caracteres, ai pode pegar a palavra.
	if (a >= 0) return "Falso"; 
	return "Verdadeiro";
}

int main () {
	int a;
	
	scanf("%d",&a);
	char* b = Re_neg(a);
	printf("%s",b);
	
	return 0;
}
