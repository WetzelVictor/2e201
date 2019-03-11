#include <stdlib.h>
#include <stdio.h>

#define ASCII_MIN 33
#define ASCII_MAX 126

int main()
{
  printf("ASCII | CHAR\n------------\n");
  int i;
  for( i = ASCII_MIN; i <= ASCII_MAX; i++)
  {
  printf("%d....\t%c \n",i,i);
  }
  return 0;
}
