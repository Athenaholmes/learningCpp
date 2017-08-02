#include <iostream>
using namespace std;

int main(){
	int num=0; //总的种树量 ，初始为0 
	int i=4; //每年种树量 ，初始为4 
	do{
		num = num + i; //累计总的种树量 
		i++; //计算下一年的种树量 
	}while(num<100);

	int years = i - 4;	
	cout<<"需要"<<years<<"年";
	
	return 0;
} 
