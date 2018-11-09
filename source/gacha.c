#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MT.h"

void gacha(int i){
  int n = genrand_int32() % 100 + 1;
  char rarity[3][10] = {"SSR ", " SR ", "  R "};
  
  if(n <= 3){
    printf("%s", rarity[0]);
  }
  else if(n <= 10){
    printf("%s", rarity[1]);
  }
  else{
    printf("%s", rarity[2]);
  }
}

int main(void){
  int i;
  init_genrand((unsigned)time(NULL));

  for(int i = 0; i < 10; i ++)
    gacha(i);

  printf("\n");

  return 0;
}
