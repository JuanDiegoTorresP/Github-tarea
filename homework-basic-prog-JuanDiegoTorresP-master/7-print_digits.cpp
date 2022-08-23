// 7-print_digits.cpp
#include <iostream>
#include <cstdlib>

void print_digits(int a,int b,int c,int d);


int main(int argc, char *argv[]) {
  int a, b,c,d;
  
  int num = std::atoi(argv[1]);

  if(num>=0&&num<10000){
    a=num%10; //Unidades
    b=num%100-a; //Decenas
    c=num%1000-a-b; //Centenas
    d=num-a-b-c; //Milenas
    print_digits(a,b,c,d);
  }
  else{
    std::cout<<"Numero invalido"<<std::endl;
  }
}

void print_digits(int a,int b,int c,int d){
  std::cout<<d/1000<<" "<<c/100<<" "<<b/10<<" "<<a<<std::endl;
}
