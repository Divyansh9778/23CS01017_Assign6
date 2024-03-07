#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Dimensions: ");
    scanf("%d%d", &a, &b);

    int x[b][a];
    printf("Enter the Matrix:\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &x[j][i]);

    printf("\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
            printf("%d ", x[i][j]);
        printf("\n");
    }
    return 0;
}