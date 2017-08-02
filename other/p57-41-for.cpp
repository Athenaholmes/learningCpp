#include <iostream>
using namespace std;

int main(){
	float sum=200; //第一次下落为单程，一共200米 
	
	float s=200/2;
	for(int i=2;i<=10;i++){
		sum += s*2; //后续下落为双程 
		s = s/2;
	}

	cout<<sum;
	
	return 0;
} 
