#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,z;
	
	x=4;
	z=0;
	y=0;
	while(y<=100){
		x=x+1;
		z=z+1;
		y=y+x;
		cout<<"z="<<z<<endl;
	}
	cout<<"一共要"<<z+1<<"年"; 
}
