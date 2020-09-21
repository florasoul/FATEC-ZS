#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
int main() 
{ 
 system("cls");
 setlocale(LC_ALL, "Portuguese");
 double F1=0, C1=0;
 cout << "\nDigite a temperatura em graus Celsius:";
 cin >> C1;
 F1=(9*C1+160)/5;
  cout << "\nA temperatura em Fahrenheit será:" << F1;
cout << endl << endl;
 system("pause"); }
