#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main (void){

float nota, soma, media;
int c;
soma = 0;
c = 0;
while (c <10) {
     cout << "Digite uma nota: ";
     cin >> nota;
     soma += nota;
     c++;
}
media = soma/c;
}