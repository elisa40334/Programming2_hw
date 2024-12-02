#include<stdio.h>    
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//請設計一樣板函式，完成找出最小排序數的功能。
template<class T>
void smallestNumber(const T& str){
    string a = str;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = i+1; j < a.length(); j++)
        {
            if (a[i] > a[j])
            {
                char c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    if (a[0] == '0')
    {
        for (int j = 1; j < a.length(); j++)
        {
            if (a[j] != '0')
            {
                char c = a[j];
                a[j] = a[0];
                a[0] = c;
                break;
            }
        }
    }
    cout << a << endl;
}
void smallestNumber(vector<int> nums){
    sort(nums.begin(),nums.end());
    if (nums[0] == 0)
    {
        for (int j = 1; j != nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                int c = nums[j];
                nums[j] = nums[0];
                nums[0] = c;
                break;
            }
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    cout << endl;
}

int main()
{
	string str;
	std::cin >> str;
	smallestNumber(str);
	std::vector<int> nums;
	std::transform(str.begin(), str.end(), std::back_inserter(nums),
		[](char c){ 
            return c-'0'; 
            });
	smallestNumber(nums);
}