#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,n;
    
    for(a=10;a<=99;a=a+1){
    	if((a*a)%100==a){
    		cout<<a<<" ";
    	}
    }
    return 0;
}
