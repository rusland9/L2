#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

int i, N=100, min1, maxi, max1, diff1, sum1;
char mas[N];

int main(){
    int a;
    scanf("%d", &a);
    i=0;
    do{
        scanf("%d", &mas[i]);
        i++;       
    }while ( mas[i]!="" || i<N);
    switch(a){
        case 0:
            printf("%d", abs_max(mas[]));
            break;
        case 1:
            printf("%d", abs_min(mas[]));
            break;
        case 2:
            printf("%d", diff(mas[]));
            break
        case 3:
            printf("%d", sum(mas[]));
            break;
        default:
            printf("Данные некорректны");
            break;
    }
    return 0;
}
