#include <stdio.h>
#include <stdlib.h>

int main (void){
  int i;
  int *pa = malloc (10*sizeof(int));
  char * pch = malloc (10*sizeof(char));

  for (i = 0; i < 10; i++){
    pa[i] = 2*i +1;
  }
  for (i = 0; i < 10; i++){
    printf("%d:\t%p\t%d\n", i, pa + i, pa[i]);
  }
  for (i = 0; i < 10; i++){
    *(pch + i) = 'a' + i;
  }
  for (i = 0; i < 10; i++){
    printf("%d:\t%p\t%d\n", i, pch + i, *(pch+i));
  }
  free(pch);
  free(pa);
}