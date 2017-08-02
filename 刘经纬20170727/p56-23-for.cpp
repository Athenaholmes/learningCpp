#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	float m = 0;
	
	cin>>n;
	
	for(int t=1;t<=n;t=t+1){
		if(t%2==1){
		    m=m+1.0/t;
		    cout<<"m=m+1.0/"<<t<<"==>"<<m<<endl;
		}
		else{
			m=m-1.0/t;
		    cout<<"m=m-1.0/"<<t<<"==>"<<m<<endl;
		}
	}
    
	return 0;	
}

