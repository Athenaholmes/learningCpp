#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t,x,y,z;
	
	x=0;
	y=0;
	t=1;
	cout<<"输入一组数据，输入0结束输入:"<<endl;
	do{
		cin>>t;
		if(t>=0){
			y=y+1;
	//		cout<<"目前正数有"<<y<<"个";
		}
		else{
			x=x+1;
	//		cout<<"目前负数有"<<y<<"个";
		}		
	}while(t!=0);
 	cout<<"一共有"<<y<<"个正数"; 
 	cout<<"一共有"<<x<<"个负数";
}
