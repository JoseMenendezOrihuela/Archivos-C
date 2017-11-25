#include <stdio.h>

funcion(int alta,int baja);
void main(){
	int funcion;
	int alta;
	int baja;
	printf("Ingresa un numero Entero: ");
	scanf("%d",&funcion);
	if(alta>=100){
		printf("la variable es: alta\n",alta);
	}else if(baja<100){
		printf("La variable es: baja\n",baja);
	}
	system("pause");
}
