// 11-largest_prime.cpp
 #include <iostream>
 #include <cstdlib>
 #include <cmath>

 bool isprime(int n);
 int largest_prime(int m);

 int main(int argc, char *argv[]) {
   int m = std::atoi(argv[1]);

   std::cout << largest_prime(m) << "\n";

   return 0;
 }

 int largest_prime(int n)
 { int prime;
   for(int j=0;j<n;j++){
       if(isprime(n-j)==1){
           prime=n-j;
           break;
       }
       else{
           continue;
       }
   }
   return prime;
 }

 bool isprime(int n)
 {
      int cont=0;
   for (int i=2;i<sqrt(n);i++){
       if(n%i==0){
           cont++;
       }
   }
   if(cont==0){
       return 1;
   }
   else{
       return 0;
   }
 }
