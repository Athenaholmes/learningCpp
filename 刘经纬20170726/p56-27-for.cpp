#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m,n,t;
	m=1;
	n=1;
	t=n*n;
	
	for(n=2;n<=50;n=n+2){
		m=n*n;
		t=t+m;
		cout<<"t+"<<n*n<<"==>"<<t<<endl;
	}
	return 0;
}
