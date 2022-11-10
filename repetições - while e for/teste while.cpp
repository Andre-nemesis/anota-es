#include <stdio.h> 

int main () {
	//Enquanto WHILE -> quantidade indeterminada de repetições
	//Para FOR -> quantidade determinada de repetições
	
	int x;
	
	scanf("%d",&x);
	
	while (x==2) {
		printf("Digite um numero\n");
		scanf("%d",&x);
	}
	
	return 0;
}
