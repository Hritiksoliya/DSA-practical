#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    // int a[5]={1,2,3,4,5};
    // int l=0,h=4;
    int n;
    printf("\n\aEnter element of array(size of array)");
    scanf("%d",&n);
    int a[n];
    // for enter the value in array
    for (int i = 0; i < n; i++)
    {
        printf("\n\aenter %d element value\n",i+1);
        scanf("%d",&a[i]);
    }
    // for check the array element value
    for (int i = 0; i < n; i++)
    {
        printf("\nyou enter %d",a[i]);
    }
    int l=0,h=(n-1);
    int temp;
    for (; /*l<=h*/;)
    {
        // temp=a[l];
        // a[l]=a[h];
        // a[h]=temp;
        a[l]=a[l]+a[h]; //asume a[l]=2 a[h]=3 a[l]=5
        a[h]=a[l]-a[h]; //5-3=2 a[h]=2
        a[l]=a[l]-a[h]; //5-2=3 a[l]=3

        l++,h--;
        if(l<=h)
        break;
    }
    for(int i=0;i<n;i++)
    printf("\n%d",a[i]);
    printf("\n");
system("pause");
}