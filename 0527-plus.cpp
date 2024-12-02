#include<iostream>
using namespace std;

int main(){
    int n,m,cal[100];
    string cc[100];
    cin >> n >> m;
    for (int j = 0; j < m; j++)
    {
        cc[j] = "\0";
        cal[j] = 0;
        cin >> cc[j];
        for (int i = 0; i < n-1; i++)
        {
            for (int q = i+1; q < n; q++)
            {
                if ((int)cc[j][q] < (int)cc[j][i])
                {
                    cal[j]++;
                    //cout << cc[j][i] << " "<< q << ":" << cc[j][q] << cal[j] << endl;
                }
            }
        }
        //cout << cc[j] << cal[j] << endl;
    }
    for (int i = 0; i < m-1; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            if (cal[i] > cal[j])
            {
                int temp = cal[j];
                string aa = cc[j];
                for (int qq = j; qq >= i+1; qq--)
                {
                    cal[qq] = cal[qq-1];
                    cc[qq] = cc[qq-1];
                    // int tenp = cal[i];
                    // cal[i] = cal[j];
                    // cal[j] = tenp;
                    // string aa = cc[i];
                    // cc[i] = cc[j];
                    // cc[j] = aa;
                }
                cal[i] = temp;
                cc[i] = aa;
            }   
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << cc[i] << endl;
    }
    
}