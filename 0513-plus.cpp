#include<iostream>
using namespace std;

int main(){
    string str;
    bool check = true;
    while (cin >> str)
    {
        int ipv4 = str.find("."),ipv6 = str.find(":"),cal = 0;
        string ip4[4],ip6[8];
        check = true;
        //cout << ipv4 << "::" << ipv6;
        if (ipv4 != str.length() && ipv6 == -1)
        {
            // cout << "ipv4" << endl;
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] != '.') ip4[cal] += str[i];
                else cal++;
            }
            if (cal > 3) check = false;
            for (int i = 0; i <= 3; i++)
            {
                if (ip4[i][0] == '0' || ip4[i] >= "256" || ip4[i] < "0")
                {
                    cout << "N" << endl;
                    check = false;
                    break;
                }
            }
            if (check == true) cout << "IPv4" <<endl;
        }
        if (ipv6 != str.length() && ipv4 == -1)
        {
            //cout << "ipv6" << endl;
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] != ':') ip6[cal] += str[i];
                else cal++;
            }
            if (cal > 7) check = false;
            for (int i = 0; i <= cal; i++)
            {
                if (ip6[i] == "\0" || ip6[i].length() > 4)
                {
                    cout << "N" << endl;
                    check = false;
                    break;
                }
            }
            if (check == true) cout << "IPv6" <<endl;
        }
    }
}