#include <iostream>
#include <string>
#include <math.h>
using namespace std;
    int main (void){
    int num, cont;
    cout << "Qual o número? ";
    cin >> num;
    for (cont=1;cont<=num;cont++) {
        if (num%cont==0) // cont é divisor de num
        cout << cont << endl;
    }

}    