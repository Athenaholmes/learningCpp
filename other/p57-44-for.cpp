#include <iostream>
using namespace std;

int main(){
	float x=0.1;//纸初始厚度 
	
	int num=0;//折叠次数 
	while(x<=8848130){//珠峰高度，单位毫米 
		x = x * 2;//纸的厚度翻倍 
		num++;//累计折叠次数 
	}
	cout<<"需要对折"<<num<<"次";
	
	return 0;
} 
