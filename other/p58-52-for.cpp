#include <iostream>
using namespace std;

int main(){
	for(int x=0;x<=9;x++){
		for(int y=0;y<=9;y++){
			int num = 67008+x*100+y*10;

			if(num%67==0 && num%78==0){
				cout<<num;

				return 0;
			}
		}
	}
	return 0;
} 
