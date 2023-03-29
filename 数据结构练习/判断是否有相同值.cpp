#include <iostream>
using namespace std;
//#include <vector>



//break不能跳出多重循环
int main1()
{
	int nums[] = { 0,4,5,0,3,6 };
    bool temp;
    //tap键选中提示词
    int lent = 6;
    for (int i = 1; i < lent; i++)//i=3
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                temp = true;
                cout << "wei" << endl;
                return 0;
                //break;

            }
            else
                cout << i << j << endl;
                temp = false;

        }
    }
    cout<< temp<<endl;
    system("pause");

}
