#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str,sizeof(str), stdin);
  printf("length of the string: %lu\n", strlen(str) - 1);
  // exclude the newline character
  return 0;
}
// this code ask the user enter a string then print the length of string.
//we notice that we have called the library string.h ,so we can use the fgets and sizeof function.