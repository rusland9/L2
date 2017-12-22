#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"

int diff(int mas[], int i){
  int diff1;
  diff1=abs_max(mas, i)-abs_min(mas, i);
  return diff1;
}
