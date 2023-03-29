//ц╟ещеепР
#include <iostream>
//void sort_bubble();
using namespace std;
void swap(int arr[], int i, int j);


void bubble_sort(int arr[], int length)
{
	if (length < 2||arr==NULL)
	{
		return;
	}
	for (int e = length; e > 0; e--)
	{
		for (int i = 0; i < e; i++) { 
			if (arr[i] > arr[i + 1])
			{
				swap(arr, i, i + 1);
			}
		}

	}
	
}
void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];

}



