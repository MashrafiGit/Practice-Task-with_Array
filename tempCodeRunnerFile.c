#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int minimum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        
        if (minimum > a[i])
        {
            minimum = a[i];
        }

    }
    printf("%d ", minimum);

    return 0;
}