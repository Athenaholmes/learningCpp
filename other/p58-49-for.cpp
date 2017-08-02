#include <iostream>
using namespace std;

int main(){
	for(int i=1000;i<=9999;i++){
		int cur = i;
		int x1 = cur%10;cur=cur/10;
		int x2 = cur%10;cur=cur/10;
		int x3 = cur%10;cur=cur/10;
		int x4 = cur%10;
		
		if(i == x1*x1*x1*x1 + x2*x2*x2*x2 + x3*x3*x3*x3 + x4*x4*x4*x4){
			cout<<i<<endl;
		}
	}
	
	return 0;
} 
