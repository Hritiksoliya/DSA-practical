#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main()
{
    int a[10] = {31, 3, 1, 122, 13, 34, 2, 3, 4, 11};

//nested for loo[p for bubble short
    for (int i = 0; i <= 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                // swep value of a[i] and a[j]
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    // print shortred value
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d\n",a[i]);
    }
system("pause");
}