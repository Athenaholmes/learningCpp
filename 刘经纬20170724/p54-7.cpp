#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,c,f;
	cin>>a>>b>>c;
	
	if(a>b){
		if(b>c){
			f=0;
			
		}
		else{
			if(a>c){
				f=0;
			}
			else{
				f=2;
			}
	    }
    }
	else{
		if(b>c){
			f=1;
		}
		else{
			if(c>a){
				f=2;
			}
			else{
				f=0;
			}
		}
	}
		switch(f){
		
			case(0):
				cout<<a;
				break;
			case(1):
				cout<<b;
				break;
			case(2):
			    cout<<c;
			    break;
        }
		
   
	return 0;
}
	
