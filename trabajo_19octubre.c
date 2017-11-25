/*
programa para hacer un IF ELSE
*/

#include <stdio.h>

void comparacion(int a, int b, int c);

//se llama a la funcion comparacion
int main() {
	int a=10;
	int b=20;
	int c=30;
	comparacion(a,b,c);
	return 0;
}
	//comprueba si a es mayor que b y c
	void comparacion(int a, int b, int c){
		if(a>b && a>c){
		printf("%d a es mayor",a);
	}
	
	//comparar si b es mayor que a y c
	else	if(b>a && b>c){
		printf("%d b es mayor",b);
	}

	//comprueba si c es mayor que a y b
		if(c>a && c>b){
		printf("%d c es mayor",c);
	}
	
	else;
	printf("%d c es mayor",c);
}
