//其他所有数都出现偶数次，使用异或运算，就可以找出
#include <iostream>
using namespace std;
int  yihuo(int arr[], int length);
//int main()
//{
//	int arr[] = { 2,2,3,4,4 };
//	int a=yihuo(arr, 5);
//	cout << a;
//	system("pause");
//}
int  yihuo(int arr[],int length)
{
	int a = 0;
	for (int i = 0; i < length; i++)
	{
		a ^= arr[i];
	}
	return a;

}