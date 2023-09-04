#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main (void){
    int num, cont, contDivisores=0;
    cout << "Qual o número? ";
    cin >> num;
    for (cont=1;cont<=num;cont++) {
        if (num%cont == 0) //cont é divisor de um
            contDivisores++;
    }
    if (contDivisores==2)
        cout << num << "eh um numero primo" << endl;
    else
        cout << num << "num nao eh num primo" << endl;    
}