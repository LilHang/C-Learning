#include <stdio.h>
int main(void) {
  //int i;
  char *s = "I Love GPLT";
  for (; *s != '\0'; s++) {
    printf("%c", *s);
    printf("\n");
  }
  return 0;
}