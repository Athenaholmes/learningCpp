#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	
	if(a%100==0){
		if(a%400==0){
			cout<<a<<"为闰年";
}
		else{
			cout<<a<<"不为闰年";
		} 
	}
	else{
		if(a%4==0){
			cout<<a<<"为闰年";
		}
		else{
			cout<<a<<"不为闰年";
		}
	} 
	return 0;
}
