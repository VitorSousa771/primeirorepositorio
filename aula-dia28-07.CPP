#include <iostream>
#include <string>
using namespace std;

int main (){
    float pi = 3 + 0.1415;
    int intPi = pi;
    cout << intPi << endl;

    intPi = pi;
    pi = intPi;

    cout << pi << endl;

 
 char z = 'a';
 int x = z;
 cout << x << endl;

 int a = 99;
 char b = a;
 cout << b << endl;



}

