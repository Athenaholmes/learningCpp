#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,n;
	a=10;
    
    do{
    	if((a*a)%100==a){
    		cout<<a<<" ";
    	}
    	a=a+1;
    }while(a<=99);
    return 0;
}
