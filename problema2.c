#include <stdio.h>
#include <conio.h>

int main(){
	int numero;
	printf("Introdusca un numero: ");
	scanf("%d",&numero);
	
	if(numero>0){
		printf("El numero es par ");
	}else if(numero<0){
		printf("El numero es: impar ");
	}else{
		(numero==0);
		printf("El numero es: cero ");
	}
	
	if(numero>0) {
		printf("El numero es: positivo\n");
	}else if (numero<0){
		printf("El numero es: negativo\n");
	}else{
		(numero==0);
		printf("El numero es: neutro\n");
	}
	system("pause");
	return 0;
}
