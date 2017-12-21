#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"

int sum(int mas[], int i, int maxi){
int j, sum1;
  sum1=0;
  for (j=maxi;j<i;j++)
    sum1=sum1+mas[j];
  return sum1;
}
