#include <stdio.h>

//Programa que repite veces de ma<yo a menor
void mayorMenor();
void main(){
	int limit;
	printf("Introduzca la cantidad de veces: \n");
	scanf("%d",&limit);
	mayorMenor(limit);
	getch();
	return 0;
}
void mayorMenor(int limit){
	int cont = limit;
	while (cont<0){
	printf("las veces son:\n",cont);
	cont = cont +1;
}//Aqui termina el while
}//Aqui termina el mayorMenor
