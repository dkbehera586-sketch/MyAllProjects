#include <stdio.h>
int main()
{
    int ar[] = {2, 4, 1, 5, 7, 5, 3, 2, 90, 45, 23};
    int no;
    int n = sizeof(ar) / sizeof(ar[0]);

    printf("size of array is: %d ", n);
    printf("\nEnter a value to be searched");
    scanf("%d ", &no);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if (ar[i] == no)
        {
            printf("\nYes the no is found at %dth Position", i);
            break;
        }
    }
    return 0;
}