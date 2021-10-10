#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
	time_t t1,t2;
	srand(time(0)); // static random time to set the clock
	
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
	double find_time = (t2 - t1);
	cout << "time taken by finding element: " << find_time<< " seconds" <<endl<<endl;
	
	
}
