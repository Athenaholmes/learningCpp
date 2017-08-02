#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	float a;
	int f;
	
	cin>>a;
	
	if(a-(int)a==0){
		f=0;
	}
	else{
		f=1;
	}
	switch(f){
		case(0):
			cout<<"yes";
			break;
		case(1):
			cout<<"no";
			break;
	}
	return 0;
}
	
	
