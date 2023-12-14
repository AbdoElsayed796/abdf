#include <stdio.h>
#include <math.h>
#include <string.h>
void System(int N, int base, char X[])
{
  if (N != 0)
  {
    int temp = N / base;
    System(temp, base, X);
    printf("%c", X[N % base]);
  }
}
int main()
{
  char X[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  int N, base;
  scanf("%d %d", &N, &base);
  System(N, base, X);
  return 0;
}