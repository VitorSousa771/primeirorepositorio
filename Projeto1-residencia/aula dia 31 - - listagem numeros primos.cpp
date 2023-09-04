#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main (void){
    int num, cont, contDivisores, limite;
    cout << "Qual o limite? ";
    cin >> limite;
    cout << "Numeros primos menores que "
    for (num=2;num<limite;num++) { << limite << endl;
        contDivisores = 0;
        for (cont=2; cont<=floor(sqtr(num));cont++) {
            if (num%cont == 0)
                contDivisores++;
        }
    if (contDivisores==0)
        cout << num << "eh um numero primo" << endl;    
}