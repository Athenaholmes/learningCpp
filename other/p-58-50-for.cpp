#include <iostream>
using namespace std;

int main(){
	int left = 600;//ʣ�೤�ȣ��趨���ֵ600Ϊ��ֵ 
	for(int x=1;x<=600/69;x++){
		for(int y=1;y<=600/39;y++){
			for(int z=1;z<=600/29;z++){
				int cur = 600 - x*69 - y*39 - z*29;
				//����0��С��֮ǰ��ʣ�೤�ȣ�˵���Ǹ��ŵķ��� 
				if(cur>=0 && cur < left){
					//�滻ԭ�з��� 
					left = cur;
					//��ӡ��ǰ���ŷ��� 
					cout<<"��ǰ����:"<<x<<' '<<y<<' '<<z<<"��ʣ��"<<left<<"cm"<<endl;
				}
			}
		}
	}
	
	return 0;
} 
