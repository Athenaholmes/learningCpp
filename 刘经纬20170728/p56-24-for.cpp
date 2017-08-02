#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,t=1;
	
	cin>>n;
	
	for(int m=1;m<=n;m++){
		t=t*m;
		cout<<"m*"<<m<<"==>"<<t<<endl;
	}
	return 0;
}
