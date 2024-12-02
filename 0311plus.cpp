#include<iostream>
#include<string>
using namespace std;
string point[10],fin,name;
int t = 0,li[10],cal = 0,st;
void f(string fin,string point[]);

int main(){
    while (cin >> name && t < 25)
    {
        t++;
        for (st = 1; st < 10000; st++)
        {
            cal = 0;
            while (name[cal] != '\0')
            {
                //int k = (int)name[cal]-(int)'A'+st;
                //point[cal] = (char)k;
                cout << name[cal];
                cal++;
            }
            for (int i = 0; point[i] != "\0"; i++)
            {
                fin += point[i];
            }
            //cout<< fin <<endl;
            f(fin,point);
            if (fin == "100")
            {
                break;
            }
        }
        if (st < 10000)
        {
            cout << st <<endl;
        }
        
        else
        {
            cout << ":(" << endl;
        }
        
    }
    
}

void f(string fin,string point[]){
    int i;
    //cout << ":(" << endl;
    for (i = 0; fin[i+1] != '\0'; i++)
    {
        
        int k = ((int)fin[i]+(int)fin[i+1])%10;
        point[i] = (char)k;
    }
    for (int j = 0; j <= i; j++)
    {
        fin += point[j];
    }
    
    if (i != 3)
    {
        f(fin,point);
    }
    
}