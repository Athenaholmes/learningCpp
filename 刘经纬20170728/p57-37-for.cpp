#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int x,y,z,k;
	x=1;
	y=1;
	
	cout<<x<<" "<<y<<" ";
	
	k=17;
	for(int t=1;t<=k-2;t++){
		z=x+y;
		x=y;
		y=z;
		cout<<z<<" ";
	}
}
