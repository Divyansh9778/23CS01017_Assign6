#include <stdio.h>
void recur(int x[], int l, int h)
{
    if (l == h)
        return;
    int temp = x[l];
    x[l] = x[h];
    x[h] = temp;
    recur(x, ++l, --h);
}
int main()
{
    int k;
    printf("Enter Array size: ");
    scanf("%d", &k);
    int x[k];
    printf("Enter Array: ");
    for (int i = 0; i < k; i++)
        scanf("%d", &x[i]);
    recur(x, 0, k - 1);
    for (int i = 0; i < k; i++)
        printf("%d ", x[i]);
    return 0;
}