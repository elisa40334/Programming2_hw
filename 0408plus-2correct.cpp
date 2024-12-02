#include<iostream>
using namespace std;

int main(){
    string text1;
    int sa = 0,sb = 0,la = 0,lb = 0,t = 0,n;
    while (cin >> text1)
    {
        
        t++;
        cout << "AB Circle #" << t << ":" << endl;
        for (int i = 0; text1[i] != '\0'; i++)
        {
           n = i;
        }
        //cout << n;
        for (int i = 0; i <= n-1; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                //cout << 'x' << i << ',' << j <<endl;
                for (int k = i; k < j; k++)
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
                //cout << sa << ',' << sb <<endl;
                for (int k = j; k <= n; k++)
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
                //cout << la << ',' << lb <<endl;
                for (int k = 0; k < i && k >= 0; k++)
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
                //cout << la << ',' << lb <<endl;
                if (sa == lb)
                {
                    cout << i << "," << j << endl;
                }
                else if (sb == la)
                {
                    cout << i << "," << j << endl;
                }
                sa = 0,sb = 0,la = 0,lb = 0;
                
            }
            
        }
        cout << endl;
    }
}