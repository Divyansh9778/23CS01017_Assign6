#include <stdio.h>
void f(int l, int x[l])
{
    int sum = 0;
    for (int i = 0; i < l; i++)
        sum += x[i];
    for (int i = 0; i < l; i++)
        if (x[i] > (sum / l))
            printf("%d ", x[i]);
}
int main()
{
    int l;
    printf("Enter Array size: ");
    scanf("%d", &l);
    int x[l];
    printf("Enter Array: ");
    for (int i = 0; i < l; i++)
        scanf("%d", &x[i]);
    f(l, x);
    return 0;
}