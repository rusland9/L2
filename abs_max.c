#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"

int abs_max(){
    int j;
    max=mas[0];
    for (j=0; j<(i-1); j++)
        if ( abs(mas[j])>abs(mas[j+1]) ){
            max=mas[j+1];
            maxi=j+1
        }
    return max;
}  
