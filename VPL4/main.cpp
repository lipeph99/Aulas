#include "triangulo.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double b1, a1;
  cin >> b1 >> a1;

  Triangulo* tri1 = new Triangulo(b1, a1);
  
  double b2, a2;
  cin >> b2 >> a2;

  Triangulo* tri2 = new Triangulo(b2, a2);
  
  cout << fixed << showpoint; 
  cout << setprecision(3);
  
  cout << tri1->calcularArea() << " " << tri1->maiorQue(tri2) << endl;
  cout << tri2->calcularArea() << " " << tri2->maiorQue(tri1) << endl;

  delete tri1;
  delete tri2;

  return 0;
}