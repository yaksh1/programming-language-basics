#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr = (int *)calloc(5, sizeof(int));

  printf("enter 5 numbers:\n");
  for(int i = 0; i < 5; i++){
    printf("number %d: ", i);
    scanf("%d", &ptr[i]);
  }


  realloc(ptr,8); //reallocating the memory

  printf("enter 8 numbers:\n");
  for (int i = 0; i < 8; i++)
  {
    printf("number %d: ", i);
    scanf("%d", &ptr[i]);
  }

  //printing the numbers
  for (int i = 0; i < 8; i++)
    printf("%d", ptr[i]);

  free(ptr);
  return 0;
}