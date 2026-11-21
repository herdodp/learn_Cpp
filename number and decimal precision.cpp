#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    /*
    type data 
    string, int, double, float, char, boolean
    
    size 
    string 1 byte
    int 2 or 4 bytes
    double 8 bytes
    float 4 bytes
    char 1 byte
    boolean 1 byte

    */


    //number : int, float, double
    int num = 10;
    cout << num << endl;

    double num_double = 1.5;
    cout << num_double << endl;

    float num_float = 2.5;
    cout << num_float << endl;

    // double and float can use 'e' for multiple 10
    double zero1 = 25e2;
    cout << zero1 << endl;

    float zero2 = 54e4;
    cout << zero2 << endl;

    cout << "\n\n";

    //set number of decimal using setprecision()
    //nedd to declare <iomanip> first

    float dec1 = 3.1423;
    cout << fixed << setprecision(3);
    cout << dec1 << endl;

    /* without fixed , setprecision in total
     number. not only number of decimal.
     */
     
    //cout << setprecision(3);
    cout << dec1;








    return 0;
}