//����������������ż���Σ�ʹ��������㣬�Ϳ����ҳ�
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