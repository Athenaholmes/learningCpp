#include <iostream>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	
	cout<<'1';
	for(int i=2;i<=n;){
		if(n%i==0){
			cout<<"*"<<i;

			n=n/i; //��i������Ӵ�n���Ƴ���Ҫ��Ȼ����ѭ�� 
		}
		else{
			i++; //ѭ������������ı䣬����Ϊ�˴�����ͬ�Ķ������ 
		}
	}
	
	return 0;
} 
