#include <stdio.h>
#include <stdio.h>

void main(int arg, char *args[]){
	float numero1;
	float numero2;
	int resultado;
	printf ("Ingrese los numeros a sumar\n");
	printf("numero 1: ");
	scanf("%f", &numero1);
	printf("numero 2: ");
	scanf("%f", &numero2);
	//castreo o conversion de tipo
	resultado=(int)numero1 + numero2;
	printf("El resultado de la suma es: %d \n\n\n",resultado);
	system("pause");
} 
