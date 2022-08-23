#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
bool isprime(int n);
int main(int argc,char*argv[]){
	int m=atoi(argv[1]);
	cout<<"digite un numero"<<endl;
	cin>>m;
	if(isprime(m)){
		cout<<"es primo";
	}
	else{
		cout<<"no es primo"<<endl;
	}
	cout<<isprime(m)<<"\n";
	
	return 0;
}
bool isprime(int n){
	if(n==0||n==1||n==4){
		return false;
		for(int i=2;i<n/2;i++){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}
