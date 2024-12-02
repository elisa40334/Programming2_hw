#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;


struct Time {

    int  hr , min ;
    string ans;

    Time( int h , int m ) : hr(h) , min(m) {}
    Time(){hr=0,min=0;}

    Time( const string& time ) {
        char  ch ;
        istringstream  foo(time) ;//使用sstream，建立一個流 foo
        foo >> hr >> ch >> min ;
}

};

int main(){
    Time list[1000];
    int i = 0,minn[1000],hrr[1000],check = 0;
    string aa,str;
    getline(cin,aa);
    for (int k = 0; aa[k] != '\0'; k++)
    {
        if (aa[k] != ' ')
        {
            str += aa[k];
            check++;
        }
        if(check == 5)
        {
            Time tt(str);
            tt.ans = str;
            //cout <<tt.ans << endl;
            list[i] = tt;
            str = "\0";check = 0;
            i++;
        }
    }
    for (int k = 0; k <= i; k++)
    {
        for (int j = k+1; j <= i; j++)
        {
            if (list[k].hr > list[j].hr)
            {
                Time temp = list[k];
                list[k] = list[j];
                list[j] = temp;
            }
            else if (list[k].hr == list[j].hr)
            {
                if (list[k].min > list[j].min)
                {
                    Time temp = list[k];
                    list[k] = list[j];
                    list[j] = temp;
                }
            }
        }
    }
    for (int j = 0; j <= i; j++)
    {
        cout << list[j].ans;
        if (j != i && j != 0)
        {
            cout << " ";
        }
    }
    cout << endl;
    
}