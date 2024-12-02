#include<iostream>
using namespace std;
void f(int x);
int loca[9][9] = {0},n = 0;

int main(){
    f(0);
    cout << n;
}

void f(int x){
    if (x >= 9)
    {
        n++;
    }
    else
    {
        for (int j = 1; j < 9; j++)
        {
            cout << n <<endl;
            if (loca[x+1][j] != 2)
            {
                loca[x+1][j] = 1;
                for (int i = 1; i < 9; i++)
                {
                    loca[x+1][i] = 2;
                }
                for (int i = 1; i < 9; i++)
                {
                    loca[i][j] = 2;
                }
                for (int i = 1; i < 9; i++)
                {
                    if (x+1-i > 0 && j-i > 0)loca[x+1-i][j-i] = 2;
                    if (x+1+i > 0 && j-i > 0)loca[x+1+i][j-i] = 2;
                    if (x+1+i > 0 && j+i > 0)loca[x+1+i][j+i] = 2;
                    if (x+1-i > 0 && j+i > 0)loca[x+1+i][j-i] = 2;
                }
                f(x+1);
                loca[x+1][j] = 1;
                for (int i = 1; i < 9; i++)
                {
                    loca[x+1][i] = 0;
                }
                for (int i = 1; i < 9; i++)
                {
                    loca[i][j] = 0;
                }
                for (int i = 1; i < 9; i++)
                {
                    if (x+1-i > 0 && j-i > 0)loca[x+1-i][j-i] = 0;
                    if (x+1+i > 0 && j-i > 0)loca[x+1+i][j-i] = 0;
                    if (x+1+i > 0 && j+i > 0)loca[x+1+i][j+i] = 0;
                    if (x+1-i > 0 && j+i > 0)loca[x+1+i][j-i] = 0;
                }
            }
        }
    }
    
}