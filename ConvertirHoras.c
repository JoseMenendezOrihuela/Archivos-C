#include <stdio.h>

float ejercicioTres();
int main(){
	ejercicioTres();
	return 0;
}
float ejercicioTres(){
	float minuto=0,hora=0,dia=0,semana=0;
	float segundos;
	printf("Ingrese el valor: \n");
	scanf("%f",&segundos);
	minuto=segundos/60;
	printf("En minuto equivo: %f\n",minuto);
	hora=minuto/60;
	printf("En hora equivake: %f\n",hora);
	dia=hora/24;
	printf("En dia equivale: %f\n",dia);
	semana=dia/7;
	printf("En semana equivale: %f\n",semana);
}
