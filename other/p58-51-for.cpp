#include <iostream>
using namespace std;

int main(){
	for(int x=1;x<=50;x++){
		for(int y=1;y<=50;y++){
			if(x*x + 24*24 == y*y){
				cout<<"ֱ�Ǳ�:24, "<<x<<", б��:"<<y<<endl;
			}
		}
	}
	
	return 0;
} 
