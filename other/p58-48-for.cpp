#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin>>n;

	//������	
	for(int i=1;i<=n;i++){
		//iԽ�󣬿ո���Խ�� 
		for(int m=1;m<=n-i;m++){ 
			cout<<" ";
		}
		
		//iԽ�����Ǵ��Խ�� 
		for(int m=1;m<=i*2-1;m++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<endl;

	//�������� 
	for(int i=n;i>=1;i--){
		//iԽ�󣬿ո���Խ�� 
		for(int m=1;m<=n-i;m++){ 
			cout<<" ";
		}
		
		//iԽ�����Ǵ��Խ�� 
		for(int m=1;m<=i*2-1;m++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<endl;

	//��Գƽ����� 
	for(int i=1;i<=n;i++){
		int cur = i;
		if(cur > n/2+1){//����
			cur = n-i+1;
		}
		
		//curԽ�󣬿ո���Խ�� 
		for(int m=1;m<=n-cur;m++){ 
			cout<<" ";
		}
		
		//curԽ�����Ǵ��Խ�� 
		for(int m=1;m<=cur*2-1;m++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<endl;

	//��Գ����ֽ����� 
	for(int i=1;i<=n;i++){
		int cur = i;
		if(cur > n/2+1){//����
			cur = n-i+1;
		}
		
		//curԽ�󣬿ո���Խ�� 
		for(int m=1;m<=n-cur;m++){ 
			cout<<" ";
		}
		
		//curԽ�����Ǵ��Խ�� 
		for(int m=1;m<=cur*2-1;m++){
			cout<<n/2+2-cur;
		}
		
		cout<<endl;
	}
	cout<<endl;

	return 0;
} 
