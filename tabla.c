#include <stdio.h>

int tabla(int numero);
int main(){
	int numero;
	printf("Introdusca el numero de la Tabla de multiplicar:\n");
	scanf("%d",&numero);
	tabla(numero);
  	return 0;
}
 
int tabla(int numero){
	 int repeticion[10];
	 int suma;
	 for(suma=0;suma<10;suma++)
	 repeticion[suma]=numero*(suma+1);
 
	 printf("La tabla del numero:%d\n",numero);
	 for(suma=0; suma<10; suma++)
	 printf("%dx%d=%2d\n",numero,(suma+1),repeticion[suma]);
return 0;
}
