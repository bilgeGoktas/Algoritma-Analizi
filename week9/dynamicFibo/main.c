#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
  int f[n+1];
  int i;
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}
int main()
{
    int n = 9;
    printf("%d. fibonacci sonucu :  %d", n,fib(n));
    getchar();
    return 0;
}
