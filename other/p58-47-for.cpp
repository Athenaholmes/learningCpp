#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for(int x=1;x<=100/1;x++){
		for(int y=1;y<=100/2;y++){
			for(int z=1;z<=100/5;z++){
				if(x*1+y*2+z*5 == 100){
					sum++;
					
					cout<<x<<"öһ�� "<<y<<"ö���� "<<z<<"ö���"<<endl;
				}
			}
		}
	}
	
	cout<<"����"<<sum<<"�ַ���"<<endl;
	
	return 0;
} 
