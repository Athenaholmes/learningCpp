#include <iostream>
using namespace std;

int main(){
	float sum=200; //��һ������Ϊ���̣�һ��200�� 
	
	float s=200/2;
	for(int i=2;i<=10;i++){
		sum += s*2; //��������Ϊ˫�� 
		s = s/2;
	}

	cout<<sum;
	
	return 0;
} 
