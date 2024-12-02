#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    for (int i = r.length()+1; i <= 5; i++)
    {
        r += '0';
    }
    string rr(r.rbegin(), r.rend());
    return rr;
}

int main(){
    int k,no[10000];
    string str,str11,strff,strans,hex[17] = {"0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f"};
    // cin >> k ;
    while (cin >> k >> str)
    {
        strff = "\0";
        strans = "\0";
        for (int i = 0; i < str.length(); i++)
        {
            no[i] = (int)((str[i]-'A')+k)%31+1;
            //no[i] = no[i]%25+1;
            strff += toBinary(no[i]);
            // cout <<"no["<< i << "]" << no[i] <<endl;
            // cout << strff << endl;
        }
        //cout << strff << endl;
        //cout << strff.length() << endl;
        strff += "00000";
        while (strff.length()%16 != 0)
        {
            strff += "0";
        }
        //cout << strff << endl;
        for (int i = 0; i <= strff.length()-4; i += 4)
        {
            int kk = (int)(strff[0+i]-'0')*8+(int)(strff[1+i]-'0')*4+(int)(strff[2+i]-'0')*2+(int)(strff[3+i]-'0');
            //cout << kk <<endl;
            strans += hex[kk];
        }
        //strans += "00";
        cout << strans << endl;
    }
}