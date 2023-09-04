#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(void)
{

    string nome, sobrenome;
    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite seu sobrenome: ";
    getline(cin, sobrenome);

    if (nome.at(nome.length() - 1) == ' ')
    {
        nome.append(sobrenome);
    }
    else
    {
        nome.append(" " + sobrenome);
    }
    cout << nome << endl;

    //
    for (auto it =)
}
