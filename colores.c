#include <stdio.h>
#include <stdio.h>

void main(int argc, char *argv[]) {
	int color;
	printf("Escribe un numero: del 1 al 4\n ");
	scanf("%d",&color);
	//selector (variable)
	printf("%d",color);
	switch(color){
	//caso o rama 1 a cierto valor
	case 1: printf("Azul\n"); break;
	case 2: printf("Amarillo\n"); break;
	case 3: printf("Rojo\n"); break;
	case 4: printf("Verde\n"); break;
	//por defecto
	default: printf("Color no encontrado\n");
}
	
	system("pause");
}
