#include <stdio.h>

int main(void) {
  int n;
  scanf(" %d", &n);
  int sum=0;
  int c[5] = {50, 25, 10, 5, 1};

  while(n)
  {
    for(int i=0;i<5;i++)
    {
      int x = n / c[i];
      sum+=x;
      while(x--)
        printf("%d ", c[i]);
      
      n %= c[i];
    }
  }
  printf("\nNumber of coins = %d", sum);


  return 0;
}
