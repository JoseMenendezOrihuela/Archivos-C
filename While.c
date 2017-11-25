#include <stdio.h>

void main(){
	char i;
	char q='q';
	//creando esta variable ya no hace falta poner el '' en el q de while
	printf("Escribe q para salir\n");
	//se repite mientras sea igual a q
	//el signo de ! sirve para comparar i con q
	while(i!=q) {
		printf("Hola\n");
		scanf("%c",&i);
	}
	getch();
}
