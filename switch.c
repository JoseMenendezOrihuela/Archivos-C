/*
programa que simplifica estructura de repeticion SWITCH
*/
#include <stdio.h>

void testswitch (int valor);

//para llamar a una funcion se necesita poner en el main en este la funcion es el testswitch y ponerle option
//una funcion puede llamar a otra funcion  en el mentodo main

int main(){
	int option = 5;
	testswitch (option);
}

void testswitch (int value){
	switch(value){
		case 1: printf("El numero es uno");
		break;
		case 2: printf("El numero es dos");
		break;
		case 3: printf("El numero es tres");
		break;
		case 4: printf("El numero es cuatro");
		break;
		case 5: printf("El numero es cinco");
		break;
		default: printf("no se encontro el valor en el switch");
	}
}

