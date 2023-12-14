#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void sequence(int i, int N)
{

    if (i == N)
        printf("%d", N);
    else
    {
        printf("%d ", i);
        sequence(i + 1, N);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    sequence(1, N);
    return 0;
}