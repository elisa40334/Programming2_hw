#include<iostream>
using namespace std;
int loca[9][9] = {0},ans = 0;
void f(int x);

int main(){
    f(0);
    cout << ans << endl;
}

void f(int x){
    if (x == 8)
    {
        ans++;
        return;
    }
    for (int j = 0; j < 8; j++)
    {
        if (loca[x][j] == 0)
        {
            loca[x][j] += 1;
            for (int i = 0; i < 8; i++)
            {
                loca[x][i];
                
            }
            
        }
        
        
    }
    
    
}