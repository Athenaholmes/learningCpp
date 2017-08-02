#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	float m = 0;

	int n=0;
	cin>>n;
	
	int t = 1;
	while(t<=n){
	    if(t%2==1){
		    m=m+1.0/t;
		    cout<<"m=m+1.0/"<<t<<"==>"<<m<<endl;
		}
		else{
			m=m-1.0/t;
			cout<<"m=m-1.0/"<<t<<"==>"<<m<<endl;	
		}
		t++;
	}
    
	return 0; 
}

