#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m,t;
	m=1;
	t=0;
	
	for(n=3;n<=12;n=n+=1){
		m=(n-2)*n;
		t=t+m;
		cout<<n-2<<"*"<<n<<"+m==>"<<t<<endl;
	}
	return 0;
}
