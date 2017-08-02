#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,t,y;
	
	cin>>x;
	
	t=1;
	y=2;
	while(y<=(x-1)){
		if(x%y==0){
//			cout<<"±»Õû³ý";
			t=0;
			 
		}
		y=y+1;
	}
	if(t==1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
