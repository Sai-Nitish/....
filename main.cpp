#include <iostream>

using namespace std;

int sum(int a, int b=0)
{
    return a+b;
}
double sum(double a, double b=0)
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