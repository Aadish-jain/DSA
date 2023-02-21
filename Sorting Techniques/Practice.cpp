#include <bits/stdc++.h>
using namespace std;

void swap(string *a, string *b)
{
	string temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(string arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[min], &arr[i]);
		}
	}
}

void printArray(string arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	//char arr[]= {'a','d','b'};
	string arr[]= {"jain", "aadish", "aaj", "aj"};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}