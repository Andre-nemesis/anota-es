#include <stdio.h>

int main () {
	int x;

	for (int x=0;x <= 200; x++) {
		if (x % 2 == 0) {
			printf("%d\n",x);}	
		}
		
	/*int x = a algo -> isso vai ser o valor inicial que vai começar a repetição
		x <, = ou > a algo -> isso vai ser a quantidade que vai limitar a repetição - ex: int x = 1; x <=20 - vai ocorrer uma repetição de 1 até o número 20
		x++ vai adicionar +1 a cada repetição, x-- vai diminuir -1 a cada repetição, x+=10 -> a repetição vai ocorrer de adicionando 10 em 10, funcionando com /,-,%,+,* */
	
	return 0;
}
