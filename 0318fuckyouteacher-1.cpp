/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
#include<iostream>
using namespace std;  
  
struct mines {//存放地雷的x,y軸  
    int x;  
    int y;  
    mines *next;  
};  
  
mines *h=nullptr;  
  
mines * x_sort(int k);  
  
int detonate_count();  
  
  
int main()  
{  
    int a, b, c;  
    cin >> a >> b >> c;  
    mines *t; //h紀錄該串列的起始  
    for (int i=0; i<c; i++) {//建立鏈結串列d  
        mines *mine = new mines;  
        cin >> mine->x >> mine->y;  
          mine->next = nullptr;  
        if(h == nullptr){  
            h = mine;  
            t = mine;  
        }else{  
            t->next = mine;  
            t = mine;  
        }  
    }  
    h = x_sort(c-1);//針對地雷的x軸做排序  
    cout << detonate_count() << endl;//計算引爆次數  
}  
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/

mines * x_sort(int k){
    mines *t = h;
    for (int i = 0; i <= k; i++)
    {
        while ((t->next)->next != nullptr)
        {
            if ((t->next)->x > ((h->next)->next)->x)
            {
                mines *temp;
                temp = t->next;
                t->next = (t->next)->next;
                (t->next)->next = temp;
            }
            t = t->next;
        }
    }
}
int detonate_count(){
    mines *t = h;
    while (t->next != nullptr)
    {
        /* code */
    }
    
}