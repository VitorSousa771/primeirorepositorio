#include <iostream>
#include <string>
using namespace std;
int main (){

//Crie uma variável uli, de tipo unsigned long int, atribua a ela o maior valor que pode ser armazenado neste tipo de dado 
unsigned long int uli = 0xFFFFFFFFFFFFFFFF;
cout << "tamanho de long int" << sizeof(long int) << endl;
cout << uli << endl;

//item-b
long int li = 0xFFFFFFFFFFFFFFFF;
uli = li;
cout << "o  valor de li é " << li << endl;

//item -c 
long int li2 = 0x7FFFFFFFFFFFFFFF;

cout << "o maior valor de li2 é " << li2 << endl;
cout << "o menor valoor de li2 é " << li2+1 << endl;


}