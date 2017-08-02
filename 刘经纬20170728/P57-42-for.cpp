#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,z;
	
	x=4;
	z=0;
	for(y=0;y<=100;y=y+x){
		x=x+1;
		z=z+1;
		cout<<"z="<<z<<endl;
	}
	cout<<"一共要"<<z+1<<"年"; 
}
