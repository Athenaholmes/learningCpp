#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m=0;
	int n=1;
	
	while(n<=99){
		m=m+n;
		cout<<"m+"<<n<<"==>"<<m<<endl;	
		n=n+2;
	}
	return 0;
}
