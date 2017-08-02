#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m,m1;
	
	m=1;
	m1=0;
	for(n=3;n<=12;n=n+1){
		m=(n-2)*n;
		m1=m1+m;
	}
	
	
	cout<<m1;
	
	return 0;
		
		

}		





	

