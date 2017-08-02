#include <iostream>
using namespace std;

int main(){
	double first = 0, other=0;

	double n=0;
	do{
		cin>>n;

		if(first==0){
			first = n;
		}
		else{
			other = n;
		}

		if(
			(first>0 && other>0) || 
			(first<0 && other<0)
		){
			cout<<other<<endl;
		}
	}while(n!=0);
	
	return 0;
} 
