#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
int main() { system("cls");
 setlocale(LC_ALL, "Portuguese");
double V1=0, C1=0, L1=0, A1=0;
 cout << "\nDigite o comprimento:";
 cin >> C1;
 cout << "\nDigite a largura:";
cin >> L1; 
cout << "\nDigite a altura:";
cin >> A1;
V1=C1*L1*A1;
 cout << "\nO volume será :" << V1;
cout << endl << endl;
 system("pause"); }
