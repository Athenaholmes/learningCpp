#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int x,y;
	x=0;
	y=0;

	cout<<"����һ�����ݣ�����0��������:"<<endl;
	for(int t=1;t!=0;){
		cin>>t;
		if(t==0){
		}
		else if(t>0){
			y=y+1;
			//cout<<"Ŀǰ������"<<y<<"��"<<endl;
		}
		else{
			x=x+1;
			//cout<<"Ŀǰ������"<<x<<"��"<<endl;
		}		
	}
    cout<<"һ����"<<y<<"������"<<endl; 
    cout<<"һ����"<<x<<"������";
}
