
#include <stdio.h>
#include <stdlib.h>
#include "abs_min.h"

int abs_min(int mas[], int i){
    int j, min1;
    min1=mas[0]
    for (j=1; j<i; j++)
        if ( abs(min1)<abs(mas[j]) ){
            min1=mas[j];
        }
    return min1;
}  
