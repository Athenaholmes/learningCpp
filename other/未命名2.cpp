#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y,z;
	
	for(x=0;x<=9 ;x++){
		for(y=0;y<=9;y++){
			z=67008+x*100+y*10;
			if(z%78 && z%67==0){
				cout<<z<<endl;
				//return 0;
			}
		}
	}
	return 0;
}

