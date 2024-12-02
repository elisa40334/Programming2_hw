#include<iostream>
using namespace std;

int main(){
    int starh,starm,leah,leam,price;
    while (cin >> starh >>starm >> leah >> leam)
    {
        if (leah-starh <= 2)
        {
            price = 50*(leah-starh);
            if (leam-starm > 0 && leah-starh == 2)
            {
                price += 40;
            }
            if (leam-starm > 0 && leah-starh < 2)
            {
                price += 50;
            }
        }
        
        else if (leah-starh > 2 && leah-starh <= 10)
        {
            price = 100 + (leah-starh-2)*40;
            if (leam-starm > 0 && leah-starh == 10)
            {
                price += 30;
            }
            if (leam-starm > 0 && leah-starh < 10)
            {
                price += 40;
            }
        }
        else
        {
            price = 100 + 8*40 + (leah-starh-10)*30;
            if (leam-starm > 0)
            {
                price += 30;
            }
        }
        cout << price << endl;
    }
    
    
}