//位运算快得多
#include <iostream>
using namespace std;
int  yihuotwo(int arr[], int length)
{
	int a = 0;//必定不等于0，必有位置为一
	for (int i = 0; i < length; i++)
	{
		a ^= arr[i];
	}
	int rightone = a & (~a + 1);//取出最右端的1
	int onlyone = 0;//必定不等于0，必有位置为一
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
