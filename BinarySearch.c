#include <stdio.h>

int main()
{
    int a[7] = {10, 20, 30, 40, 50, 60, 70};
    int key;
    int low = 0, high = 6;
    int mid;
    int found = 0;
for(int i=0;i<7;i++){
    printf("%d ",a[i]);
}
    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found");
    }

    return 0;
}