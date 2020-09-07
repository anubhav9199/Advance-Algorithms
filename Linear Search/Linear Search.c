#include<stdio.h>

// Linear Search
int linearsearch(int arr[], int x, int n)
{
    for (int i = 0; i <= n; i++)
    {
    	// Searching for elements
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// Main Function
int main()
{
    // Declaring variables
    int n;
    int x;
    int result = 0;
    
    printf("\nEnter the no. of element in array : ");
    scanf("%d", &n);
    
    int arr[n];
    while (i < n)
    {
        printf("\nEnter the element : ");
        scanf("%d", &arr[i]);
        i++;
    }
    
    printf("\nEnter the Element want to search in array : ");
    scanf("%d", &x);
    
    // Calling Linear Search Function
    result = linearsearch(arr,x,n);
    if(result == -1)
    {
        printf("\nElement is not found in array");
    }
    else
    {
        printf("\nElement is found at index %d",result);
    }
}
