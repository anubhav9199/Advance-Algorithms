import java.util.Scanner;

// Main Class
public class Linear_Search {

    public static void main(final String[] args) {
		
		// Declearing Variable
		int n;
		int x;
		int result;
		int i = 0;
		final Scanner s = new Scanner(System.in);
		
		System.out.println("Enter the no. of element in array : ");
		n = s.nextInt();
		
		final int[] arr = new int[n];
		while (i < n) {
			System.out.println("Enter the  element : ");
			arr[i] = s.nextInt();
			i++;
		}
		
		System.out.println("Enter the Element want to search in array : ");
		x = s.nextInt();
		
		// Calling Linear Search Function
		result = linearSearch(x,arr);
		if (result == -1) {
			System.out.println("Element is not found in array");
		} else {
			System.out.println("Element is found at index " + result);
		}
	}

	// Linear Search Function
	private static int linearSearch(final int x,final int arr[]) {
		final int n = arr.length;
		for(int i = 0;i <= n;i++)
		{
			// Searching for Element
			if (arr[i] == x){
				return i;
			}
		}
		return -1;
	}
}
