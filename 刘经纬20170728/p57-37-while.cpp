#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,z,k,t;
	x=1;
	y=1;
	t=1;
	
	cout<<x<<" "<<y<<" ";
	
	k=17;
	
	while(t<=k-2){
		z=x+y;
		x=y;
		y=z;
		t=t+1;
		cout<<z<<" ";
	}
}
