#include<iostream>
#include<string>
#include<stdio.h>

using std::cout; using std::cin;
using std::endl; using std::string;

using namespace std;
string point[10],fin,name;
int t = 0,li[10],cal = 0,st;
void f(string fin,string point[]);

int main(){
    cin >> name;
    //cout << name[0];
    //cout << (int)name[0]-(int)'A';
    int q = (int)name[0]-(int)'A'+10000;
    cout << q << endl;
    std::string qq = std::to_string(q);
    cout << "string" << qq;
}