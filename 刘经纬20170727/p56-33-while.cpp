#include <iostream>
#include <cstdio> 
using namespace std;
int main(){
	int x,y,z,t;
	x=0;
	y=0;
	z=0;
	t=1;
	
	cout<<"���������ݵ��ܸ��������������ݣ�";
	cin>>x;
	cout<<endl;	
	
	
	while(t<=x){
		cout<<"�������"<<t<<"����";
		cin>>y;
		if(y>=30 && y<=60){
			z=z+1;
		}
		t=t+1;		 
	}
	cout<<"30-60����һ����"<<z<<"��";
	return 0; 
	
	
		
		
}

