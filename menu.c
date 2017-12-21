#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

#define N 100
int i, maxi, mas[N];
char ch;

int main(){
    int a;
    scanf("%d", &a);
    i=0;
    while ( mas[i]!='\n'){
        scanf("%d%c", &mas[i], &ch);
        i++;       
    }
    switch(a){
        case 0:
            printf("%d", abs_max(mas));
            break;
        case 1:
            printf("%d", abs_min(mas));
            break;
        case 2:
            printf("%d", diff(mas));
            break;
        case 3:
            printf("%d", sum(mas));
            break;
        default:
            printf("Данные некорректны");
            break;
    }
    return 0;
}
