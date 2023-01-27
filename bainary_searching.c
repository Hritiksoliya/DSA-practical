#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n=15;
    int item=15;
    int a[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    /*printf("\n\aEnter element of array(size of array)");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\n\aenter %d element value\n",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nyou enter %d",a[i]);
    }

    printf("\n\anow  Enter item you want to search\n");
    scanf("%d",&item);
    */

    int f = 0;
    int mid = 0, l = 0, h = (n - 1);

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == item)
        {
            f = 1;
        }
        if (a[mid] > item)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        if (f == 1)
        {
            printf("\a\nitem found on %d index", mid);
            return 0;
        }
    }
    printf("\a\nitem not found");

    return 0;
}