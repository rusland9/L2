#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"

void abs_max(){
    int j, n;
    for (j=0; j<(i-1); j++)
        if ( abs(mas[j])>abs(mas[j+1]) ){
            n=mas[j];
            mas[j]=mas[j+1]
            mas[j+1]=n;
        }
    printf("%d", mas[i]);
}  
