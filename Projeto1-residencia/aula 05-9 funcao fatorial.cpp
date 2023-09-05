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
        int n, a, p;
        cout << "Digite o total de itens: ";
        cin >> n;
        cout << "Digite quantos serao tomados: "
        cin >> p;
        //Calculo do arranjo
        a = fat(n)/fat(n-p);
        //agota posso mostrar o fatorial
        cout << n << "Itens tomados" << p << " a " << p << endl;
        cout << "Arranjop de " << a << " maneiras" << endl;
    }        