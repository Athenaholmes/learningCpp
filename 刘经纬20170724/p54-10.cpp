#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int s,f;
	cin>>s;
	
	if(s<=160){
		f=-1;
	}
	else if(s>160 && s<=175){
		f=0;
	}
	else{
		f=1;
	}
	switch(f){
		case(-1):
			cout<<"ÊÊºÏÅÜ²½";
			break; 
		case(0):
		    cout<<"ÊÊºÏÓðÃ«Çò";
		    break;
		case(1):
			cout<<"ÊÊºÏÀºÇò";
	        break;	
		} 
		return 0;
	}
	
	

