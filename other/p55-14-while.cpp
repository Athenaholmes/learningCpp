#include <iostream>
using namespace std;

int main(){
	int sum =0;
	do{
		cin>>sum;
		if(sum<8){
			cout<<"���ݲ��Ϸ�������������"<<endl;
		}
	}while(sum<8);
	
	int left = sum;	//ʣ���Ǯ 
	int total = 0;	//����ĸֱ����� 
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
						"��ǰ���ŷ�����6Ԫ%d֧��5Ԫ%d֧��4Ԫ%d֧��ʣ��%dԪ\n",
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
