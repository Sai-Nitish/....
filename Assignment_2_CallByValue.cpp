#include <iostream>

using namespace std;

void swap(int, int);
int main() {

    int a = 10, b = 20;
    cout <<"a = "<<a<<" and b = "<<b<<" before Swapping by call by value"<<endl;
    swap(a,b);
    cout <<"a = "<<a<<" and b = "<<b<<" after swapping by call by value"<<endl;
    printf("But they are not changed. The reason is we haven't returned any value to main function\n");
    printf("But at the same time we cant return two values at a time");

    return 0;
}
void swap(int c,int d)
{
    int t;
    t = c;
    c = d;
    d = t;
}
