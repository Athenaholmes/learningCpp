#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n ,t;
	double m;
	t=0;
	n=0;
	
	for(m=0;m<1000;m=m+t){
		n=n+2;
		t=n*n;
		cout<<m<<endl;	
	}
	cout<<n-2;
	
    return 0;
}
