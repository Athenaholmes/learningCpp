#include <iostream>
using namespace std;
int main(){
    int s;
	cin>>s;
	
	if(s<=160){
		cout<<"�ʺ��ܲ�"; 
	}	
	else if(s>160 && s<=175){
		cout<<"�ʺϴ���ë��";
	}
	else{
		cout<<"�ʺϴ�����";
    }
    return 0;
}
