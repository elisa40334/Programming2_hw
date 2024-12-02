#include<iostream>
using namespace std;

int main(){
    int a[9],check = 0,sum;
    while (cin >> a[0])
    {
        sum = a[0];
        check = 0;
        for (int i = 1; i < 9; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < 9; i++)
        {
            if (a[i] != 0)
            {
                if (a[i] > 1 || (a[i] < -1 && check == 0))
                {
                    cout << a[i];
                }
                else if (a[i] == -1 && check == 0)
                {
                    cout << "-";
                }
                else if (a[i] < -1)
                {
                    cout << -a[i];
                }
                if (i != 8 && i != 7)
				{
					cout << "x^" << 8 - i;
				}
				else if (i == 7)
				{
					cout <<"x";
				}
                else if (i == 8 && (a[i] == 1 || a[i] == -1))
                {
                    cout << 1;
                }
                
               
                    for (int q = i+1; q < 9; q++)
                    {
                        if (a[q] > 0 && a[i] != 0) {
                                cout << " ";
                                cout << "+";
                                cout << " ";
                            
                            break;
                        }
                        else if (a[q] < 0 )
                        {
                                //cout << endl << a[i+1] << endl;
                            cout << " ";
                            cout << "-";
                            cout << " ";
                            break;
                            }
                    }
                check += 1;
            }
        }
        if (sum == 0)
		{
			cout << 0 ;
		}
		cout << endl;
    }
}