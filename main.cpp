#include <iostream>

using namespace std;

int sum(int a)
{
    return a;
}
int sum(int a, int b)
{
    return a+b;
}

double sum(double a)
{
    return (a);
}
double sum(double a, double b)
{
    return (a+b);
}

int main()
{
    cout << sum(1)<<endl;
    cout << sum(1,2)<<endl;
    cout << sum(1.1)<<endl;
    cout << sum(1.1,2.2)<<endl;


    return 0;
}