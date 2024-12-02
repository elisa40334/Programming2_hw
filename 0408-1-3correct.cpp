#include<iostream>
using namespace std;
int ans = 0,loca[9][9] = {0};
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
    for (int j = 1; j <= 8; j++)
    {
        //cout << ans << endl;
        if (loca[x+1][j] == 0)
        {
            loca[x+1][j] += 1;
            //cout << "x" << x+1 << "y" << j << endl;
            for (int i = 1; i < 9; i++)
            {
                loca[i][j] += 1;
                if (x+1-i > 0 && j-i > 0 && x+1-i < 9 && j-i < 9)loca[x+1-i][j-i] += 1;
                if (x+1+i > 0 && j-i > 0 && x+1+i < 9 && j-i < 9)loca[x+1+i][j-i] += 1;
                if (x+1+i > 0 && j+i > 0 && x+1+i < 9 && j+i < 9)loca[x+1+i][j+i] += 1;
                if (x+1-i > 0 && j+i > 0 && x+1-i < 9 && j+i < 9)loca[x+1-i][j+i] += 1;
            }
            f(x+1);
            loca[x+1][j] -= 1;
            for (int i = 1; i < 9; i++)
            {
                loca[i][j] -= 1;
                if (x+1-i > 0 && j-i > 0 && x+1-i < 9 && j-i < 9)loca[x+1-i][j-i] -= 1;
                if (x+1+i > 0 && j-i > 0 && x+1+i < 9 && j-i < 9)loca[x+1+i][j-i] -= 1;
                if (x+1+i > 0 && j+i > 0 && x+1+i < 9 && j+i < 9)loca[x+1+i][j+i] -= 1;
                if (x+1-i > 0 && j+i > 0 && x+1-i < 9 && j+i < 9)loca[x+1-i][j+i] -= 1;
            }
        }
    }
}