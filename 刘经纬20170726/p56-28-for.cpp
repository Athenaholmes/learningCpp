#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m ,n;
	m=0;
	
	for(n=3;n<=3*3*3*3*3*3*3*3*3*3;n=n*3){
		m=m+n;
		cout<<"m+"<<n<<"*"<<n<<"==>"<<m<<endl; 
	}
	return 0;
	
}
