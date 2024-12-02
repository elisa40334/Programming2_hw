#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 class Complex  
    {
	private:
		double m_real;
        double m_imaginary;
    public:
        Complex(void)
        {

        }
        virtual ~Complex(void)
        {
            
        }
		void setValue(double real, double imaginary);
		void add(Complex &rhs);
		void subtract(Complex &rhs);
		void multiply(Complex &rhs);
		bool divide(Complex &rhs);
		bool equal(Complex &rhs,double x);
		double magnitude();
		void print();
    };
	int main()
	{
		double input_1,input_2,input_3,input_4,input_5,input_6;
		Complex a,b;
		cin>>input_1>>input_2>>input_3>>input_4;
		cin>>input_5>>input_6;
    
		a.setValue(input_1,input_2);
		b.setValue(input_3,input_4);
		cout<<"add: "<<endl;/*add test*/
		a.print();
		cout<<"+";
		b.print();
		a.add(b);
		cout<<"=";
		a.print();
		cout<<endl;
		/*- - - - - - - - - - - - - - - - - - - - */
		a.setValue(input_1,input_2);
		b.setValue(input_3,input_4);
		cout<<"subtract: "<<endl;/*subtract test*/
		a.print();
		cout<<"-";
		b.print();
		a.subtract(b);
		cout<<"=";
		a.print();
		cout<<endl;
		/*- - - - - - - - - - - - - - - - - - - - */
		a.setValue(input_1,input_2);
		b.setValue(input_3,input_4);
		cout<<"multiply: "<<endl;/*multiply test*/
		a.print();
		cout<<"*";
		b.print();
		a.multiply(b);
		cout<<"=";
		a.print();
		cout<<endl;
		/*- - - - - - - - - - - - - - - - - - - - */
		a.setValue(input_1,input_2);
		b.setValue(input_3,input_4);
		cout<<"divide: "<<endl;/*divide test*/
		a.print();
		cout<<"/";
		b.print();
		if(a.divide(b))
		{
			cout<<"=";
			a.print();
			cout<<endl;
		}else{
			cout<<"error"<<endl;
		}
		/*- - - - - - - - - - - - - - - - - - - - */
		a.setValue(3.055,3.055);
		input_5=input_5/2.0+1.51;
		input_6=input_6/2.0+1.51;
		b.setValue(input_5,input_6);
		cout<<"equal: "<<endl;/*equal test*/
		a.print();
		if(a.equal(b,1e-7))
		{
			cout<<"==";
			
		}else{
			cout<<"!=";
		}
		b.print();
		cout<<endl;
        
		/*--------------------------------------*/
		cout<<"magnitude: "<<endl;
		b.print();
		cout<<"="<<setprecision(5)<<b.magnitude()<<endl;
		return 0;
	}
    /*需要繳交以下的部分*/
void Complex::setValue(double real, double imaginary)
{
    m_real = real;
    m_imaginary = imaginary;
}
void Complex::add(Complex &rhs)
{
    m_real = m_real+rhs.m_real;
    m_imaginary = rhs.m_imaginary + m_imaginary;
}
void Complex::subtract(Complex &rhs)
{
    m_real = m_real-rhs.m_real;
    m_imaginary = m_imaginary - rhs.m_imaginary ;
}
void Complex::multiply(Complex &rhs)
{
    double lhsReal, rhsReal;
    lhsReal = m_real;
    rhsReal = rhs.m_real;
    m_real = m_real*rhs.m_real - m_imaginary*rhs.m_imaginary;
    m_imaginary = lhsReal*rhs.m_imaginary + m_imaginary*rhsReal;
}
bool Complex::equal(Complex &rhs ,double x)
{
    if (abs(rhs.m_real-m_real) <= x && abs(rhs.m_imaginary-m_imaginary) <= x)
    {
        return true;
    }
    return false;
        
}
bool Complex::divide(Complex &rhs)
{
    if (rhs.m_real*rhs.m_real-rhs.m_imaginary*rhs.m_imaginary == 0)
    {
        return false;
    }
    //Complex a;
    // m_real = m_real/(rhs.m_real*rhs.m_real-rhs.m_imaginary*rhs.m_imaginary);
    // m_imaginary = m_imaginary/(rhs.m_real*rhs.m_real-rhs.m_imaginary*rhs.m_imaginary);
    // rhs.m_real = rhs.m_real;
    // rhs.m_imaginary = -rhs.m_imaginary;
    double lhsReal, rhsReal;
    lhsReal = m_real;
    rhsReal = rhs.m_real;
    m_real = (m_real*rhs.m_real + m_imaginary*rhs.m_imaginary)/(rhs.m_real*rhs.m_real+rhs.m_imaginary*rhs.m_imaginary);
    m_imaginary = (-lhsReal*rhs.m_imaginary + m_imaginary*rhsReal)/(rhs.m_real*rhs.m_real+rhs.m_imaginary*rhs.m_imaginary);
    // m_real = (m_real*rhs.m_real - m_imaginary*rhs.m_imaginary)/(rhs.m_real*rhs.m_real+rhs.m_imaginary*rhs.m_imaginary);
    // m_imaginary = (-m_real*rhs.m_imaginary - m_imaginary*rhs.m_real)/(rhs.m_real*rhs.m_real+rhs.m_imaginary*rhs.m_imaginary);
    return true;
}
double Complex::magnitude()
{
    return (sqrt(m_real*m_real + m_imaginary*m_imaginary));
}
void Complex::print()
{
    //正數範例 麻煩補上若虛數為負數時的狀況
    if (m_imaginary >= 0)
    {
        cout<<"("<<setprecision(5)<<m_real<< "+" <<setprecision(5)<<m_imaginary<<"i)";
    }
    else
    {
        cout<<"("<<setprecision(5)<<m_real<< "-" <<setprecision(5)<<-m_imaginary<<"i)";
    }
}

