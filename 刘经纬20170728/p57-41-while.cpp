#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t;
	double x,y,z;
	
	z=200;
	x=200/2;
	t=2;
	while(t<=10){
        y=x*2;
        z=z+y;
        x=x/2;
        t=t+1;
		cout<<"z="<<z<<endl;
	}
	cout<<z;
	

}
