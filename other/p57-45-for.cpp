#include <iostream>
using namespace std;

int main(){
	float x=0;
	cin>>x;
	
	int days=0;
	while(x>=0.02){
		x = x / 2;
		days++;
	}
	cout<<"ÐèÒª"<<days<<"Ìì";
	
	return 0;
} 
