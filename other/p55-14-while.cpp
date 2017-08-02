#include <iostream>
using namespace std;

int main(){
	int sum =0;
	do{
		cin>>sum;
		if(sum<8){
			cout<<"数据不合法，请重新输入"<<endl;
		}
	}while(sum<8);
	
	int left = sum;	//剩余的钱 
	int total = 0;	//购买的钢笔总数 
	for(int x=0;x<=sum/6;x++){
		for(int y=0;y<=sum/5;y++){
			for(int z=0;z<=sum/4;z++){
				int newLeft = sum - (x*6+y*5+z*4);
				int newTotal = x + y + z;

				if(
					newLeft >= 0 &&
					newLeft <= left && 
					newTotal>=total
				){
					total = newTotal;
					left = newLeft;

					printf(
						"当前最优方案：6元%d支，5元%d支，4元%d支，剩余%d元\n",
						x,
						y,
						z,
						left
					);
				} 
			}
		}
	}
	
	return 0;
} 
