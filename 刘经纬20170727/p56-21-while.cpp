#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n=1;
	float m=0;
	
	
	while(n<=100){
		m=m+1.0/n;
		cout<<"m+"<<1/n<<"==>"<<m<<endl;
		n=n+1;
	}
	return 0;
}
