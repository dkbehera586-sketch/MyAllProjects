
#include <stdio.h>

// Find the largest element
int SendMax(int a[], int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

// Counting sort according to a particular digit
void countingSort(int a[], int n, int place)
{
    int output[n];
    int count[10] = {0};

    // Count occurrences of each digit
    for (int i = 0; i < n; i++)
    {
        int digit = (a[i] / place) % 10;
        count[digit]++;
    }

    // Convert count into cumulative count
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = (a[i] / place) % 10;

       output[count[digit] - 1] = a[i];
         //output[--count[digit]] = a[i];
        count[digit]--;
    }

    // Copy output back to original array
    for (int i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}

// Radix Sort
void SendPlace(int a[], int n)
{
    int max = SendMax(a, n);

    // Sort according to each digit
    for (int place = 1; max / place > 0; place *= 10)
    {
        countingSort(a, n, place);
    }
}

int main()
{
    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};

    int n = sizeof(a) / sizeof(a[0]);

    printf("Before sorting:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    SendPlace(a, n);

    printf("\n\nAfter sorting:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

