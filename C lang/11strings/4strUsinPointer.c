#include <stdio.h>

// string using pointers
int main(){
  char *str = "laptop"; // can be reinitialized later
  puts(str);
  str = "keyboard";
  puts(str);

  char str2[] = "mouse"; // cannot be reinitialized
  puts(str2);
  return 0;
}