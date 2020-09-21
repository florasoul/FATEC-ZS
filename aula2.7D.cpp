#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
int main() { system("cls");
 setlocale(LC_ALL, "Portuguese");
double T1=0, V1=0, D1=0, LU1;
 cout << "\nDigite o tempo:";
 cin >> T1;
 cout << "\nDigite a velocidade:";
cin >> V1;
D1=T1*V1;
 LU1=D1/12;
cout << "\nA velocidade media foi de:" << V1;
cout << "\nO tempo gasto foi de:" << T1;
cout << "\nA distancia percorrida foi de:" << D1;
cout << "\nA quantidade de litros usados foi de:" << LU1;
cout << endl << endl;
 system("pause"); } 
