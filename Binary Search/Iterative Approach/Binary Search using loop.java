import java.util.Scanner;

// Main Class
public class BinarySearch {
	
	// Main Function
	public static void main(String[] args){ 
		
		// Declearing Variable
		final Scanner s = new Scanner(System.in);
		int n;
		int x;
		int result;
		int i = 0; 
		int low = 0;

		System.out.println("Enter the no. of element in array : ");
		n = s.nextInt();
		
		int[] arr = new int[n];
		while (i < n) {
			System.out.println("Enter the  element : ");
			arr[i] = s.nextInt();
			i++;
		}
		
		// Enter element to find
		System.out.println("Enter the Element want to search in array : ");
		x = s.nextInt();   
		
		// Calling Binary Search Function and giving result
		result = binary_s earch(arr,x,low,n-1);
		if (result == -1){
			System.out.println("Element is not found in array")
		}
		else {
			System.out.println("Element is found at index " + result);
		}
	}

	// Binary Search Function using recurssion
	static int binarysearch(int arr[],int flag, int low,int high) {
		while(low <= high){
			int mid = (low + (high - low))/2;
			if (arr[mid] == flag){
				return mid;
			}
			else if (arr[mid] > flag){
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		return -1;
	}
}

