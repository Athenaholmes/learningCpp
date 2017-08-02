#include <iostream>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	
	cout<<'1';
	for(int i=2;i<=n;){
		if(n%i==0){
			cout<<"*"<<i;

			n=n/i; //将i这个因子从n中移除，要不然会死循环 
		}
		else{
			i++; //循环变量在这里改变，这是为了处理相同的多个因数 
		}
	}
	
	return 0;
} 
