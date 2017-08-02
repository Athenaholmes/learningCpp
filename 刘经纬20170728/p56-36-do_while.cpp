#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,z,m;
	
	x=3;
	do{
		z=0;
		
		y=1;	
		do{
			if(x%y==0){
				z=z+y;
			}
			
			y=y+1;
		}while(y<=x-1);
		if(z==x){
			cout<<x<<endl;
		}
		
		x=x+1;
	}while(x<=1000);
	
	return 0;
} 
