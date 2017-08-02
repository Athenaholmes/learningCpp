#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>b){
		if(b>c){
			cout<<a;
		}
		else{
			if(a>c){
				cout<<a;
			}
			else{
				cout<<c;
			}
	    }
    }
	else{
		if(b>c){
			cout<<b;
		}
		else{
			if(c>a){
				cout<<c;
			}
			else{
				cout<<a;
			}
		}
	return 0;
			
		}
	}
			//cout<< a>c?a:c;
		


