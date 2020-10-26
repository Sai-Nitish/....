#include <iostream>

using namespace std;

struct complex {
    double re;
    double im;
} ;

complex operator+ (complex &a, complex &b) {
    complex r;
    r.re = a.re + b.re;
    r.im = a.im + b.im;
    return r;
}
complex operator* (complex &a, complex &b) {
    complex r;
    r.re = a.re * b.re - a.im * b.im;
    r.im = a.im * b.re + b.im * a.re;
    return r;
}
complex operator- (complex &a, complex &b) {
    complex r;
    r.re = a.re - b.re;
    r.im = a.im - b.im;
    return r;
}

int main(){
    complex d1 , d2 , d;

    cout << "Enter the real part of 1st real number:" ;
    cin >>d1.re;
    cout << "Enter the real part of 1st imaginary number:" ;
    cin >>d1.im;
    cout << "Enter the real part of 2nd real number:" ;
    cin >>d2.re;
    cout << "Enter the real part of 2nd imaginary number:" ;
    cin >>d2.im;

    cout << "The numbers entered are:"<<endl;
    // Print Number 1
    if (d1.im < 0)
    {
        cout << "Complex Number 1 :" << d1.re << " "<<d1.im <<"i"<<endl;
    }
    else
        cout << "Complex Number 1 :" << d1.re << " + "<<d1.im <<"i"<<endl;
    // Print Number 2
    if (d2.im < 0)
    {
        cout << "Complex Number 2 :" << d2.re << " "<<d2.im <<"i"<<endl;
    }
    else
        cout << "Complex Number 2 :" << d2.re << " + "<<d2.im <<"i"<<endl;
    // Perform and Display Addition
    d = d1 + d2;
    if (d.im < 0)
    {
        cout << "Addition :" << d.re << " "<<d.im <<"i"<<endl;
    }
    else
        cout << "Addition :" << d.re << " + "<<d.im <<"i"<<endl;
    // Perform and Display Subtraction
    d = d1 - d2;
    if (d.im < 0)
    {
        cout << "Subtraction :" << d.re << " "<<d.im <<"i"<<endl;
    }
    else
        cout << "Subtraction :" << d.re << " + "<<d.im <<"i"<<endl;
    // Perform and Display Multiplication
    d = d1 * d2;
    if (d.im < 0)
    {
        cout << "Multiplication :" << d.re << " "<<d.im <<"i"<<endl;
    }
    else
        cout << "Multiplication :" << d.re << " + "<<d.im <<"i"<<endl;
    return 0;
}