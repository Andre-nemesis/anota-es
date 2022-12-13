#include <stdio.h>

#define Q '#'

void parede (int x) {
	int i = 0;
	
	while(i<=x) {
		printf("%c",Q);
		i +=1;
	}
	
	//for(i = 0; i<x;i++) printf("%c",Q);
	
	printf("\n");
	
}

void casa(int h, int t = 6) {
	/*int x = 0;
	
	 while (x <= t){
		parede(h);
		x +=1; }
	*/
	
	for(int x = 0;x<t;x++) parede(h);
	printf("\n");
}

int main () {
	
	/* q++(p�s incremento), ++q (pr� decremento), --q(pr� decremento), q-- (p�s decremento)
	pr� -> a vari�vel se alter antes de terminar a linha.
	p�s -> A vari�vel s� muda ap�s a linha terminar.
	*/
	
	casa(3,8);
	casa(12);
	casa(5);
	
	return 0;
}

// ou

/* 
   #include <stdio.h>
   #define Q '#'

   void parede (int x);
   void casa(int h, int t = 6);
   
   int main () {
	
	casa(3,8);
	casa(12);
	casa(5);
	
	return 0;
}

void parede (int x) {
	int i = 0;
	
	while(i<=x) {
		printf("%c",Q);
		i +=1;
	}
	
	//for(i = 0; i<x;i++) printf("%c",Q);
	
	printf("\n");
	
}

void casa(int h, int t = 6) {
	
	int x = 0;
	
	 while (x <= t){
		parede(h);
		x +=1; }
	
	
	for(int x = 0;x<t;x++) parede(h);
	printf("\n");
}

*/
