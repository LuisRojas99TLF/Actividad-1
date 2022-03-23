#include <iostream>
#include <cmath>
#include <iomanip>


double f1(int n);
double f2(int n);


int main(int argc, char **argv)
{
  // configurar std::cout para que imprima en notacion cientifica y con 7 cifras decimales
  std::cout << std::setprecision(15) << std::fixed << std::scientific; //Le da formato al cout

  int n = 100;
  for(int i = 1; i <= n; i++) {
    // imprimir
    std::cout << i << "\t" << f1(i) << "\t" << f2(i) << "\n";
  }
  std::cout << "\n" "Gracias por usar el programa :D" "\n";
  return 0;
}

// Funcion //
double f1(int n)
{
  double x = 0.0;
  for(int i = 1; i <= n; i++) {
       x = x + 1.0/i;
    }
  return x;
}

double f2(int n)
{
  double x = 0.0;
  for(int i = 1; i <= n; i++) {
       x = x + 1.0/(n-(i-1));
    }
  return x;
}