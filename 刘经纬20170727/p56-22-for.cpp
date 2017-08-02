#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	float m;
	
	m=0;
	for(n=1;n<=100;n=n+1){
		if(n%2==1){
			m=m+1.0/n;
			cout<<"m+"<<1/n<<"==>"<<m<<endl;
		}
		else{
			m=m-1.0/n;
			cout<<"m-"<<1/n<<"==>"<<m<<endl;		
			}
		
	}
	return 0;
}
