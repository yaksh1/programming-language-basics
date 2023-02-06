#include <stdio.h>
#include <stdlib.h>

// free the memory allocated by the malloc and calloc
int main()
{
  float *ptr;
  ptr = (float *)calloc(5, sizeof(float));

  for (int i = 0; i < 5; i++)
  {
    printf("%f\n", ptr[i]);
  }

  free(ptr); //freeing the ptr

  printf("\n");
  ptr = (float *)calloc(2, sizeof(float));
  for (int i = 0; i < 2; i++)
  {
    printf("%f\n", ptr[i]);
  }
  return 0;

}