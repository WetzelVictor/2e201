#include <stdlib.h>
#include <stdio.h>

int main()
{
  // On imprime deux caractères à partir de leur code ASCII
  int i = 40;
  printf("%d vaut  %c \n",i,i);
  i = 50;
  printf("%d vaut  %c \n",i,i);

  // On peut comparer leurs codes ASCII
  if( '(' < '2'){
    printf("( est inférieur à 2\n");
  }

  return 0;
}
