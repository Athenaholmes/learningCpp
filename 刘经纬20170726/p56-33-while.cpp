#include <iostream>
using namespace std;

int main(){
	int m = 1, num =0;
	cout<<"一次输入一个整数进行统计，输入0结束统计"<<endl;
	while(m>0){
		cin>>m;
		if(m>=30 && m<=60){
			num++;
		}
		cout<<num<<endl;
	}
	
	return 0;
}
