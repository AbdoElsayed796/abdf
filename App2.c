#include <stdio.h>
#include <math.h>
int main()
{
  int N;
  scanf("%d", &N);

  int nums[N];

  int *pointer = nums;

  for (int i = 0; i < N; i++)
  {
    scanf("%d", pointer);
    pointer++;
  }
  pointer--;

  printf("Enter the number you look for ");

  int Target;
  scanf("%d", &Target);

  int position = 0;

  for (int i = 0; i < N; i++)
  {
    if (pointer == Target)
    {
      position = i;
      break;
    }
  
  }
  printf("%d", position);
  return 0;
}
