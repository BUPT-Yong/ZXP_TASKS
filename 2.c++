#include<iostream>
#include<random>
using namespace std;
int main()
{
    int nums[]={3,7,9,13,14,19,21,25,42,51,7,55,63};//储存递增的有序数列
    int sz = sizeof(nums) / sizeof(nums[0]);//数组元素的总个数
    int mid = 0;//中间元素下标

    int left = 0;
    int right = sz - 1;
    int target = 0;//要查找的这个数
    cout << "请输入要查找的数：" << endl;
    cin >> target;

    while(left <= right)
    {
        mid = (left + right) / 2;//重新算中间元素下标，判
        if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else if(nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            break;
        }
    }
    if(left > right)
    {
        cout << "没有找到该数" << endl;
        
    }
    else
    {
        cout << "找到了!" << endl;
        cout << "target的下标为：" << mid << endl;
    }
}