#include <iostream>
#include <cstdio> 
using namespace std;
int main(){
	int x,y,z,t;
	x=0;
	y=0;
	z=0;
	
	cout<<"先输入数据的总个数，再输入数据；";
	cin>>x;
	cout<<endl;	
	
	
	for(t=1;t<=x;t=t+1){
		cout<<"请输入第"<<t<<"个数";
		cin>>y;
		if(y>=30 && y<=60){
			z=z+1;
		}
				 
	}
	cout<<"30-60的数一共有"<<z<<"个";
	return 0; 
	
	
		
		
}

