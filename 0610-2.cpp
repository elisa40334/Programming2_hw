/*----預設代碼部分----*/
#include <iostream>
#include<cmath> 
using namespace std;
template<class T>
T sum(T a,T b){
    return a+b;
}
template<class T>
T abs_sum(T a,T b){
    return abs(a)+abs(b);
}
template<class T>
T product(T a,T b){
    return a*b;
}
template<class F,class P,class T>
T compute(F fn,P foo[],int len,T ans){
    for (int i = 0; i < len; i++)
    {
        ans = fn(ans,foo[i]);
    }
    return ans;
}
//設計樣板
/*write code here
template <typename T> //可自由設計樣板sum, abs_sum,product, compute
...
…*/
int main() { //請勿更動main()函式裡的程式碼
    int foo[10];
    int S;
    cin >> S;
    for(int i=0; i<S; i++) cin >> foo[i];
    int v;
    v = 0;
    cout << compute(sum<int>, foo, S, v) << endl;
    v = 0;
    cout << compute(abs_sum<int>, foo, S, v) << endl;
    v = 1;
    cout << compute(product<int>, foo, S, v) << endl;
    return 0;
}
