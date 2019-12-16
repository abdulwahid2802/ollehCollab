#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gcd(int a, int b)
{
  if(b != 0)
    return gcd(b, a % b);
  else 
    return a;
}

int main(void) {
  int a, b;
  scanf(" %d %d", &a, &b);
  printf("%d", gcd(a, b));

  return 0;
}
