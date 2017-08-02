#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t,f ;
	cin>>t;
	
	if(t%2==0 && t%3==0){
		f=1;
	}
	else{
		f=0;
	}
	
	switch(f){
		case(0):
			cout<<"error";
			break;
		case(1):
			cout<<t;
			break;
	}
	return 0;
}
