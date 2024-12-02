#include <iostream>  
#include <vector> // 使用向量陣列容器與相關的迭代器  
#include <list>
#include <algorithm> // 使用排序演算函式  Q1: (填充)請問  print_container  函式，最終會  輸出什麼結果?  
using namespace std ;  //定義樣板函式，用以比較兩筆資料的個位數字大小  
//template <class T>  struct compare {  bool operator()(const T& a, const T& b ) const {  return a%10 > b%10 ; }  };  //定義泛型函式，用以列印容器資料  
template <typename A>
// void Abs(A a){
//     return abs(a);
// }
struct Abs{
    int operator()(const A& a) const{
        return abs(a);
    }
};
template <class T,class F,class K>  
int print_container(T a , T b,K c,int sum,F fn)  
{
    std::list<int>::iterator it = c;
    for ( T i = a ; i != b ; ++i) 
    {
        
        cout << *i << " "; 
        cout << *c << endl;
        sum += (fn(*i)*fn(*(c)));
        c++;
    }
    cout << sum;
    return sum;
}  
int main() {  
    vector<int> foo(20); //定義可存 20個整數的向量陣列容器 
    list<int>kk(20); 
    list<int>::iterator j; 
    vector<int>::iterator i; //定義處理整數向量陣列的迭代器物件  // 利用迭代器物件將整數 1 到 20 一一存入 foo 向量陣列內  
    int no = 1,sum = 0 ;  
    for ( i = foo.begin() ; i != foo.end() ; ++i ) *i = no++ ;  //利用排序演算函式將向量陣列元素依個位數的大小由大到小重作排序  
    for ( j = kk.begin() ; j != kk.end() ; ++j ) *j = no-- ;
    //sort( foo.begin() , foo.end() , compare<int>() ) ;  //利用自定函式印出向量陣列的元素且元素之間以空白分開  
    sum = print_container( foo.begin() , foo.end() ,kk.begin(),sum,Abs<int>()) ;  
    cout << endl ; return 0; 
}