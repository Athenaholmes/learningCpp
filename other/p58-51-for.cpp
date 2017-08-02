#include <iostream>
using namespace std;

int main(){
	for(int x=1;x<=50;x++){
		for(int y=1;y<=50;y++){
			if(x*x + 24*24 == y*y){
				cout<<"Ö±½Ç±ß:24, "<<x<<", Ð±±ß:"<<y<<endl;
			}
		}
	}
	
	return 0;
} 
