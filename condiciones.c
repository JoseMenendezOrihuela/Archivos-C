#include <stdio.h>
#include <stdio.h>

void main(){
	int numero;
	printf("Ingresa un numero Entero: ");
	scanf("%d",&numero);
	//si numero es mayor a 0 if>=0
	if(numero==0){
		//ENTONCES y solo se ejecuta cuando es verdadero
		printf("El numero: %d es neutro\n",numero);
	}else if(numero>0){
		//SI_NO SI -> ENTONCES
		printf("El numero: %d es positivo\n",numero);
	}else{
		//ENTONCES  es cuando es negativo SI_NO->FALSE O 0
		printf("El numero :%d es negativo\n",numero);
	}
	system("pause");
}

/*
operadores
operadores aritmeticas +,-,*,/,
operadores logicos o booleanos >,<,>-,<-,|
en C falso regresa 0 y verdadero es 1
*/
