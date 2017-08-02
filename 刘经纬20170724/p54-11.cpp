#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,f;
	cin>>x;
	
	if(x>0){
		f=0;
	}
	else if(x==0){
		f=1;
	}
	else{
		f=2;
	}
	switch(f){
		case(0):
		  y=1+x*x;
		  cout<<y;
		  break;
		case(1):
		  y=0;
		  cout<<y;
		  break;
		case(2):
		  y=10+x;
		  cout<<y;
		  break;
	
		
	}
	
	
	return 0;
}
