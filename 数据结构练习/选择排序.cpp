//ð������
#include <iostream>
//void sort_bubble();
using namespace std;

void swap(int arr[], int i, int j);
void selection_sort(int arr[], int length);


void selection_sort(int arr[], int length)
{
	if (length < 2 || arr == NULL)
	{
		return;
	}
	for (int i = 0; i < length - 1; i++) {

		int mindex = i;//��С�����
		for (int j = i + 1; j < length; j++)
		{
			mindex = arr[i] < arr[j] ? j : mindex;
		}
		swap(arr, i, mindex);//����Сֵ������һλ
	}
}

	
	//void swap(int arr[], int i, int j)
void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];

}

