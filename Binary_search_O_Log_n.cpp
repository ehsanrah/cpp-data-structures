#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int binarySearchIter(int arr[], int l, int r, int x); // auxiliary function

int search(int arr[], int n, int x) // wrapper function
{
	return binarySearchIter(arr, 0, n-1, x);
}


/*
A iterative binary search funcion. It returns 
the location of x in given array arr[l...r] if
present, otherwise returns -1 
*/
int binarySearchIter(int arr[], int l, int r, int x) // auxiliary function
{
	while (l <= r)
	{
		int m = l + (r-l) / 2;

		// check if x is present at mid
		if (arr[m] == x)
			return m;
			
		//if x is greater, ignore the left half
		if (arr[m] < x)
			l = m+1;
			
		//if x is smaller, ignore the right half
		else 
			r = m-1;
		// otherwise element is not present
	}
	return -1;
}

int main()
{
	time_t t1,t2;
	srand(time(0));
	
	int arr[] = {2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	time(&t1);
	int result = search(arr, n, x);
	time(&t2);
	
	//ternary operator
	(result == -1)
		? cout << "Element is not present in array" //true case
		: cout << "Element is present at index " << result; //false case
		
	cout << endl;
	double find_time = t2 - t1;
	cout << "time taken by finding element: " << find_time<< " seconds" <<endl<<endl;
	
	
}
