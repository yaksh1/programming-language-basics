#include <stdio.h>
# define len(a) (sizeof(a)/sizeof(a[0])) //macro (defined function)

int main()
{
  int selection[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // input
  for (int i = 0; i < len(selection); i++)
  {
    printf("selection[%d]: %d \n",i, selection[i]);
  }
}