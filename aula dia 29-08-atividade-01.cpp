#include <iostream>
#include <string>
using namespace std;
int main (){

char a = '0';
char b = '1';
char c = '2';
char d = '3';
char e = '4';
char f = '5';
char g = '6';
char h = '7';
char i = '8';
char j = '9';

cout << "'" << a << "'" << " - " << (int)a << endl;
cout << "'" << b << "'" << " - " << (int)b << endl;
cout << "'" << c << "'" << " - " << (int)c << endl;
cout << "'" << d << "'" << " - " << (int)d << endl;
cout << "'" << e << "'" << " - " << (int)e << endl;
cout << "'" << f << "'" << " - " << (int)f << endl;
cout << "'" << g << "'" << " - " << (int)g << endl;
cout << "'" << h << "'" << " - " << (int)h << endl;
cout << "'" << i << "'" << " - " << (int)i << endl;
cout << "'" << j << "'" << " - " << (int)j << endl;

 // octal 

cout << "'" << a << "'" << " - " << oct << (int)a << endl;
cout << "'" << b << "'" << " - " << (int)b << endl;
cout << "'" << c << "'" << " - " << (int)c << endl;
cout << "'" << d << "'" << " - " << (int)d << endl;
cout << "'" << e << "'" << " - " << (int)e << endl;
cout << "'" << f << "'" << " - " << (int)f << endl;
cout << "'" << g << "'" << " - " << (int)g << endl;
cout << "'" << h << "'" << " - " << (int)h << endl;
cout << "'" << i << "'" << " - " << (int)i << endl;
cout << "'" << j << "'" << " - " << (int)j << endl;

//hexadecimal

cout << "'" << a << "'" << " - " << hex << (int)a << endl;
cout << "'" << b << "'" << " - " << (int)b << endl;
cout << "'" << c << "'" << " - " << (int)c << endl;
cout << "'" << d << "'" << " - " << (int)d << endl;
cout << "'" << e << "'" << " - " << (int)e << endl;
cout << "'" << f << "'" << " - " << (int)f << endl;
cout << "'" << g << "'" << " - " << (int)g << endl;
cout << "'" << h << "'" << " - " << (int)h << endl;
cout << "'" << i << "'" << " - " << (int)i << endl;
cout << "'" << j << "'" << " - " << (int)j << endl;

// letra c - ler um caracter qualquer e imprima no mesmo formato do exemplo anterior

char z;
cin >> z;
cout << "'" << z << "'" << " - " << dec << (int)z << endl;
cout << "'" << z << "'" << " - " << oct << (int)z << endl;
cout << "'" << z << "'" << " - " << hex << (int)z << endl;

// letra d - Armazenar uma variável os caracteres 'ç' e 'ã'

char ccedilha = 'ç';
char acentotil = 'ã';

cout << "Caractere ç: " << ccedilha << endl;
cout << "Caractere ã: " << acentotil << endl;

// Identifique qual o menor e maior valor que pode ser representado por uma variável int

int maior = 0x7FFFFFFF;
int menor = 0x80000000;
cout << maior << endl;
cout << menor << endl;

}

   