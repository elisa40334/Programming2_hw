#include <iostream>

#include <iomanip>

using namespace std;

const int MAX_MINUTE = 10;

class  Timer {

    private:
    int  min, sec;

    public:
    Timer() : min(0), sec(0) {}
    Timer( int s) : min(s / 60), sec(s % 60) {
        while (min >= MAX_MINUTE) min -= MAX_MINUTE;
    }
    Timer( int m,  int s) : min(m), sec(s) {
        while (min >= MAX_MINUTE) min -= MAX_MINUTE;
    }

    Timer  operator++ (){
        sec++;
        if (sec >=60)
        {
            min++;
            sec%=60;
        }
        return *this;
        
    }
    Timer  operator-- (int){
        Timer  chang = *this ;
        --sec ;
        if (sec < 0)
        {
            min -= 1;
            sec += 60;
        }
        if (min < 0)
        {
            min = MAX_MINUTE-1;
        }
        
        return  chang  ;
    }
    friend  Timer  operator+ (const Timer& a, const Timer& b){
        int s,m;
        s = a.sec + b.sec;
        m = a.min + b.min + s/60;
        while (m >= MAX_MINUTE) m -= MAX_MINUTE;
        s %= 60;
        return Timer(m,s);
    }
    friend  ostream &operator<< (ostream& yy, const Timer& foo){
        return yy << setfill('0') << setw(2) << foo.min << " : " << setfill('0') << setw(2)<< foo.sec;
    }
};

int main() {

    int input_1, input_2;

    while (cin >> input_1 >> input_2)

    {
        Timer  foo;
        foo = foo + input_1;
        cout << foo << endl;
        foo = input_2 + foo;
        cout << foo << endl;
        cout << ++foo << endl;
        foo = input_2;
        for (int i = input_2; i >= 0; --i)
            cout << foo-- << endl;
    }

    return 0;

}


