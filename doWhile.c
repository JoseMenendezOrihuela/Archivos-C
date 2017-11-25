/*
programa que simplifica estructura de repeticion DO WHILE
*/
#include <stdio.h>

void testDoWhile();

int main(){
	testDoWhile();
	return 0;
}

void testDoWhile(){
	int count = 0;
	do{
		count= count+1;
		printf("%d \n", count);
	}while(count <100);
	
}

