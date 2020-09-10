#include<iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high)
{
    if(high >= low)
    {
        int mid = (low + (high - low))/2;
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
    int n,x,result = 0,i = 0,low = 0;
    cout << "\nEnter the no. of element in array : ";
    cin>>n;
    int arr[n];
    while(i < n)
    {
        cout << "\nEnter the element : ";
        cin>>arr[i];
        i++;
    }

    // Enter the element to find from array
    cout << "\nEnter the elemnet want to search in array : ";
    cin>>x;

    // Calling Binary Search Function
    result = binarySearch(arr,x,low,n-1);
    if (result == -1)
    {
        cout << "\nElement is not found in array";
    }
    else
    {
        cout << "\nElement is found at index "<<result;
    }
}