#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,n,m,t;
	a=100;
	
    
		
	do{
		n=a/100;
		m=a%100/10;
		t=a%10;
		
		if(a==n*n*n+m*m*m+t*t*t){
			cout<<a<<" ";
		
		}
		a=a+1;
		
		
	}while(a<=999);
	return 0;
}
