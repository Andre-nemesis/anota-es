#include <stdio.h>

int main () {
	int x;

	for (int x=0;x <= 200; x++) {
		if (x % 2 == 0) {
			printf("%d\n",x);}	
		}
		
	/*int x = a algo -> isso vai ser o valor inicial que vai come�ar a repeti��o
		x <, = ou > a algo -> isso vai ser a quantidade que vai limitar a repeti��o - ex: int x = 1; x <=20 - vai ocorrer uma repeti��o de 1 at� o n�mero 20
		x++ vai adicionar +1 a cada repeti��o, x-- vai diminuir -1 a cada repeti��o, x+=10 -> a repeti��o vai ocorrer de adicionando 10 em 10, funcionando com /,-,%,+,* */
	
	return 0;
}
