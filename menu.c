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
    ch='0';
    while ( ch!='\n'){
        scanf("%d%c", &mas[i], &ch);
        i++;       
    }
    switch(a){
        case 0:
            printf("%d", abs_max(mas, i, maxi));
            break;
        case 1:
            printf("%d", abs_min(mas, i));
            break;
        case 2:
            printf("%d", diff(mas, i, maxi));
            break;
        case 3:
            printf("%d", sum(mas, i, maxi));
            break;
        default:
            printf("Данные некорректны");
            break;
    }
    return 0;
}
