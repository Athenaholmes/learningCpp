#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,maxx;
	
	cout<<"�������1����:";
	cin>>maxx;
	cout<<endl;
	
	for(x=2;x<=10;x=x+1){
		
		cout<<"�������"<<x<<"����:";
		cin>>y;
		cout<<endl;
		if(y>maxx){
			maxx=y;
			cout<<"ˢ��maxx="<<y<<endl;
		}
	}
	cout<<"maxx="<<maxx;
	return 0;
}

