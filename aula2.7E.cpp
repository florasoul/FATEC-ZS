#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
int main() { system("cls");
 setlocale(LC_ALL, "Portuguese");
double P1=0, T1=0, Tx=0, V1=0;
 cout << "\nDigite o valor da prestação:";
 cin >> V1;
 cout << "\nDigite o valor da taxa:";
cin >> Tx;
 cout << "\nDigite o tempo:";
cin >> T1;
P1=V1+(V1*Tx/100)*T1;
 cout << "\nO valor da prestação em atraso será:" << P1;
cout << endl << endl;
 system("pause"); }
