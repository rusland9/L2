#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"

int abs_max(int mas[], int i){
    int j, max1;
    max1=mas[0];
    for (j=1; j<i; j++)
        if ( abs(max1)<abs(mas[j]) ){
            max1=mas[j];
        }
    return max1;
}  
