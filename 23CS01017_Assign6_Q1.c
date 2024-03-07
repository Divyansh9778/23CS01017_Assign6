#include <stdio.h>
void prime(int l, int u)
{
    for (int i = l; i <= u; i++)
    {
        int s = 0;
        for (int j = 2; j <= i / 2; j++)
            if (i % j == 0)
                s = 1;
        if (!s)
            printf("%d ", i);
    }
}
int main()
{
    int l, u;
    printf("Input Lower Limit: ");
    scanf("%d", &l);
    printf("Input Upper Limit: ");
    scanf("%d", &u);
    prime(l, u);
    return 0;
}