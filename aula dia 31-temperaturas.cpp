#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main (void){
    int a, temperatura, maiortemp=0;
    for (a=0; a < 5; a++){
        cout << "Digite o valor da temperatura do dia: " << a+1 << endl;
        cin >> temperatura;
        if (temperatura>maiortemp){
            maiortemp=temperatura;
        }
    }
    cout << "A maior temperatura é: " << maiortemp << endl;

}