#include<iostream>
using namespace std;

void swap(int *,int *);

#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
    int a,b;
    a = 10, b= 20;

    cout<<"\nBefore Swapping, Value of : \n\tA = "<<a<<"\tB = "<<b<<"\n";

    swap(&a,&b);

    cout<<"\nOutside Function After Swapping, Value of : \n\tA = "<<a<<"\tB = "<<b<<"\n";
}

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"\nInside Function After Swapping, Value of : \n\tA = "<<*a<<"\tB = "<<*b<<"\n";
}