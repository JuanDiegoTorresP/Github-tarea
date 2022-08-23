   #include <iostream>
   #include <cstdlib>

   void print_digits(int a,int b,int c, int d);

   int main(int argc, char *argv[]) {
      int a=0, b=0, c=0, d=0;
     int num = std::atoi(argv[1]);
if(num>=0&&num<10000){
   
   a=num%10;
   b=num%100-a;
   c=num%1000-a-b;
   d=num-a-b-c;
   }
      else{
         std::cout<<''Numero invalido''<<std::endl;
   }
     print_digits(a, b, c, d);
   }
      void print_digits(int a, int b, int c, int d){
         std::cout<<d/1000<<'' ''<<c/100'' ''<<b/10<<'' ''a'std::endl;
      }
