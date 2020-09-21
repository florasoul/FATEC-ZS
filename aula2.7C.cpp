#include "iostream"
#include "math.h"
#include "cstdlib"
#define pi 3.14 // cria constante pi com #define
using namespace std;
int main() { system("cls");
 setlocale(LC_ALL, "Portuguese");
 double V1=0, R1=0, A1=0;
  cout << "\nDigite a altura da lata de oleo:";
 cin >> A1;
 cout << "\nDigite o raio da lata de óleo:";
cin >> R1;
V1=pi*pow(R1,2)*A1;
 cout << "\nO volume será :" << V1;
cout << endl << endl;
 system("pause"); }
