#include <iostream>
using namespace std;

int main(){
	int m = 1, num =0;
	cout<<"һ������һ����������ͳ�ƣ�����0����ͳ��"<<endl;
	while(m>0){
		cin>>m;
		if(m>=30 && m<=60){
			num++;
		}
		cout<<num<<endl;
	}
	
	return 0;
}
