#include<iostream>
using namespace std;

int main(){
    int n,m,a[10000],b[10000],cal = 1;
    cin >> n >> m;
    while (n != 0 && m != 0)
    {
        int check = 0;
        cout << "CASE# " << cal << ":" << endl;
        cal++;
        int j;
        for (j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            //cout << b[i] << "B" << m << "m";
            for (int q = 0; q < j; q++)
            {
                if (b[i] == a[q])
                {
                    cout << b[i] << " found at " << q+2 << endl;
                    check++;
                    break;
                }
            }
            if (check == 0)
            {
                cout << b[i] << " not found" << endl;
            }
            
        }
        cin >> n >> m;
    }
    
}