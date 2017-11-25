#include <stdio.h>

int ejercicioDos();
int main(){
	ejercicioDos();
	return 0;	
}
	int ejercicioDos(){
		int x=0;
		int y=0;
		int numero,numeroDos,numeroTres,numeroCuatro,numeroCinco,numeroSeis;
		printf("Ingrese los valores:\n");
		scanf("%d %d %d %d %d %d",&numero,&numeroDos,&numeroTres,&numeroCuatro,&numeroCinco,&numeroSeis);
		int resultado=0;
		resultado=(numero*numeroCinco)-(numeroDos*numeroCuatro);
		if(resultado>0){
			x=((numero*numeroCinco)-(numeroDos*numeroSeis))/((numero*numeroCinco)-(numeroDos*numeroCuatro));
			y=((numero*numeroSeis)-(numeroTres*numeroCuatro))/((numero*numeroCinco)-(numeroDos*numeroCuatro));
		}
		printf("X equivale a : %d\n",x);
		printf("Y equivale a : %d\n",y);
	}
	

