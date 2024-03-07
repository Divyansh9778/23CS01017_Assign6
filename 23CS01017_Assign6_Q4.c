#include <stdio.h>
int main()
{
    int a, b, s = 0;
    printf("Enter Array sizes: ");
    scanf("%d%d", &a, &b);
    int arr1[a], arr2[b];
    printf("Enter arr1:");
    for (int i = 0; i < a; i++)
        scanf("%d", &arr1[i]);
    printf("Enter arr2:");
    for (int i = 0; i < b; i++)
        scanf("%d", &arr2[i]);
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            if (arr2[j] == arr1[i])
                s++;
    if (s == b)
        printf("arr2 is a subset of arr1");
    else
        printf("arr2 is not a subset of arr1");
    return 0;
}