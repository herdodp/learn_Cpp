#include <iostream>
using namespace std;

int main(){

    //convert string
    //stoi : string to integer
    //stod : string to double
    //to_string() : number to string


    string num1 = "10";
    string num2 = "20";

    int num3 = stoi(num1) + stoi(num2);

    cout << num3 << endl;

    return 0;
}