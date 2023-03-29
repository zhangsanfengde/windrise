#include <iostream>
//void sort_bubble();
using namespace std;

void swap(int arr[], int i, int j);
void insertion_sort(int arr[], int length)
{
	if (length < 2 || arr == NULL)
	{
		return;
	}
	for (int i = 1; i < length; i++) 
	{
		for (int j = i-1; j >= 0&&arr[j]>=arr[j+1]; j--)//forºÍifºÏ³ÉÐ´
		{
			
				swap(arr, j, j+1);
		}
	}



}
void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];

}
