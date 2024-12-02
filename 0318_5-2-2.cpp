#include<iostream>
using namespace std;
struct site
{
    int x,y;
};
site boom[100];
int posi[100][100] = {0},ca = 0;
void boomboom(int n,int a,int b);

int main(){
    int xx,yy,n;
    cin >> xx >> yy >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> boom[i].x >> boom[i].y;
        posi[boom[i].x][boom[i].y] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        if (posi[boom[i].x][boom[i].y] == 2)ca ++;
        boomboom(n,boom[i].x,boom[i].y);
    }
    cout << ca << endl;
}
void boomboom(int n,int a,int b){
    if(posi[a][b] == 2)
    {
        posi[a][b] = 1;
        if (posi[a+1][b] == 2)boomboom(n,a+1,b);
        if (posi[a+1][b+1] == 2)boomboom(n,a+1,b+1);
        if (posi[a+1][b-1] == 2)boomboom(n,a+1,b-1);
        if (posi[a-1][b-1] == 2)boomboom(n,a-1,b-1);
        if (posi[a][b-1] == 2)boomboom(n,a,b-1);
        if (posi[a][b+1] == 2)boomboom(n,a,b+1);
        if (posi[a-1][b+1] == 2)boomboom(n,a-1,b+1);
        if (posi[a-1][b] == 2)boomboom(n,a-1,b);
        if (posi[a-2][b] == 2)boomboom(n,a-2,b);
        if (posi[a-2][b-1] == 2)boomboom(n,a-2,b-1);
        if (posi[a-2][b+1] == 2)boomboom(n,a-2,b+1);
        if (posi[a-2][b-2] == 2)boomboom(n,a-2,b-2);
        if (posi[a-2][b+2] == 2)boomboom(n,a-2,b+2);
        if (posi[a+2][b] == 2)boomboom(n,a+2,b);
        if (posi[a+2][b-1] == 2)boomboom(n,a+2,b-1);
        if (posi[a+2][b+1] == 2)boomboom(n,a+2,b+1);
        if (posi[a+2][b-2] == 2)boomboom(n,a+2,b-2);
        if (posi[a+2][b+2] == 2)boomboom(n,a+2,b+2);
        if (posi[a][b+2] == 2)boomboom(n,a,b+2);
        if (posi[a+1][b+2] == 2)boomboom(n,a+1,b+2);
        if (posi[a-1][b+2] == 2)boomboom(n,a-1,b+2);
        if (posi[a][b-2] == 2)boomboom(n,a,b-2);
        if (posi[a-1][b-2] == 2)boomboom(n,a-1,b-2);
        if (posi[a+1][b-2] == 2)boomboom(n,a+1,b-2);
    }
}