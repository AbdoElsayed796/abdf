#include <stdio.h>
#include <math.h>
int fibonacci(int N, int i, int j)
{
    if (N > 0)
    {
        fibonacci(N - 1, j, j + i);
    }
    else if (N == 0)
    {
        return (i);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int fib = fibonacci(N, 0, 1);
    printf("%d\n", fib);
    return 0;
}