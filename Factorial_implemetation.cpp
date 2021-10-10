#include<iostream>
using namespace std;

int factUsingFor(int num)
{
	if (num == 0)
	{
		return 1;
	}
	int tot = 1;
	for (int i = 1; i<=num; i++)
	{
		tot = tot * i;
	}
	return tot;
}

int factUsingWhile(int num)
{
	if (num == 0)
	{
		return 1;
	}
	int tot = 1;
	int i = 1;
	while(i<=num)
	{
		tot*=i;
		i++;
	}
	return tot;
}

int factUsingRec(int num, int tot = 1)
{
	
	if (num<1)
	{
		return tot;
	}
	//tot = num * factUsingRec(num-1 , tot);
	tot = factUsingRec(num-1 ,  num * tot);
	
}
int main()
{
	cout<<factUsingFor(5)<<endl;
	cout<<factUsingFor(5)<<endl;
	cout<<factUsingRec(5)<<endl;
	return 0;
}
