#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	double m;
	
	m=1;
	for(n=1;n<=100;n=n+1){
		if(n<=50){
			m=m*n;
			cout<<"m=m*"<<n<<"==>"<<m<<endl;
		}
		else{
			m=m+n;
			cout<<"m=m+"<<n<<"==>"<<m<<endl;
		}
	
}
    return 0;
}
