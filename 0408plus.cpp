#include<iostream>
using namespace std;

int main(){
    string text1;
    int sa = 0,sb = 0,la = 0,lb = 0,t = 0;
    while (cin >> text1)
    {
        t++;
        cout << "AB Circle #" << t << endl;
        for (int i = 0; text1[i-1] != '\0'; i++)
        {
            //cout << i << ',' << "sa" << sa;
            for (int j = i+1; j < text1[j] != '\0'; j++)
            {
                cout << i << ',' << j << "sa" << sa;
                for (int k = i; k <= j; k++)
                {
                    if (text1[k] == 'a')
                    {
                        sa += 1;
                    }
                    else if (text1[k] == 'b')
                    {
                        sb += 1;
                    }
                }
                for (int k = j+1; text1[k] != '\0'; k++)
                {
                    if (text1[k] == 'a')
                    {
                        la += 1;
                    }
                    else if (text1[k] == 'b')
                    {
                        lb += 1;
                    }
                }
                for (int k = 0; i-1 >= k && i-1 >= 0; k++)
                {
                    if (text1[k] == 'a')
                    {
                        la += 1;
                    }
                    else if (text1[k] == 'b')
                    {
                        lb += 1;
                    }
                }
                
                if (sa == lb)
                {
                    cout << i << "," << j << endl;
                }
                else if (sb == la)
                {
                    cout << i << "," << j << endl;
                }
            }
            
        }
    }
}