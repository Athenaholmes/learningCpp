#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,t=1;
	
	cin>>n;

	int m=1;	
	while(m<=n){
		t=t*m;
		cout<<"m*"<<n<<"==>"<<t<<endl;
		m=m+1;
	}
	return 0;
}
