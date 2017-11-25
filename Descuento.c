#include <stdio.h>

//variable global
float monto; //aqui igual se puede poner el descuento pero se borra el (float descuento; en la parte de calcularDecuento)
//procedimiento
void leerMonto(); //camel case
float calcularDescuento();
void main() {  
	float compra;
	char salida;
	do{
		leerMonto();
		compra = monto - calcularDescuento(); //funcion, se trabaja con el resultado del procedimiento
		printf("Total de la compra %2.2f\n",compra);
		printf("Pulsar s para salir del programa: \n");
		scanf("%c",&salida);
	}while(salida!='s');
}
//procedimiento
void leerMonto(){
	do{
	printf("Escribe el Monto de la compra no se aceptan 0: ");
	scanf("%f",&monto);
	}while (monto==0);
}
//funcion 
float calcularDescuento(){
	//variable local
	float descuento; // es recomendable que este el float descuento aqui, ya que se usa el return y regresa valor
	if(monto>74){
		descuento = monto * 0.15;
	}else if(monto<=74){
		descuento = monto * 0.10;
	}
	return descuento;
	
}
