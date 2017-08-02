#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m,n,t;
	m=1;
	n=1;
	t=n*n;
	
	n=2;
	do{
		m=n*n;
		t=t+m;
		cout<<"t+"<<n*n<<"==>"<<t<<endl;
		n=n+2;
	}while(n<=50);
	return 0;
}
