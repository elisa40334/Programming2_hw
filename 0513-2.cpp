#include<iostream>
using namespace std;

int main(){
    string str,firstlet[27] = {"台北市","台中市","基隆市","台南市","高雄市","台北縣","宜蘭縣","桃園縣","嘉義市","新竹縣","苗栗縣","台中縣","南投縣","彰化縣","新竹市","雲林縣","嘉義縣","台南縣","高雄縣","屏東縣","花蓮縣","台東縣","金門縣","澎湖縣","陽明山","連江縣"},sex;
    int firstnum[27] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    while (cin >> str)
    {
        int first = (int)(str[0]-'A'),addd = 0;
        addd = (firstnum[first]/10) + (firstnum[first]%10)*9;
        for (int i = 1; i < 9; i++)
        {
            addd += (int)(str[i]-'0')*(9-i);
        }
        addd += (int)(str[9]-'0');
        if (addd % 10 != 0 || str.length() != 10 || (str[1]!='1' && str[1] != '2'))
        {
            cout << "無效" << endl;
        }
        else
        {
            if (str[1] == '1')
            {
                sex = "男性";
            }
            else
            {
                sex = "女性";
            }
            cout << firstlet[first] << " " << sex << endl;
        }
    }
}