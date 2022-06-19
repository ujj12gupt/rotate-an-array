// { Driver Code Starts
#include <stdio.h>

// } Driver Code Ends
// User function Template for C

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n)
{
    int gcf;
    for (int i = d; i >= 1; i--)
    {
        if (d % i == 0 && n % i == 0)
        {
            gcf = i;
        }
    }
    for (int i = 0; i < gcf; i++)
    {
        int temp = arr[i];
        int j = i;

        while (1)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

// { Driver Code Starts.

int main()
{
    int n, d;
    // input n and d
    scanf("%d%d", &n, &d);

    int arr[n];

    // inserting elements in the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // calling rotateArr() function
    rotateArr(arr, d, n);

    // printing the elements of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
} // } Driver Code Ends