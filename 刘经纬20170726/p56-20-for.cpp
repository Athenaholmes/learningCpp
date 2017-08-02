#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m;
	
	m=0;
	for(int n=1;n<=99;n=n+2){
		m=m+n;
		cout<<"m+"<<n<<"==>"<<m<<endl;	
		
	}
	return 0;
}
