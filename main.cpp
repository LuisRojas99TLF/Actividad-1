#include <iostream>
#include <cmath>
#include <iomanip>


double f1(int n);
double f2(int n);


int main(int argc, char **argv)
{
  // configurar std::cout para que imprima en notacion cientifica y con 15 cifras decimales
  std::cout << std::setprecision(15) << std::fixed << std::scientific; //Le da formato al cout

  int n = 10;
  std::cout << "n" << "\t" << "Error" << "\n" << "\n";
  for(int i = 1; i <= n; i++) {
    // imprimir
    double error = (f1(i)-f2(i))/(f2(i));
    std::cout << i << "\t" << error << "\n";
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