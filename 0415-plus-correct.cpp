#include<iostream>
using namespace std;

int main(){
    int c,p,no[10000],a,n = 1,t,len;
    char instr;
    cin >> p >> c;
    while (p != 0 && c != 0)
    {
        t = 0;
        for (int i = 0; i < p || i < c; i++)
        {
            no[i] = (i%p)+1;
        }
        for (int i = 0; i < c; i++)
        {
            cin >> instr;
            if (instr == 'E')
            {
                cin >> a;
                for (int j = t; j < p || j < c; j++)
                {
                    if (no[j] == a)
                    {
                        // no[j] = no[i];
                        if (p > c)len = p;
                        else len = c;
                        for (int q = j; q >= t+1; q--)
                        {
                            no[q] = no[q-1];
                        }
                        no[t] = a;
                        break;
                    }
                }  
            }
            else t++;
        }
        cout << "Case " << n << ":" << endl;
        for (int i = 0; i < t; i++)
        {
            cout << no[i] << endl;
        }
        n++;
        cin >> p >> c;
    }
}