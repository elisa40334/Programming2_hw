#include<iostream>
using namespace std;

int main(){
    int p,c,n = 1,no[10000],a,len;
    char comm;
    string nos;
    cin >> p >> c;
    while (p != 0 && c != 0)
    {
        if (p > c) len = p;
        else len = c;
        for (int i = 0; i < len; i++)
        {
            no[i] = (i%p)+1;
        }
        
        for (int i = 0; i < c; i++)
        {
            cin >> comm;
            if (comm = 'E')
            {
                cin >> a;
                for (int qq = len-1; i+1 > qq; qq--)
                {
                    no[qq] = no[qq-1];
                }
                for (int k = i; k < len; k++)
                {
                    if (no[k] == a)
                    {
                        
                        
                    }
                    
                }
                
            }
            
        }
        
   
    
        n++;
        cin >> p >> c;
    }
    
}