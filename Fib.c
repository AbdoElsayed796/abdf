#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", fib(N));
    return 0;
}