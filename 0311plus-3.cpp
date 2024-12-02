#include<iostream>
#include<string>
using namespace std;
int t = 0,cal;
string name,conse,cha;
char cha11;

int main(){
    // while (cin >> name && t < 25)
    // {
        cin >> name;
        t++;
        
        for (int i = 0; name[i] != '\0'; i++)
            {
                int k = (int)name[i] - (int)'A' + 148;//st = 60
                std::string cha = std::to_string(k);
                conse += cha;
                //cout << cha << endl;
                //cout << conse << endl;
            }
            cout << conse << endl;
            AA:
            for (cal = 0; conse[cal+1] != '\0'; cal++)
            {
                //cout << conse[i] << endl;
                int k = ((int)conse[cal]-(int)'0'+(int)conse[cal+1]-(int)'0')%10;
                // cout << "i" << i << endl;
                // cout << "k" << k << endl;
                // std::string cha = std::to_string(k);
                conse[cal] = '0'+k;
                //cout << conse[cal] << endl;
            }
            conse[cal] = '\0';
            cout << conse << endl;
            if (cal > 3)goto AA;
            if (conse[0] == '1' && conse[1] == '0' && conse[2] == '0')
            {
                cout << 148 << endl;
            }
            else if((conse[0] != '1' || conse[1] != '0' || conse[2] != '0')){
                cout << ":(" << endl;
            }
        
        
    // }
    
}
