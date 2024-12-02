#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while (cin >> n)
    {
        vector<int> vec[25];
        string str;
        cin >> str;
        while(str != "quit"){
            int a,b;
            string ss;
            cin >> a >> ss >> b;
            if (str == "pile")
            {
                vec[b].push_back(a); 
                vec[a].erase(vec[b].end()-1); 
            }
            else if (str == "move")
            {
                if (ss == "onto")
                {
                    vector<int>temp;
                    temp = vec[b];
                    for (int i = 0; i < vec[b].size(); i++)
                    {
                        vec[vec[b][i]].push_back(vec[b][i]);
                        vec[b].erase(vec[b].begin()+i); 
                    }
                    for (int i = 0; i < vec[a].size(); i++)
                    {
                        vec[a].push_back(a);
                        vec[b].erase(vec[b].begin()+i); 
                    }
                    vec[b].push_back(a); 
                }
                else{

                }
            }
            cin >> str;
        }
    }
    
}