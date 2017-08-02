#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;      
	cin>>a>>b>>c;
	
	if(b>a){
	   a=a+b;
	   b=a-b;
	   a=a-b;
	 
	}
	if(c>a){
	   a=c+a;
	   c=a-c;
	   a=c-a;
	}
	if(c>b){
		b=c+b;
		c=b-c;
		b=b-c;
	}
	
	cout<<a<<" "<<b<<" "<<c;
	
	return 0;
}  
