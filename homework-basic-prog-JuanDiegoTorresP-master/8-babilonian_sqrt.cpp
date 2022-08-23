#include<iostream>
#include<cstdlib>

double babilonian_sqrt(int nreps);

int main(int argc, char *argv[]) {
  std::cout.setf(std::ios::scientific); // imprimir en notacipn cientifica
  std::cout.precision(15);  // imprimir con 15 cifras decimales

  int m = std::atoi(argv[1]);

  std::cout << babilonian_sqrt(m) << "\n";

  return 0;
}

double babilonian_sqrt(int nreps)
{ double x=1.0;
  for(int n=1;n<=nreps;n++){
    double x_new=(x+(2.0/x))/2.0;
    std::cout<<"Iteración numero: "<<n<<". Lo cual da el resultado: "<<x_new<<std::endl;
    x=x_new;
  }
  return x;
}
