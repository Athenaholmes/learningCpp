#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,f;
	cin>>a>>b;
	
	if(a-b==1 || b-a==1){
		f=1;
	}
	else{
		f=0;
	}
	switch(f){
		case(0):
			cout<<"no";
		case(1):
			cout<<"yes";
	}
	return 0;
}
