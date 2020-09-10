#include<iostream>
using namespace std;

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