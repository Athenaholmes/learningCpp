#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	
	if(a%100==0){
		if(a%400==0){
			cout<<a<<"Ϊ����";
}
		else{
			cout<<a<<"��Ϊ����";
		} 
	}
	else{
		if(a%4==0){
			cout<<a<<"Ϊ����";
		}
		else{
			cout<<a<<"��Ϊ����";
		}
	} 
	return 0;
}
