#include<iostream>
using namespace std;
int f(int x,int t);
int loca[9][9] = {0},n = 0;

int main(){
    int t = 0;
    f(0,t);
    cout << n;
}

int f(int x,int t){
    if (x >= 9)
    {
        n++;
        t++;
        return t;
    }
    else
    {
        for (int j = 1; j < 9; j++)
        {
            cout << t <<endl;
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
                t = f(x+1,t);
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