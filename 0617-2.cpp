//參考程式碼
#include <iostream>
#include <vector>
#include <list>
#include <iomanip>
using namespace std;
/*write code here
template <typename T> //可自由設計樣板 Abs, inner_product
...
…*/
template <class A>
struct Abs{
    int operator()(const A& a) const{
        return abs(a);
    }
};
template <class T,class F,class K>  
int inner_product( const T& ax ,const T& ay, const K& bx,int sum,F fn)  
{
    std::list<int>::iterator it = bx;
    for (T i = ax; i != ay; i++)
    {
        sum += (fn(*i) * fn(*it)); 
        it++;
    }
    return sum;
}  
int main() { //請勿更動main()函式的程式碼

    vector<int> a;
    list<int> b;
    int input, sum = 0;

    cin >> input; //將元素輸入至容器vector,list中
    for(int i=0;i<input;i++){
        int element;
        cin >> element;
        a.push_back(element);
    }
    for(int i=0;i<input;i++){
        int element;
        cin>>element;
        b.push_back(element);
    }
    //輸出兩個容器元素的絕對值乘積和
    cout << "The absolute inner product of a and b = " 
         << inner_product( a.begin() , a.end() ,b.begin() , sum , Abs<int>()) << endl;
    //Abs<int>()可看成Abs結構/類別中的運算子()覆載
    return 0 ;
}