#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int i = 0;

    while (i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int k;
    scanf("%d", &k);

    int c = 0;
    int pos = -1;

    for (i = 0; i < n; i++)
    {
        c++;
        if (a[i] == k)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not Found\n");

    printf("Comparisons = %d\n", c);

    return 0;
}
