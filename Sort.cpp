#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int a[], int n)
{
	int max;
	for(int i = n-1; i > 0; i--)
	{
		max = i;
		for(int j = i-1; j >= 0; j--)
		{
			if(a[j] > a[max])
			{
				max = j;
			}
		}
		if(max != i)
		{
			swap(a[max],a[i]);
		}
	}
}

void heapify(int a[], int n, int i)
{
	int left = 2*i + 1, right = 2*i + 2, largest = i;
	if(left < n && a[left] > a[largest])
	{
		largest = left;
	}
	if(right < n && a[right] > a[largest])
	{
		largest = right;
	}
	if(largest != i)
	{
		swap(a[largest],a[i]);
		heapify(a,n,largest);
	}
}

void heapSort(int a[], int n)
{
	for(int i = n/2 - 1; i >= 0; i--)
	{
		heapify(a,n,i);
	}
	
	for(int i = n - 1; i >= 0; i--)
	{
		swap(a[i],a[0]);
		heapify(a,i,0);
	}
}

int main()
{
	return 0;
}
