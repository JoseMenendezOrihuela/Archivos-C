#include <stdio.h>
int main(){
    int i,sum=0;
    for(i=0;i<=100;i=i+2){
        printf(" %d ",i);
        sum = sum +i;
    }
    printf("%d ",sum);
   return 0;
}
