#include <stdio.h>
#include <stdio.h>
#include "AreaPerimetro.h"

//declarar prototipos
void repetir();
void mostrarMenu();
void calcularCuadrado();
void calcularTriangulo();
void calcularRectangulo();
void calcularTrapecio();
void main(int args, char *argv[]){
	repetir();
	system("pause");
}
//repite el programa
void repetir(){
	char estado;
	do{
		mostrarMenu();
		printf("¿Desea salir del programa? No Lo Haga Compa(s/n):\n");
		scanf("%c",&estado);
		system("cls");
	}while(estado!='n');
}
//muestra el menu
void mostrarMenu(){
	int opcion;
	printf("Bienvenido a Mi Programa :)\n");
	printf("Sigue las intrucciones put@:\n Seleccione la opccion del 1 al 4:\n");
	printf("===============1: Area y Perimetro del Cuadrado===============\n");
	printf("===============2: Area y Perimetro del Tringulo===============\n");
	printf("===============3: Area y Perimetro del Rectangulo===============\n");
	printf("===============4: Area y Perimetro del Trapecio===============\n\n");
	printf("Introduce una Opcion: (Recuerda  que solo del 1 al 5, no acepta letras, no seas we >:)\n ");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:calcularCuadrado();break;
		case 2:calcularTriangulo();break;
		case 3:calcularRectangulo();break;
		case 4:calcularTrapecio();break;
		default: printf("Opcion no valida perra");
	}
	printf("\n\n Apachure una tecla para Continuar: ");
	getch();
}
void calcularCuadrado(){
	float lado;
	printf("Ingresa el valor del Lado: ");
	scanf("%f",&lado);
	printf("\nResultado: Area: %2.2f, Perimetro:%2.2f",areaCuadrado(lado),perimetroCuadrado(lado));
}

void calcularTriangulo(){
	float base,altura,ladoA,ladoB,ladoC;
	printf("Ingresa el valor de la base: ");
	scanf("%f",&base);
	printf("Ingresa el valor de la altura: ");
	scanf("%f",&altura);
	printf("Ingresa el valor del lado A: ");
	scanf("%f",&ladoA);
	printf("Ingresa el valor del lado B: ");
	scanf("%f",&ladoB);
	printf("Ingresa el valor del lado C: ");
	scanf("%f",&ladoC);
	printf("\nResultado: Area: %2.2f, Perimetro:%2.2f",areaTriangulo(base,altura),perimetroTriangulo(ladoA,ladoB,ladoC));
}
void calcularRectangulo(){
	float ladoA,ladoB;
	printf("Ingresa el valor del lado A: ");
	scanf("%f",&ladoA);
	printf("Ingresa el valor del lado B: ");
	scanf("%f",&ladoB);
	printf("\nResultado: Area: %2.2f, Perimetro:%2.2f",areaRectangulo(ladoA,ladoB),perimetroRectangulo(ladoA,ladoB));
}
void calcularTrapecio(){
	float baseMayor,baseMenor,altura,ladoA,ladoB,ladoC,ladoD;
	printf("Ingresa el valor de la Base Mayor: ");
	scanf("%f",&baseMayor);
	printf("Ingresa el valor de la Base Menor: ");
	scanf("%f",&baseMenor);
	printf("Ingresa el valor de la Altura: ");
	scanf("%f",&altura);
	printf("Ingresa el valor del lado A: ");
	scanf("%f",&ladoA);
	printf("Ingresa el valor del lado B: ");
	scanf("%f",&ladoB);
	printf("Ingresa el valor del lado C: ");
	scanf("%f",&ladoC);
	printf("Ingresa el valor del lado D: ");
	scanf("%f",&ladoD);
	printf("\nResultado: Area: %2.2f, Perimetro:%2.2f",areaTrapecio(altura,ladoA,ladoB),perimetroTrapecio(ladoA,ladoB,ladoC,ladoD));
}
