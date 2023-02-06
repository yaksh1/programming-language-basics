#include <stdio.h>

//----------------------------------------------------------------
//                   MODES(r,rb,w,wb,a)
//----------------------------------------------------------------

int main(){
  FILE *fptr;
  fptr = fopen("test.txt", "w");
  if(fptr == NULL){
    printf("Error opening test.txt\n");
  }else{
    fclose(fptr);
  }
  return 0;
}