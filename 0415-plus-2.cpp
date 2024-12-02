#include<iostream>
using namespace std;

int main(){
    int c,p,no[10000],a,n = 1,t;
    char instr;
    cin >> p >> c;
    while (p != 0 && c != 0)
    {
        t = 0;
        cout << "Case " << n << " " << endl;
        
        for (int i = 0; i < c; i++)
        {
            cin >> instr;
            if (instr == 'E')
            {
                cin >> a;
                cout << a << endl;
            }
            else
            {
                cout << (t%p)+1 << endl;
                t += 1;
            }
        }
        
        n++;
        cin >> p >> c;
    }
    
}