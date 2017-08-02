#include <iostream>
using namespace std;

int main(){
	int left = 600;//剩余长度，设定最大值600为初值 
	for(int x=1;x<=600/69;x++){
		for(int y=1;y<=600/39;y++){
			for(int z=1;z<=600/29;z++){
				int cur = 600 - x*69 - y*39 - z*29;
				//大于0且小于之前的剩余长度，说明是更优的方案 
				if(cur>=0 && cur < left){
					//替换原有方案 
					left = cur;
					//打印当前最优方案 
					cout<<"当前最优:"<<x<<' '<<y<<' '<<z<<"，剩余"<<left<<"cm"<<endl;
				}
			}
		}
	}
	
	return 0;
} 
