#include<stdio.h>
#include<stdlib.h>

main(){
 int f=0, c=1;

 while(f<=5){
  c=1;
  while(c<=f){
   printf("* ");
   c++;
  }
  printf("\n");
  f++;
 }

 system("pause");
 return 0;
}

