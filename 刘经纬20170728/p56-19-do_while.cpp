#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int m,n;
	
	m=0;
	n=7;
	do{
		cout<<"7�ı�����="<<n<<endl;
		n=n+7;
		m=m+1;
	}while(n<100);
	
	cout<<"100���ڹ��У�"<<m<<"��"<<endl;
	return  0;	
} 
