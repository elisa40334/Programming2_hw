#include<iostream>
using namespace std;
int dp[20][20];
int fdp(int start,int last,int num[]);

int main(){
    int num[20],t;
    cin >> t;
    while (t != 0)
    {
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t; j++)
            {
                dp[i][j] = 0;
            }
            
        }
        
        for (int i = 0; i < t; i++)
        {
            cin >> num[i];
        }
        for (int i = 0; i < t; i++)
        {
            dp[i][i] = num[i];
        }
        int ans = fdp(0,t-1,num);
        //cout << ans << endl;
        if (ans >= 0)
        {
            cout << "WIN" <<endl;
        }
        else cout << "LOSE" <<endl;
        cin >> t;
    }
    
}

int fdp(int start, int last,int num[]){
    if (dp[start][last] == 0)
    {
        dp[start][last] = max(num[start] -fdp(start+1,last,num),num[last] -fdp(start,last-1,num));
    }
    else
    {
        dp[start][last] = max(num[start] -dp[start+1][last],num[last] -dp[start][last-1]);
    }
    
    
    return dp[start][last];
}