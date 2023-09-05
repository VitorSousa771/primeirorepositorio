#include <iostream>
#include <string>
#include <math.h>
using namespace std;

    int fat (int n) {
        int fatorial = 1;
        for (int i=1;i<=n;i++)
            fatorial*=i;
        return fatorial;    
    }

    int main (){
        int x, f;
        cout << "Digite um numero: ";
        cin >> x;
        //Calculo do fatorial
        f = fat (x);
        //agota posso mostrar o fatorial
        cout << x << "! = " << f << endl;
    }        

    