#include <stdio.h> 

int main () {
	//Enquanto WHILE -> quantidade indeterminada de repeti��es
	//Para FOR -> quantidade determinada de repeti��es
	
	int x;
	
	scanf("%d",&x);
	
	while (x==2) {
		printf("Digite um numero\n");
		scanf("%d",&x);
	}
	
	return 0;
}
