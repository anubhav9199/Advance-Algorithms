# Defining Binary Search function
def binary_search(arr, x, low, high):
    while low <= high:
        mid = (low + (high - low))//2
        if arr[mid] == x :
            return mid
        elif arr[mid] > x :
            high = mid - 1
        else:
            low = mid + 1   
    else :
        return -1

# Main function
def main():
    
    # Declaring variables
    result = 0
    n = int(input("\nEnter the no. of element in array : "))
    high = n
    
    arr = list()
    while n > 0:
        a = int(input("\nEnter the element : "))
        arr.append(a)
        n = n - 1
    
    x = int(input("\nEnter the element want to search : "))

    # Calling Binary Search Function
    result = binary_search(arr,x,0,high-1)
    if result == -1:
        print("\nElement is not found in array")
    else:
        print("\nElement is found at index {}".format(result))

# Calling Main Function
if  __name__ == "__main__":
    main()
