#include <stdio.h>
//calculate sum of two vectors

typedef struct vector{
  int x;
  int y;
} vec;

void calcSum(vec v1, vec v2, vec sum);

int main(){
  vec v1 = {3, 4};
  vec v2 = {9, 2};
  vec sum = {0};

  calcSum(v1, v2, sum);
  return 0;
}

void calcSum(vec v1, vec v2, vec sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  printf("sum of x component: %d, y component: %d\n", sum.x, sum.y);
}
