#include <stdio.h> 

int main () {
	int a;
	
	scanf("%d",&a);
	for (int x =1; a > 1;a--) {
		x = x * a;
		printf("%d\n",x);
	}
	
	return 0;
}
