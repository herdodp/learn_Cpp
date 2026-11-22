#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

    // data type conversion

    int num1 = 10;
    double numdouble = num1;

    cout << typeid(numdouble).name() << endl;
    // result is d. means double

    cout << "\n\n";

    double num2 = 20;
    int numint = num2;

    cout << typeid(numint).name() << endl; 
    //result is i. means integer




    return 0;
}