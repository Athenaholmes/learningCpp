#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,b,c,k;
	k = 0;
	
	cin>>a>>b;
	
	
	if(b>0 && b<10){
		k=10;
	}
	if(b>=10 && b<100){
		k=100;
	}
	if(b>=100 && b<1000){
		k=1000;
	}
	
	
	
	c=a*k+b;
	cout<<"c="<<c;
	
	return 0;
}
