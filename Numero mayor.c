#include <stdio.h>
#include <stdio.h>

int main() { 
 	int a, b, c;
    int max,min;  

    printf("Introduzca el primer numero: "); 
    scanf("%d", &a); 
    if(a>max) 
    max=a; 
	 
    printf("Introduzca el segundo numero: "); 
    scanf("%d", &b); 
    if(b>max) 
    max=b; 
          
    printf("Introduzca el tercer numero: "); 
    scanf("%d", &c); 
    if(c>max) 
    max=c; 
     
    printf("El numero mayor es %d\n", max);
	
	printf("El numero menor es %d\n", min);  
    return 0; 
} 
