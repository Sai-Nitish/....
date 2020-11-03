#include <iostream>
using namespace std;
// Overloading
float sum(int a, int b){
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
float sum(int a, float b){
    return a+b;
}
float sum(float a, int b){
    return a+b;
}
int main() {
    cout << sum(10, 20) << endl;            //Calls 1st function
    cout << sum(15.7f, 12.7f) << endl;      //Calls 2nd function
    cout << sum(100, 20.7f) << endl;        //Calls 3rd function
    cout << sum(30.7f, 200) << endl;        //Calls 4th function
    return 0;
}
