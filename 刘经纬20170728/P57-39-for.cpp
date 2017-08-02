#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int x,y;
	x=0;
	y=0;

	cout<<"输入一组数据，输入0结束输入:"<<endl;
	for(int t=1;t!=0;){
		cin>>t;
		if(t==0){
		}
		else if(t>0){
			y=y+1;
			//cout<<"目前正数有"<<y<<"个"<<endl;
		}
		else{
			x=x+1;
			//cout<<"目前负数有"<<x<<"个"<<endl;
		}		
	}
    cout<<"一共有"<<y<<"个正数"<<endl; 
    cout<<"一共有"<<x<<"个负数";
}
