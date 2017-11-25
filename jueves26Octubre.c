#include<stdio.h>
/*programa de funciones y case
*/
int funcion(int a,int b,int c);
int funcion(int funcion, int funciondos, int funciontres);
int funcion();

int main(){
	int r=0;
	int a=5; 	
	int b=20;   
	int c=10;
	int option=0; 
	
	printf("Opcion 1: funcion\n option 2: funcion\n option 3: funcion\n option 4: salir\n");
	
	scanf("%d",& option);
	
	do {printef("Elija una opcion\n");
	
		switch (option){
			case 1: funcionuno();
			break;
			case 2: funciondos(a,b,c);
			break;
			case 3: funciontres(a,b,c);
			default:
			printf("El programa termino");
		}		
	}while(opcion>=1 && opcion<=3);	
	glench();
	return 0;
}

