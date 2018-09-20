#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,j,x,y;
  
  int first[10];
  srand( time(NULL) );
  for(i=0; i<9; i++){
    first[i] = rand();
  }
  first[9] = 0;
  printf("First Array\n");
  for(j=0; j<10; j++){
    printf("Element[%d]: %d\n", j, first[j]);
  }

  int second[10];
  for(x=0; x<10; x++){
    *(second+x) = *(first+(9-x));
  }
  printf("\nSecond Array\n");
  for(y=0; y<10; y++){
    printf("Element[%d]: %d\n", y, second[y]);
  }
}
