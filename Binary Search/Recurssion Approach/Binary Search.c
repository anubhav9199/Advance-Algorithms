#include<stdio.h>

int binarySearch(int arr[], int x, int low, int high)
{
    if(high == 1)
    {
        int mid = (low + (high - 1))/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return binarySearch(arr,x,low,mid-1);
        }
        else
        {
            return binarySearch(arr,x,mid + 1,high);
        }
        
    }
    else
    {
        return -1;
    }
}
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
    result = binarySearch(arr,x,low,n);
    if (result == -1)
    {
        printf("\nElement is not found in array");
    }
    else
    {
        printf("\nElement is found at index %d",result);
    }
}