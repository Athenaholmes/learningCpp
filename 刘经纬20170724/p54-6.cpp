#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,f,t;
	cin>>a>>b;
	

      /* if(a>b){
       	f=0;
       }*/
	
       switch(a<b){
		case(0):
			t=a;
			a=b;
			b=t;
			cout<<a<<" "<<b;
		    break;
	}
	return 0;
}
