#include <stdio.h>
void Seq(int N)
{
    if (N > 0)
    {
        Seq(N - 1);
        printf("%d ", N);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    Seq(N);
    return 0;
}