#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,maxx;
	
	cout<<"�������1����:";
	cin>>maxx;
	cout<<endl;
	
	x=2;
	do{
		
		cout<<"�������"<<x<<"����:";
		cin>>y;
		cout<<endl;
		if(y>maxx){
			maxx=y;
			cout<<"ˢ��maxx="<<y<<endl;
		}
		x=x+1;
	}while(x<=10);
	cout<<"maxx="<<maxx;
	return 0;
}

