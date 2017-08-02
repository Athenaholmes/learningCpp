#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int y,z,m;
	
	for(int x=3;x<=1000;x=x+1){
		z=0;	
		for(y=1;y<=x-1;y=y+1){
			if(x%y==0){
				z=z+y;
			}
			
		}
		if(z==x){
			cout<<x<<endl;
		}
	}
	
	return 0;
} 
