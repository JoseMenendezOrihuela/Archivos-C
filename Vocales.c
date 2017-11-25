#include <stdio.h>

int main(void)
{
            char v;
           
            printf("Introduzca un caracter: \n");
    scanf("%c",&v);
   
    switch (v)
    {
           case 'a':
                printf ("Es vocal\n");
                break;
           case 'e':
                printf ("Es vocal\n");
                break;
           case 'i':
                printf ("Es vocal\n");
                break;
           case 'o':
                printf ("Es vocal\n");
                break;
           case 'u': 
                printf ("Es vocal\n");
                break;             
           default:
                printf ("No es vocal\n");
                break;
    }
   
    system("PAUSE");     
    return 0;
}
