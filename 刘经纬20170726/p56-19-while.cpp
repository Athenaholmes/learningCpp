#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m,n;
	
	m=0;
	n=7;
	while(n<100){
		cout<<"7的倍数有="<<n<<endl;
		n=n+7;
		m=m+1;
	}
	
	cout<<"100以内共有："<<m<<"个"<<endl;
	return  0;	
}
