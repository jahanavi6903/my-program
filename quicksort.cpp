#include<iostream>
using namespace std;
class quick
{
	int a[10];
	public:
	void input(int);
	void quicksort(int,int);
	int partition(int*, int, int);
	void output(int);
	
};

void quick::input(int n)
{
	cout<<"ENTER THE ELEMENTS TO BE SORTED\n";
	for(int i=0;i<n; i++)
	{
		cin>>a[i];
	}
}

void quick::output(int n)
{
	cout<<"THE SORTED ELEMENTS AFTER QUICK SORT ARE\n";
	for(int i=0;i<n; i++)
	{
		cout<<a[i]<<" ,";
	}
	
}


void quick::quicksort(int low, int high)
{
	if(low<high)
	{
		int loc = partition(a, low,  high);
		quicksort(low, loc-1);
		quicksort(loc+1,high);
	}
}

int quick::partition(int a[], int low, int high)
{
	int loc = a[low];
	int i = low;
	int j = high;
	while(i<j)
	{
		while(a[i]<loc)
		{
			i++;
		}
		while(a[j]>loc)
		{
			j--;
		}
		if(i<j)
		{
			int t= a[i];
			a[i] =a[j];
			a[j] = t;
		}
	}
	int t= loc;
	loc = a[j];
	a[j] = t;
	return j;
	
}

int main()
{
	quick k;
	int n;
	cout<<"enter the number of elements to be sorted\n";
	cin>>n;
	k.input(n);
	k.quicksort(0,n-1);
	k.output(n);
	return 0;
}

