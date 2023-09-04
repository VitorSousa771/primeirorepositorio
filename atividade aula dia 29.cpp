#include <iostream>
#include <string>
using namespace std;
int main (){

// Identifique qual o menor e maior valor que pode ser representado por uma variável int

int maior = 0x7FFFFFFF;
int menor = 0x80000000;
cout << maior << endl;
cout << menor << endl;

//Crie uma variável uli, de tipo unsigned long int, atribua a ela o maior valor que pode ser armazenado neste tipo de dado 
unsigned long int uli = 0xFFFFFFFFFFFFFFFF;
cout << "tamanho de long int" << sizeof(long int) << endl;
cout << uli << endl;




}