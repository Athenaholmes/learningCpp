#include <iostream>
using namespace std;

int main(){
	int num=0; //�ܵ������� ����ʼΪ0 
	int i=4; //ÿ�������� ����ʼΪ4 
	do{
		num = num + i; //�ۼ��ܵ������� 
		i++; //������һ��������� 
	}while(num<100);

	int years = i - 4;	
	cout<<"��Ҫ"<<years<<"��";
	
	return 0;
} 
