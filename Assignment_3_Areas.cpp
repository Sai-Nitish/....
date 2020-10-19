#include<iostream>
#include<cstdlib>
#include <cmath>

using namespace std;
float area(float s)
{
    return(s*s);
}

double area(double r)
{
    return(3.14 * r * r);
}
float area(float a,float b,float c)
{
    float p;
    p = (a + b + c)/2;
    return(sqrt(p*(p-a)*(p-b)*(p-c)));
}
float area(float l,float b)
{
    return (l * b);
}
int main()
{
    float a,b,c,l,s;
    double r;
    int ch;

    do
    {
        cout<<"\n\n *****Menu***** \n";
        cout<<"\n 1. Area of Square";
        cout<<"\n 2. Area of Rectangle";
        cout<<"\n 3. Area of Circle";
        cout<<"\n 4. Area of Triangle";
        cout<<"\n 5. Exit";
        cout<<"\n\n Enter Your Choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"\n Enter the side of the Square : ";
                cin>>s;
                cout<<"\n Area of Circle : "<<area(s);
                break;
            }
            case 2:
            {
                cout<<"\n Enter the Length & Breadth of Rectangle : ";
                cin>>l>>b;
                cout<<"\n Area of Rectangle : "<<area(l,b);
                break;
            }
            case 3:
            {
                cout<<"\n Enter the radius of circle : ";
                cin>>r;
                cout<<"\n Area of the circle : "<<area(r);
                break;
            }
            case 4:
            {
                cout<<"\n Enter the sides of Triangle : ";
                cin>>a>>b>>c;
                cout<<"\n Area of Triangle : "<<area(a,b,c);
                break;
            }
            case 5:
                exit(0);
            default:
                cout<<"\n Invalid Choice... ";
        }
    }while(ch!=5);
    return 0;
}
