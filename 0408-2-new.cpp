#include <iostream>


using namespace std ;

class  Parking_Fee {
public:
    int pf(int starh,int starm,int leah,int leam);
};

int main() {
    Parking_Fee  car ;
    int  hr1, min1, hr2, min2 ;
    while( cin >> hr1 >> min1 >> hr2 >> min2 ) {
        cout << car.pf(hr1,min1,hr2,min2)  << endl ;
    }
    
    return 0 ;
    
}

int Parking_Fee::pf(int starh,int starm,int leah,int leam){
    int price;
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
        return price;
}
