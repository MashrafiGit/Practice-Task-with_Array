#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
        }   
    }
    printf("%d ", maximum);    

    return 0;
}