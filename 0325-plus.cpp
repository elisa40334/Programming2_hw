#include<iostream>
using namespace std;
int f(int n, int check,int cou);
int f11(int n, int check,int cou11);

int main() {
	int n;
	cin >> n;
	while (n != 0)
	{
		int cou = 0,cou11 = 0;
		int ans = f(n,1,cou);
        int ans11 = f(n,1,cou11);
        if (ans11 < ans)
        {
            cout << ans11 << endl;
        }
        else
        {
            cout << ans << endl;
        }
		cin >> n;
	}
}

int f(int n, int check,int cou) {
	int x = n;
	if (check == 1)
	{
		for (int i = 1; x > 0; i*=2)
		{
			x -= i;
			cou++;
		}
		if (x == 0)
		{
			return cou;
		}
		else
		{
			return f(x, -1, cou);
		}
	}
	else if (check == -1)
	{
		for (int i = 1; x < 0; i *= 2)
		{
			x += i;
			cou++;
		}
		if (x == 0)
		{
			return cou;
		}
		else
		{
			return f(x, 1, cou);
		}
	}
}

int f11(int n, int check,int cou11){
    int x = n;
    if (check == 1)
    {
        for (int i = 1; x > 0; i*=2)
		{
			if (x-i > 0)
            {
                x -= i;
                cou11++;
            }
            else if (x-i == 0)
            {
                return cou11++;
            }
		}
        return f11(x, -1, cou11);
    }
    else
    {
        for (int i = 1; x < 0; i*=2)
		{
			if (x-i < 0)
            {
                x += i;
                cou11++;
            }
            else if (x-i == 0)
            {
                return cou11++;
            }
		}
        return f11(x, -1, cou11);
    }
    
}