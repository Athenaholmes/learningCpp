#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m ,n;
	m=0;
	n=3;
	
	while(n<=3*3*3*3*3*3*3*3*3*3){
		m=m+n;
		cout<<"m+"<<n<<"*3"<<"==>"<<m<<endl;
		n=n*3; 
	}
	return 0;
	
}
