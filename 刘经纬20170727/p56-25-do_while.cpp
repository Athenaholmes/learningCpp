#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n=1;
	double m=1;
	
	do{
		if(n<=50){
			m=m*n;
			cout<<"m*"<<n<<"==>"<<m<<endl;
		}
		else{
			m=m+n;
			cout<<"m+"<<n<<"==>"<<m<<endl;
			
		}
		n=n+1;
	}while(n<=100);
	return 0;
}
