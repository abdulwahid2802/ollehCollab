#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand(time(0));

  for(int i=1;i<=10;i++)
  {
    int r = rand() % (1000 - 500) + 500;
    printf("Random #%d: %d\n", i, r);
  }

  return 0;
}
