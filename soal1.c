#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int n, j, i, tukar ;
    
    scanf("%d", &n);
    
    int susunan [n];
        
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &susunan[i]);
    }
    
    for (i = 0 ; i < n; i ++)
    {
         for (j=0; j < n-1; j ++)
         {
            if (susunan[j] > susunan[j + 1])
                {
                    tukar = susunan [j];
                    susunan [j] = susunan [ j + 1 ];
                    susunan [ j + 1 ] = tukar;
                 }
            }
    }
    
    for ( i = 0 ; i < n; i ++)
    {
        printf ("%d", susunan[i]);
        printf ( "\n");
    }
    
    return 0;
}
    
    
