#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a<b){
		if(b<c){
			cout<<c<<' '<<b<<' '<<a<<endl;
		}
		else{
			cout<<b<<' ';
			if(a<c){
				cout<<c<<' '<<a<<endl;
			}
			else{
				cout<<a<<' '<<c<<endl;
			}
		}
	}
	else{
		if(a<c){
			cout<<c<<' '<<a<<' '<<b<<endl;
		}
		else{
			cout<<a<<' ';
			if(b<c){
				cout<<c<<' '<<b<<endl;
			}
			else{
				cout<<b<<' '<<c<<endl;
			}
		}
	}
	cout<<"原始数值:"<<endl;
	cout << a << ' ' << b << ' '<<c<<endl;
} 
