#include <stdio.h>

int main()
{
    int cociente, dividendo, divisor, resto;

    printf( "\n   Introduzca dividendo (entero): " );
    scanf( "%d", &dividendo );
    printf( "\n   Introduzca divisor (entero): " );
    scanf( "%d", &divisor );

    if ( dividendo > 0 && divisor > 0 )
    {
        cociente = 0;
        resto = dividendo;

        while ( resto >= divisor )
        {
            resto -= divisor;
            cociente++;
        }

        printf( "\n   %d div %d = %d ( Resto = %d )", dividendo, divisor, cociente, resto );
        return 0;
    }
}
