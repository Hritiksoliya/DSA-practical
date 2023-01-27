#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int item = 15;
    int n = 15;
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    /*
    printf("\n\aEnter element of array(size of array)");
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

    int f=0;
    int mid=0,l=0,h=(n-1);
    */
    int i = 0, found;
    for (i = 0; i <= 14; i++)
    {
        if (a[i] == item)
        {
            printf("\a\nitem found");
            printf("\a\nitem found on %d index", i);
            break;
        }
    }

    return 0;
}