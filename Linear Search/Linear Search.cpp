#include<iostream>
using namespace std;

// Linear Function
int main(int arr[], int x, int n)
{
    for (int i = 0; i <= n; i++)
    {
        // Searching for element
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

    cout << "Enter the no. of element in array : "<<endl;
    cin >> n;
    
    int arr[n];
    while (i < n)
    {
        cout << "\nEnter the element : ";
        cin >> arr[i];
        i++;
    }
    
    cout << "\nEnter the Element want to search in array : ";
    cin >> x;
    
    // Calling Linear Search Function
    result = linearsearch(arr,x,n);
    if(result == -1)
    {
        cout << "\nElement is not found in array";
    }
    else
    {
        cout << "Element is found at index "<<result<<endl;
    }
}