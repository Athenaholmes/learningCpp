#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,z;
	
	x=4;
	z=0;
	y=0;
	do{
		x=x+1;
		z=z+1;
		y=y+x;
		cout<<"z="<<z<<endl;
	}while(y<=100);
	cout<<"һ��Ҫ"<<z+1<<"��"; 
}
