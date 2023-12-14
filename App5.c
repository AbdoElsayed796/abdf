#include <stdio.h>
#include <math.h>
int Sum(long long int x)
{                          //  123
    if (x > 9)
        return  x % 10 + Sum(x / 10);
    return x;
}
int main()
{
    long long int N;
    scanf("%lld", &N);
    int x = Sum(N);
    printf("%d\n", x);
    return 0;
}