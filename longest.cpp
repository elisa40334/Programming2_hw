#include<iostream>
#include<vector>
using namespace std;
int lcs(string str1,string str2);

int main(){

    vector<int>lili[1024];
    string str1,str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if(i == 0 || j == 0) lili[i][j] = 0;
            else lili[i][j] = -1;
        }
    }
    for (int i = 1; i < str1.length(); i++)
    {
        string temp = str1;
        str1.erase(i);
        for (int j = 0; j < str2.length(); j++)
        {
            string temp2 = str2;
            str2.erase(j);
            lili[i][j] = lcs(str1,str2);
            str2 = temp2;
        }
        str1 = temp;
    }
    for (int j = 0; j < str2.length(); j++)
    {
        for (int i = 0; i < str1.length(); i++)
        {
            cout << "    " << lili[i][j];
        }
        cout << endl;
    }
    

}
int lcs(string str1,string str2){
    string temp = str1;
    string sub1 = str1.erase(str1.length()-1,1);
    str1 = temp;
    temp = str2;
    string sub2 = str2.erase(str2.length()-1,1);
    str2 = temp;
    if (str1[str1.length()-1] != str2[str2.length()-1])
    {
        return max( lcs(sub1, str2), lcs(str1, sub2));
    }
    return lcs(sub1,sub2) + 1;
}

