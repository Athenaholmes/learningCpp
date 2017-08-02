#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m,t;
	m=1;
	t=0;
	n=3;
	
	do{
		m=(n-2)*n;
		t=t+m;
		cout<<n-2<<"*"<<n<<"+m==>"<<t<<endl;
		n=n+=1;
	}while(n<=12);
	return 0;
}
