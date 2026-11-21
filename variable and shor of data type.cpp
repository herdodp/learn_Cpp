#include <iostream>
using namespace std;

int main(){

    /*need declare the type of data to 
    store the value to variable 
    
    name of variables must begin letter or 
    underscore. case sensitive

    */


    //SINGLE VARIABLE

    //number
    int num = 1;
    cout << num << endl;

    //double
    double numfloat = 1.5;
    cout << numfloat << endl;

    //string
    string name = "herdo dimas pratirto";
    cout << name << endl;

    //boolean
    bool fact_true = true;
    cout << "this is true : " << fact_true << endl;

    bool fact_false = false;
    cout << "this is false : " << fact_false << endl;

    //char
    char myInitial = 'H';
    cout << "initial of my name is " << myInitial << endl;


    //MULTIPLE VARIABLE
    int x = 1, y = 2, z = 3;
    cout << x << "," <<  y << "," << z << endl;

    int a,b,c;
    a = b = c = 10;

    cout << a+b+c;







    return 0;
}