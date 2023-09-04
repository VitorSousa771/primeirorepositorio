#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main (void){
    char nome [5];
    for (int i=0; i <5; i++){
        cout << "Digite o " << i+1 << "° nome" << endl;
        cin.getline(nome,5);
        cout << "Digite a " << i+1 << "ª nota" <<  endl;
        cin >> nome[i];
        cin.get();
    }
}