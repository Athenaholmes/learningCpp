#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n ,t;
	double m;
	t=0;
	n=0;
	m=0;
	
	while(m<1000){
		n=n+2;
		t=n*n;
		cout<<"m+"<<n<<"*"<<n<<"==>"<<m<<endl;
		m=m+t;	
	}
	cout<<n-2;
	
    return 0;
}
