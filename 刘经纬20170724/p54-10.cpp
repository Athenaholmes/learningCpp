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
			cout<<"�ʺ��ܲ�";
			break; 
		case(0):
		    cout<<"�ʺ���ë��";
		    break;
		case(1):
			cout<<"�ʺ�����";
	        break;	
		} 
		return 0;
	}
	
	

