#include <stdio.h>

int main(){
	float area; 
	float base; 
	float altura;
	
	printf("Ingrese un valor para la base: ");
	scanf("%d",&base);
	
	printf("Ingrese un valor para la altura: ");
	scanf("%d",&altura);
	area=base*altura;
	printf("El area del rectangulo es: ",area);
	system("pause");
	return 0;
}
