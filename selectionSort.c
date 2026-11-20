
#include <stdio.h>

int main()
{
    int a[] = {65,5,76, 0, 3,35, 12, 9,99, 5, 8, 4,47, 2};
     //int a[] = {12,11,10,9,8,7,6,5,4,3,2,1};
    //int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,13};
    int i, j, min, temp;
    int s = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < s; i++)
    {
        min = i;

        for (j = i + 1; j < s; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array: ");

    for (i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
