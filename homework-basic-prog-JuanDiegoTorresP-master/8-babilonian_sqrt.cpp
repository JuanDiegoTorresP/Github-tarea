#include <iostream>
#include <cstdlib>

double babilonian_sqrt(int nreps);

int main(int argc, char *argv[]) {
  std::cout.setf(std::ios::scientific); // imprimir en notacipn cientifica
  std::cout.precision(15);  // imprimir con 15 cifras decimales

  int m = std::atoi(argv[1]);

  std::cout << m << " " << babilonian_sqrt(m) << "\n";

  return 0;
}

double babilonian_sqrt(int nreps)
{
  TODO: Remueva esta linea e implemente la solucion
}
