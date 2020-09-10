#include<stdio.h>

int binarySearch(int arr[], int x, int low, int high)
{
    while(low <= high)
    {
        int mid = (low + (high - low))/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }        
    }
    return -1;
}

// Main Function
int main()
{
    // declaring variable
    int n,x,result = 0,i = 0,low = 0;
    printf("\nEnter the no. of element in array : ");
    scanf("%d", &n);
    
    int arr[n];
    while(i < n)
    {
        printf("\nEnter the element : ");
        scanf("%d", &arr[i]);
        i++;
    }

    // Enter the element to find from array
    printf("\nEnter the elemnet want to search in array : ");
    scanf("%d", &x);

    // Calling Binary Search Function
    result = binarySearch(arr,x,low,n-1);
    if (result == -1)
    {
        printf("\nElement is not found in array");
    }
    else
    {
        printf("\nElement is found at index %d",result);
    }
}
