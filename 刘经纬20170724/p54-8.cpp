#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,t;
	cin>>a>>b>>c;
	
	
	switch(b<a){
		case(0):
			t=a;
			a=b;
			b=t;
			break;
		
	}
	switch(c<a){
		case(0):
			t=c;
			c=a;
			a=t;
			break;
	}
	switch(c<b){
		case(0):
			t=c;
			c=b;
			b=t;
			break;
	}
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}       
