#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2==1)
        {
            count ++;
        }
    }
    
    printf("%d", count);

    return 0;
}