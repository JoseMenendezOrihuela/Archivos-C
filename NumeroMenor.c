#include <stdio.h>
#include <stdio.h>

int main(int argc, char*argv[]) {
	int a,b,c,max,min;
	
	printf("Ingresa tres numeros\n");	
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b<max)
	max=b;
	if(c<max)
	max=c;
	printf("El numero menor es: %d\n" ,min);
	return 0;
}
