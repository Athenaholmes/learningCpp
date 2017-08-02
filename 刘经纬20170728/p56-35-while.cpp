#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,n;
	a=10;
    
    while(a<=99){
    	if((a*a)%100==a){
    		cout<<a<<" ";
    	}
    	a=a+1;
    }
    return 0;
}
