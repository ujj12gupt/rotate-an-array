// { Driver Code Starts
#include <stdio.h>

// } Driver Code Ends
// User function Template for C

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n)
{
    int mid1,mid2;
    if(d%2 == 0)
    {
        mid1 = d/2-1;
        mid2 = d/2;
        for(int i = 0; i <= mid1; i++)
        {
            int temp = arr[i];
            arr[i] = arr[mid2 + mid1 - i];
            arr[mid2+mid1-i] = temp;
        }
    }
    else if(d%2 != 0)
    {
        int mid = mid1 = mid2 =(d+1)/2-1;
        for(int i = 0; i < mid; i++)
        {
            int temp = arr[i];
            arr[i] = arr[d - i-1];
            arr[d-i-1] = temp;
        }
    }
    if((n-d)%2 == 0)
    {
        mid1 = (n-d)/2-1;
        mid2 =(n-d)/2;
        for(int i = d; i <= mid1+d; i++)
        {
            int temp = arr[i];
            arr[i] = arr[mid2 +d +mid1+d - i];
            arr[mid2+d+mid1+d-i] = temp;
        }
    }
    else if((n-d)%2 != 0)
    {
        int mid = mid1 = mid2 =(n-d+1)/2-1;
        for(int i = d; i < mid+d; i++)
        {
            
            int temp = arr[i];
            arr[i] = arr[mid1 + d+mid2+ d- i];
            arr[mid1+d+mid2+d-i] = temp;
        }
    }
    if(n%2 == 0)
    {
        mid1 = (n)/2-1;
        mid2 =(n)/2;
        for(int i = 0; i <= mid1; i++)
        {
            int temp = arr[i];
            arr[i] = arr[mid2 + +mid1 - i];
            arr[mid2+mid1-i] = temp;
        }
    }
    else if((n)%2 != 0)
    {
        int mid = mid1 = mid2 =(n+1)/2-1;
        for(int i = 0; i < mid; i++)
        {
            
            int temp = arr[i];
            arr[i] = arr[mid1 +mid2- i];
            arr[mid1+mid2-i] = temp;
        }
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