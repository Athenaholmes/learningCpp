#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int x,f;
	cin>>x;
	
	if(x>=0 && x<=100){
		f=1;
	}
	else{
		f=2;
	}
	switch(f){
		case(1):
			cout<<x*x;
			break;
		case(2):
			cout<<"请再次输入数据：";
			cin>>x;
	    	if(x>=0 && x<=100){
	        	f=1;
	       }
			switch(f){
			    case(1):x;
					cout<<x*x;
					break;
				case(2):
					cout<<"error";
				    break;
			}
			
			
			
	}
		return 0;
		
	}

