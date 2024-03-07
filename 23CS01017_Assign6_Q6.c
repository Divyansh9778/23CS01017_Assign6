#include <stdio.h>
void temp(int x[3][7])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 7; j++)
            scanf("%d", &x[i][j]);
    for (int i = 0; i < 3; i++)
    {
        int s = 0;
        for (int j = 0; j < 7; j++)
            s += x[i][j];
        printf("%.2f ", s / 7.0);
    }
}
int main()
{
    int x[3][7];
    printf("Enter the Data: ");
    temp(x);
    return 0;
}