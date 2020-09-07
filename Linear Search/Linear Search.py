def linearsearch(arr,x):
    """

    Parameters
    ----------
    arr : List.
    x : Integer.
    
    Linear Search program to search any element in given list
    
    Returns
    -------
    Returns a Integer value of index of the element.

    """
    a =len(arr)
    for i in range(a):
        if arr[i] == x:
            return i
    return -1

def main():
    result = 0
    n = int(input("\nEnter the no. of Element in List : "))
    
    # Defining of list
    arr = list()
    for i in range(n):
        a = int(input("\nEnter the ELement : "))
        arr.append(a)
        
    #Element to find
    x = int(input("Enter the Element want to search in list : "))
    
    # Calling linear search
    result = linearsearch(arr,x)
    if result == -1:
        print("Element is not found in array")
    else:
        print("Element is found at index {}".format(result+1))

# Main Function Calling
if  __name__ == "__main__":
    main()
