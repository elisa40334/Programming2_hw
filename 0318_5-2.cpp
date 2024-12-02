#include <iostream>
using namespace std;
struct site
{
    int x,y;
};
void check(int n,int count);
void boomboom(int lar,int count ,int n,int a,int b);
int posi[100][100] = {0};
site boom[100];
int lar,t;

int main(){
    int xx,yy,n,posi[100][100] = {0},posi_status[100][100][10],count;
    cin >> xx >> yy >> n;
    for (int i = 0; i < n; i++)cin >> boom[i].x >> boom[i].y;
    t = n;
    check(n,count);
    cout << t<< endl;
}

void check(int n,int count){
    if (boom[count].x != 0)
    {
        for (int i = count+1; i < n; i++)
        {
            if (boom[i].x == boom[count].x+1 && boom[i].y == boom[count].y+1)
            {
                posi[boom[i].x + 1][boom[i].y+1] += 1;
                if (posi[boom[i].x + 1][boom[i].y+1] > lar)lar = posi[boom[i].x + 1][boom[i].y+1];
            }
            else if (boom[i].x == boom[count].x+1 && boom[i].y == boom[count].y)
            {
                posi[boom[i].x + 1][boom[i].y] += 1;
                if (posi[boom[i].x + 1][boom[i].y] > lar)lar = posi[boom[i].x + 1][boom[i].y];
            }
            else if (boom[i].x == boom[count].x && boom[i].y == boom[count].y+1)
            {
                posi[boom[i].x][boom[i].y+1] += 1;
                if (posi[boom[i].x][boom[i].y+1] > lar)lar = posi[boom[i].x][boom[i].y+1];
            }
            else if (boom[i].x == boom[count].x-1 && boom[i].y == boom[count].y-1)
            {
                posi[boom[i].x - 1][boom[i].y - 1] += 1;
                if (posi[boom[i].x - 1][boom[i].y-1] > lar)lar = posi[boom[i].x - 1][boom[i].y-1];
            }
            else if (boom[i].x == boom[count].x-1 && boom[i].y == boom[count].y)
            {
                posi[boom[i].x - 1][boom[i].y] += 1;
                if (posi[boom[i].x - 1][boom[i].y] > lar)lar = posi[boom[i].x - 1][boom[i].y];
            }
            else if (boom[i].x == boom[count].x && boom[i].y == boom[count].y-1)
            {
                posi[boom[i].x][boom[i].y - 1] += 1;
                if (posi[boom[i].x][boom[i].y-1] > lar)lar = posi[boom[i].x][boom[i].y-1];
            }
            else if (boom[i].x == boom[count].x+1 && boom[i].y == boom[count].y-1)
            {
                posi[boom[i].x + 1][boom[i].y - 1] += 1;
                if (posi[boom[i].x + 1][boom[i].y-1] > lar)lar = posi[boom[i].x + 1][boom[i].y-1];
            }
            else if (boom[i].x == boom[count].x-1 && boom[i].y == boom[count].y+1)
            {
                posi[boom[i].x - 1][boom[i].y + 1] += 1;
                if (posi[boom[i].x - 1][boom[i].y+1] > lar)lar = posi[boom[i].x - 1][boom[i].y+1];
            }
        }
        if(lar == posi[boom[count].x + 1][boom[count].y])boomboom(lar,count,n,boom[count].x + 1,boom[count].y);
        else if (lar == posi[boom[count].x + 1][boom[count].y+1])boomboom(lar,count,n,boom[count].x + 1,boom[count].y+1);
        else if (lar == posi[boom[count].x][boom[count].y+1])boomboom(lar,count,n,boom[count].x,boom[count].y+1);
        else if (lar == posi[boom[count].x - 1][boom[count].y-1])boomboom(lar,count,n,boom[count].x - 1,boom[count].y-1);
        else if (lar == posi[boom[count].x - 1][boom[count].y])boomboom(lar,count,n,boom[count].x - 1,boom[count].y);
        else if (lar == posi[boom[count].x][boom[count].y-1])boomboom(lar,count,n,boom[count].x,boom[count].y-1);
        else if (lar == posi[boom[count].x + 1][boom[count].y-1])boomboom(lar,count,n,boom[count].x + 1,boom[count].y-1);
        else if (lar == posi[boom[count].x - 1][boom[count].y+1])boomboom(lar,count,n,boom[count].x - 1,boom[count].y+1);
        t -= lar;
        lar = 0;
        
    }
    count++;
    check(n,count);
    
}
void boomboom(int lar,int count ,int n,int a,int b){
    for (int i = count; i < n; i++)
    {
        if (a == boom[i].x && b == boom[i].y)boom[i].x = 0;
    }
}