#include <iostream>
#include <cstdio>
using 
namespace std;
int main(){
	int m,n;
	
	m=0;
	for(n=7;n<=100;n=n+7){
	
		m=m+1;
		cout<<"7的倍数有="<<n<<endl; 		 
	}
	cout<<"100以内共有："<<m<<"个"<<endl;
	return  0;	
}
