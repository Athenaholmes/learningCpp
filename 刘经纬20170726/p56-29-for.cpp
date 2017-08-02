#include <iostream>
using namespace std;

int main(){
	int total = 0;
	for(int i=1; i<=10; i++){
		int temp = 1;
		for(int j=1; j<=i;j++){
			temp = temp*j;
		}
		total = total + temp;
	}
	cout<<total;
	
	return 0;
}
