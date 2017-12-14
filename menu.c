#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

#define N   100

int main(){
    char mas[N];
    int a, i;
    scanf("%d", &a);
    for (i=0; i<N; i++)
        scanf("%d", &mas[i]);
    switch(a){
        case 0:
            abs_max(mas[]);
            break;
        case 1:
            abs_min(mas[]);
            break;
        case 2:
            diff(mas[]);
            break;
        case 3:
            sum(mas[]);
            break;
        default:
            printf("Данные некорректны");
            break;
    }
    return 0;
}
