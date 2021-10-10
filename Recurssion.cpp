#include<iostream>
using namespace std;


// Non-recursive version
void countdown(int num)
{
	for(int i = num; i>0; i--)
	{
		cout<<i<<endl;
	}
	cout<<"Blast off"<<endl;
}


// Recursive version
void countdownRecursive(int num)
{
	if (num<1)
	{
		cout<<"Blast off";
		return;
	}
	else
	{
		cout<<num<<endl;
		countdownRecursive(num-1);
	}
	
}
int main()
{
	//countdown(10);
	countdownRecursive(10);	
	return 0;
}
