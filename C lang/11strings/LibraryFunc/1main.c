#include <stdio.h>
#include <string.h>

int main(){

  //----------------------------------------------------------------

  printf("FUNCTION FOR LENGTH OF STRING\n");
  char arr[] = "yaksh";
  int length = strlen(arr); // length of string
  printf("%d\n", length);

  //----------------------------------------------------------------

  printf("FUNCTION FOR COPYING STRING\n");
  char str1[] = "1";
  char str2[] = "2";
  strcpy(str1, str2); // copy string (second ki value first me jaaegi)
  puts(str1);

  //----------------------------------------------------------------

  printf("FUNCTION FOR STRING CONCATENATE\n");
  char one[100] = "1"; //first string should be bigger in size
  char two[] = "2";
  strcat(one, two); // string concatenated (joining strings)
  puts(one);

  //----------------------------------------------------------------

  printf("FUNCTION FOR STRING COMPARING\n"); // 0 (same) positive(str1>str2) negative(str1<str2)
  char str3[] = "tomato";
  char str4[] = "tomato";
  printf("%d\n",strcmp(str3, str4));// string comparison
  char str5[] = "banana";
  char str6[] = "apple";
  printf("%d\n",strcmp(str5, str6));// string comparison
}