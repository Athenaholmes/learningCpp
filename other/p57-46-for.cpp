#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for(int x=0;x<=9;x++){
		for(int y=0;y<=9;y++){
			for(int z=0;z<=9;z++){
				for(int w=0;w<=9;w++){
					sum = x*10000+y*1000+100+z*10+w;
					if(sum%81==0 && sum%91==0){
						cout<<"ÃÜÂëÊÇ"<<sum;
					}
				}
			}
		}
	}
	
	return 0;
} 
