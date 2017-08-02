#include <iostream>
using namespace std;

int main(){
	float x=1;
	
	int num=0;//折叠次数 
	while(x<=100){
		x = x * 2;
		num++;//累计折叠次数 
	}
	cout<<"需要"<<num<<"天";
	
	return 0;
} 
