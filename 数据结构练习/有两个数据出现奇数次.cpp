//λ�����ö�
#include <iostream>
using namespace std;
int  yihuotwo(int arr[], int length)
{
	int a = 0;//�ض�������0������λ��Ϊһ
	for (int i = 0; i < length; i++)
	{
		a ^= arr[i];
	}
	int rightone = a & (~a + 1);//ȡ�����Ҷ˵�1
	int onlyone = 0;//�ض�������0������λ��Ϊһ
	for (int i = 0; i < length; i++)
	{
		if((rightone&arr[i])==1)
		onlyone ^= arr[i];
	}
	int onlyzero = a ^ onlyone;
	return onlyzero;

}
//int main()
//{
//	return 0;
//}
