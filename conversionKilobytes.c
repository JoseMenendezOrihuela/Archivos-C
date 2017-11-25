#include <stdio.h>

float ejercicioUno();

void main(){
ejercicioUno();
return 0;
	
}
float ejercicioUno(){
	float kilobyte=0;
	float megabyte=0;
	float gigabyte=0;
	float variable;
	printf("Ingrese el valor de A:\n ");
	scanf("%f",&variable);
	if(variable>0){
		kilobyte=variable/1024;
		printf("El kilobyte equivale: %f\n",kilobyte);
		megabyte=kilobyte/1024;
		printf("El megabyte equivale: %f\n",megabyte);
		gigabyte=megabyte/1024;
		printf("El gigabyte equivale: %f\n",gigabyte);
	}
}

