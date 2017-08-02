#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,f;
	cin>>a;
	
	
	if((a%4==0 && a%100!=0)||(a%400==0)){
		f=0;
	}
	else{
		f=1;
	}
	switch(f){
		case(0):
			cout<<a<<"是闰年";
			break;
		case(1):
		    cout<<a<<"不是闰年"; 
	}
	return 0;
}
