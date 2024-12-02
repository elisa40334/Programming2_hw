#include<iostream>
#include<iomanip>
using namespace std;
// double ff(double x){
//     if (x > 0)
//     {
//         int y = (int)(x*10);
//         if (y/10+0.1-x <= 0.05)
//         {
//             return x+0.1;
//         }
//         return x;
//     }
//     else
//     {
//         int y = (int)x*10;
//         if (y/10-0.1-x >= 0.05)
//         {
//             return x;
//         }
//         return x-0.1;
//     }
    
// }
class matrix{
    private:
        double a11,a12,a21,a22,det;
    public:
        // int check;
        void inverse(){
            det = (a11*a22)-(a12*a21);
            if (det)
            {
                //check = 1;
                double temp;
                temp = a11/det;
                a11 = a22/det;
                a22 = temp;
                a12 = -a12/det;
                a21 = -a21/det;
                
            }
            // else
            // {
            //     check = 0;
            // }
        }
    friend istream& operator>>(istream& in ,matrix& A){
        return in >> A.a11 >> A.a12 >> A.a21 >> A.a22;
    }
    friend ostream& operator<<(ostream& out,matrix& A){
        if (A.det)
        {
            out << setiosflags(ios::fixed) << setprecision(1) <<  A.a11 << " " << A.a12 << endl;
            out << setiosflags(ios::fixed) << setprecision(1) <<  A.a21 << " " << A.a22 << endl;
            // out << setiosflags(ios::fixed) << setprecision(2) <<  A.a11 << " " << A.a12 << endl;
            // out << setiosflags(ios::fixed) << setprecision(2) <<  A.a21 << " " << A.a22 << endl;
            // out << setprecision(1) << fixed << A.a11 << " " << A.a12 << endl;
            // out << setprecision(1) << fixed << A.a21 << " " << A.a22 << endl;
        }
        else
        {
            out << "singular matrix" << endl;
        }
        return out ;
    }

};

int main(){
    matrix matrix_A;
    while (cin >> matrix_A)
    {
        matrix_A.inverse();
        cout << matrix_A;
    }
}