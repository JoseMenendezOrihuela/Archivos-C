#include <stdio.h>

/*
Realizar un programa que el usuario introduzca un numero y que el programa lo repita ciertas veces
*/
void testWhile();
void main(){
	int limit;
	printf("Introduzca el limite: \n");
	scanf("%d",&limit);
	testWhile(limit);
	getch();
	return 0;
}

void testWhile(int limit){
	int cont = limit;
	while(cont>0){
		printf("El valor: %d\n",cont);
		cont = cont -1;
	}//aqui termina el while
}//termina testwhile
