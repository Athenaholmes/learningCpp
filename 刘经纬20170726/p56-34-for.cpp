#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,n,m,t;
	
    
		
	for (a=100;a<=999;a=a+1){
		n=a/100;
		m=a%100/10;
		t=a%10;
		
		if(a==n*n*n+m*m*m+t*t*t){
			cout<<a<<" ";
		
		}
		
		
	}
	return 0;
}
