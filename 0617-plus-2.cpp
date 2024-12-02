#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    while (cin >> n)
    {
        vector<int>posi,onon[25];
        string str1,str2;
        cin >> str1;
        for (int i = 0; i < n; i++)
        {
            posi.push_back(i);
            onon[i].push_back(i);
            //onon[i].push_back(i+1);
            //cout << "pish " << i << endl;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     vector<int>::iterator it;
        //     cout << i <<": ";
        //     for (it = onon[i].begin(); it < --onon[i].end(); it++)
        //     {
        //         cout << *it << " ";
        //     }
        //     cout << *it << endl;
        // }
        while (str1 != "quit")
        {
            int a,b;
            cin >> a >> str2 >> b;
            if (str1 == "move")
            {
                if (str2 == "onto")
                {
                    int i;
                    vector<int>temp;
                    temp = onon[posi[a]];
                    for (i = 0; i < temp[i] != '\0'; i++)
                    {   
                        onon[onon[posi[a]][i]].push_back(onon[posi[a]][i]);
                        posi[onon[posi[a]][i]] = onon[posi[a]][i];
                        onon[onon[posi[a]][i]].clear() ;
                        onon[onon[posi[a]][i]].push_back(onon[posi[a]][i]);
                    }
                    onon[posi[a]].clear();
                    temp = onon[posi[b]];
                    //onon[posi[b]].clear();
                    for (i = 0; i < temp[i] !='\0'; i++)
                    {
                        onon[onon[posi[b]][i]].push_back(onon[posi[b]][i]);
                        posi[onon[posi[b]][i]] = onon[posi[b]][i];
                        onon[onon[posi[b]][i]].clear() ;
                        onon[onon[posi[b]][i]].push_back(onon[posi[b]][i]);
                        //onon[posi[b]].erase(onon[posi[b]].begin()+i);
                    }
                    posi[b] = b;
                    onon[posi[b]].push_back(a);
                    onon[a].pop_back();
                    posi[a] = b;
                }
                else{

                }
            }
            
            cin >> str1;
        }
        for (int i = 0; i < n; i++)
        {
            vector<int>::iterator it;
            cout << i <<": ";
            for (it = onon[i].begin(); it < --onon[i].end(); it++)
            {
                cout << *it << " ";
            }
            cout << *it << endl;
        }
        
    }
    
}