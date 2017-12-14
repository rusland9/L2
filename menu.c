#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

int i, N=100;
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
            abs_max(mas[]);
            break;
        case 1:
            abs_min(mas[]);
            break;
        case 2:
            diff(mas[]);
            break
        case 3:
            sum(mas[]);
            break;
        default:
            printf("Данные некорректны");
            break;
    }
    return 0;
}
