#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,maxx;
	
	cout<<"请输入第1个数:";
	cin>>maxx;
	cout<<endl;
	
	x=2;
	while(x<=10){
		
		cout<<"请输入第"<<x<<"个数:";
		cin>>y;
		cout<<endl;
		if(y>maxx){
			maxx=y;
			cout<<"刷新maxx="<<y<<endl;
		}
		x=x+1;
	}
	cout<<"maxx="<<maxx;
	return 0;
}

