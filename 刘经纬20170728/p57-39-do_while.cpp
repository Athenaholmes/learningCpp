#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t,x,y,z;
	
	x=0;
	y=0;
	t=1;
	cout<<"����һ�����ݣ�����0��������:"<<endl;
	do{
		cin>>t;
		if(t>=0){
			y=y+1;
	//		cout<<"Ŀǰ������"<<y<<"��";
		}
		else{
			x=x+1;
	//		cout<<"Ŀǰ������"<<y<<"��";
		}		
	}while(t!=0);
 	cout<<"һ����"<<y<<"������"; 
 	cout<<"һ����"<<x<<"������";
}
