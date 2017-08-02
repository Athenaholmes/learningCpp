#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	float m;
	
	m=0;
	n=1;
	do{
		if(n%2==1){
			m=m+1.0/n;
			cout<<"m+"<<1/n<<"==>"<<m<<endl;
		}
		else{
			m=m-1.0/n;
			cout<<"m-"<<1/n<<"==>"<<m<<endl;		
			}
			n=n+1;
		
	}while(n<=100);
	return 0;
}
