 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 int main()
 {
    //shorting in array assending order
    int n;
    printf("\n\aEnter element of array(size of array)");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n\aenter %d element value\n",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nyou enter %d",a[i]);
    }
    int temp;
     for (int i = 0; i < n; i++)
     {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
     }
printf("\nshorted array strat\n");
for(int i = 0; i < n; i++)
    {
        printf("\n %d",a[i]);
    }
 }