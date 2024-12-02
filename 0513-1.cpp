#include<iostream>
using namespace std;

int main(){
    string str;
    int n;

    while (cin >> str >> n)
    {
        for (int i = 0; i < str.length()-n+1; i++)
        {
            string combin;
            for (int j = 0; j < n; j++)
            {
                combin += str[i+j];
            }
            if (str.find(combin) == i)
            {
                int cal = 1;
                for (int j = i+2; j < str.length()-n+1; j++)
                {
                    string combincheck;
                    for (int qq = 0; qq < n; qq++)
                    {
                        combincheck += str[j+qq];
                    }
                    //cout << "combincheck" << j <<":" <<combincheck <<endl;
                    if (combincheck == combin)
                    {
                        cal++;
                    }
                }
                cout << "< " << combin << " : " << cal << endl;
            }
        }
    }
}