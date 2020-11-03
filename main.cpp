#include <iostream>
using namespace std;
// Parent Class
class A{
public:
    void display(){
        cout << "Parent Class Display" << endl;
    }
    void abc(){
        cout << "abc() function part of parent class"<<endl;
    }
};
// Child Class
class B: public A{
public:
    // Overriding display() function of parent class and giving another definition to it
    void display(){
        cout << "Child Class Display" << endl;
    }
    void abc(){
        cout << "abc() function part of child class" << endl;
    }
};
int main() {
    B obj;
    obj.display();
    obj.abc();
    A obj2 = B();
    obj2.display();
    obj2.abc();
    return 0;
}
