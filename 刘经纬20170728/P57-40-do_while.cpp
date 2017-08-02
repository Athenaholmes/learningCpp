#include <iostream>
#include <cstdio>
using namespace std;
int main (){
	int n,i;
	
	cin>>n;
	
	cout<<"1";
	i=2;
	do{
		if(n%i==0){
			cout<<"*"<<i;
			n=n/i;
		}
		else{
			i=i+1;
	  	}
	}while(i<=n);
}
